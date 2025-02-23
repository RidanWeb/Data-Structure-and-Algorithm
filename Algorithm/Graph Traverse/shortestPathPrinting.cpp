#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
int isVisited[1005];
int level[1005];
int parents[1005];


void bfs(int src){

    queue<int> q;

    q.push(src);
    isVisited[src] = true;
    level[src] = 0;
    parents[src] = -1; /// na korleo -1 e thakto

    while(!q.empty()){

        int parent = q.front();
        q.pop();

        for(int child : adjList[parent]){

            if(!isVisited[child]){

                q.push(child);
                isVisited[child] = true;
                level[child] = level[parent] + 1;
                parents[child] = parent;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n, e; cin >> n >> e;

    memset(isVisited, false, sizeof(isVisited));
    memset(level, -1, sizeof(isVisited));
    memset(parents, -1, sizeof(parents));

    while(e--){

        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int src, dest; cin >> src >> dest;

    bfs(src);

    // for(int i = 0; i < n; i++){

    //     cout << i << " Parent = " << parents[i] << endl;
    // }

    vector<int> path;

    int node = dest;

    while(node != -1){

        path.push_back(node);
        node = parents[node];
    }

    reverse(path.begin(), path.end());

    for(int x : path){

        cout << x << " ";
    }




    return 0;
}