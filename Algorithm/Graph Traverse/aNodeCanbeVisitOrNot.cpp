#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
bool isVisited[1005];

void bfs(int src){

    queue<int> q;

    q.push(src);
    isVisited[src] = true;

    while(!q.empty()){

        int parent = q.front();
        q.pop();

        for(int child : adjList[parent]){

            if(!isVisited[child]){

                q.push(child);
                isVisited[child] = true;

            }
        }
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    while(e--){

        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    memset(isVisited, false, sizeof(isVisited));

    int src, dest; cin >> src >> dest;
    
    bfs(src);

    if(isVisited[dest]){

        cout << "Yes" << endl;
        
    }else{

        cout << "No" << endl;
    }

    return 0;
}