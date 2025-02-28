// https://leetcode.com/problems/count-sub-islands/

// class Solution {
//     public:
    
//         bool isVisited[505][505];
//         int n, m;
    
//         bool flag;
    
//         vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    
//         bool valid(int x, int y){
    
//             if(x < 0 || x >= n || y < 0 || y >= m){
    
//                 return false;
    
//             }else{
    
//                 return true;
    
//             }
//         }
    
//         void dfs(int si, int sj, vector<vector<int>>& grid2, vector<vector<int>>& grid1){
    
//             isVisited[si][sj] = true;
    
//             if(grid1[si][sj] != 1){
    
//                 flag = false;
    
//             }
    
//             for(int i = 0; i < 4; i++){
    
//                 int ci = si + d[i].first;
//                 int cj = sj + d[i].second;
    
//                 if(valid(ci, cj) == true && !isVisited[ci][cj] && grid2[ci][cj] == 1){
    
//                     dfs(ci, cj, grid2, grid1);
//                 }
//             }
//         }
//         int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
            
//             n = grid2.size();
//             m = grid2[0].size();
    
//             memset(isVisited, false, sizeof(isVisited));
    
//             int cnt = 0;
    
//             for(int i = 0; i < n; i++){
//                 for(int j = 0; j < m; j++){
    
//                     if(!isVisited[i][j] && grid2[i][j] == 1){
    
//                         flag = true;
//                         dfs(i, j, grid2, grid1);
    
//                         if(flag){
    
//                             cnt++;
//                         }
    
//                     }
//                 }
//             }
    
//             return cnt;
    
    
//         }
//     };
