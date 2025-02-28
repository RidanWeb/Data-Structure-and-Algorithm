// https://leetcode.com/problems/find-if-path-exists-in-graph/description/

// class Solution {
//     public:
    
//         bool isVisited[200005];
//         vector<int> adjList[200005];
    
//         void dfs(int source){
    
//             isVisited[source] = true;
    
//             for(int child : adjList[source]){
    
//                 if(!isVisited[child]){
    
//                     dfs(child);
//                 }
//             }
//         }
    
//         bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            
//             memset(isVisited, false, sizeof(isVisited));
    
//             for(int i = 0; i < edges.size(); i++){
    
//                 int first = edges[i][0];
//                 int second = edges[i][1];
    
//                 adjList[first].push_back(second);
//                 adjList[second].push_back(first);
    
    
//             }
    
//             dfs(source);
    
//             return isVisited[destination];
//         }
//     };