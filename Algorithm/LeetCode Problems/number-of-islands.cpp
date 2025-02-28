// https://leetcode.com/problems/number-of-islands/submissions/1557877337/


// class Solution {
//     public:
    
//         bool isVisited[305][305];
//         vector<pair<int, int>> d = {{0,1},{0,-1},{1, 0},{-1, 0}};
    
//         int n, m;
    
//         bool valid(int x, int y){
    
//             if(x < 0 || x >= n || y < 0 || y >= m){
    
//                 return false;
//             }else{
    
//                 return true;
//             }
//         }
    
//         void dfs(int si, int sj, vector<vector<char>>& grid){
    
//             isVisited[si][sj] = true;
    
//             for(int i = 0; i < 4; i++){
    
//                 int ci = si + d[i].first;
//                 int cj = sj + d[i].second;
    
//                 if(valid(ci, cj) == true && !isVisited[ci][cj] && grid[ci][cj] == '1'){
    
//                     dfs(ci, cj, grid);
//                 }
//             }
    
    
//         }
    
    
    
//         int numIslands(vector<vector<char>>& grid) {
    
//             n = grid.size();
//             m = grid[0].size();
    
//             memset(isVisited, false, sizeof(isVisited));
    
//             int cnt = 0;
    
//             for(int i = 0; i < n; i++){
    
//                 for(int j = 0; j < m; j++){
    
//                     if(!isVisited[i][j] && grid[i][j] == '1'){
    
//                         cnt++;
//                         dfs(i, j, grid);
                        
//                     }
//                 }
//             }
    
    
//             return cnt;
            
//         }
//     };