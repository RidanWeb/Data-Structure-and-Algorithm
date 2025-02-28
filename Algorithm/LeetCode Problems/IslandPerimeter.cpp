// https://leetcode.com/problems/island-perimeter/description/


// Solution:

// class Solution {
//     public:
    
//         int cnt;
    
//         bool isVisited[105][105];
//         vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    
//         int n, m;
    
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
    
//                 // if(Valid[ci][cj] && !isVisited[ci][cj] && grid[ci][cj] == 1){
    
//                 //     dfs(ci, cj, grid);
//                 // }
    
//                 if(valid(ci, cj) == false){
    
//                     cnt++;
    
//                 }else if(valid(ci, cj) == true && grid[ci][cj] == 0){
    
//                     cnt++;
    
//                 }else if(valid(ci, cj) == true && !isVisited[ci][cj] && grid[ci][cj] == 1){
    
//                     dfs(ci, cj, grid);
//                 }
//             }
//         }
//         int islandPerimeter(vector<vector<int>>& grid) {
    
//             n = grid.size();
//             m = grid[0].size();
    
//             cnt = 0;
    
//             memset(isVisited, false, sizeof(isVisited));
    
//             for(int i = 0; i < n; i++){
    
//                 for(int j = 0; j < m; j++){
    
//                     if(grid[i][j] == 1 && !isVisited[i][j]){
    
//                         dfs(i, j, grid);
//                     }
//                 }
//             }
    
//             return cnt;
    
    
            
//         }
//     };