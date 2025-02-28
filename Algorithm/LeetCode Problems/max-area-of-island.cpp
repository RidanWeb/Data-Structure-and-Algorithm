// https://leetcode.com/problems/max-area-of-island/submissions/1557760965/


// class Solution {

//     bool isVisited[55][55];

//     int n,m;

//     int cnt;

//     vector<pair<int, int>> d = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};

//     bool valid(int i, int j){

//         if(i < 0 || i >= n || j < 0 || j >= m){

//             return false;

//         }else{

//             return true;

//         }
//     }


//     void dfs(int si, int sj, vector<vector<int>>& grid){

//         cnt++;
//         isVisited[si][sj] = true;

//         for(int i = 0; i < 4; i++){

//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;

//             if(valid(ci, cj) == true && !isVisited[ci][cj] && grid[ci][cj] == 1){

//                 dfs(ci, cj, grid);
//             }
//         }


//     }


// public:
//     int maxAreaOfIsland(vector<vector<int>>& grid) {

//         n = grid.size();
//         m = grid[0].size();

//         int maxCount = 0;

//         memset(isVisited, false, sizeof(isVisited));

//         for(int i = 0; i < n; i++){

//             for(int j = 0; j < m; j++){

//                 if(!isVisited[i][j] && grid[i][j] == 1){

//                     cnt = 0;

//                     dfs(i, j, grid);

//                     if(cnt >= maxCount){

//                         maxCount = cnt;
//                     }


//                 }

                
//             }
//         }



//         return maxCount;


        
//     }
// };