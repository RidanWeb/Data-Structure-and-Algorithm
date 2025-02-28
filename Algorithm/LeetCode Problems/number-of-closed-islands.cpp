// https://leetcode.com/problems/number-of-closed-islands/


// class Solution {
//     public:
    
//         bool isVisited[105][105];
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
    
//         void dfs(int si, int sj, vector<vector<int>>& grid){
    
//             isVisited[si][sj] = true;
    
//             for(int i = 0; i < 4; i++){
    
//                 int ci = si + d[i].first;
//                 int cj = sj + d[i].second;
    
//                 if(!valid(ci, cj)){
    
//                     flag = false;
//                 }
    
//                 if(valid(ci, cj) == true && !isVisited[ci][cj] && grid[ci][cj] == 0){
    
//                     dfs(ci, cj, grid);
//                 }
//             }
//         }
    
    
//         int closedIsland(vector<vector<int>>& grid) {
    
//             n = grid.size();
//             m = grid[0].size();
    
//             memset(isVisited, false, sizeof(isVisited));
    
//             int cnt = 0;
    
//             for(int i = 0; i < n; i++){
//                 for(int j = 0; j < m; j++){
    
//                     if(!isVisited[i][j] && grid[i][j] == 0){
    
//                         flag = true;
//                         dfs(i, j, grid);
    
//                         if(flag){
    
//                             cnt++;
//                         }
    
//                     }
//                 }
//             }
    
//             return cnt;
    
    
//         }
    
//     };