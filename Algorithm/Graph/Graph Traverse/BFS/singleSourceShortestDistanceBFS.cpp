#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
int isVisited[1005];
int level[1005];


void bfs(int src){

    queue<int> q;

    q.push(src);
    isVisited[src] = true;
    level[src] = 0;

    while(!q.empty()){

        int parent = q.front();
        q.pop();

        for(int child : adjList[parent]){

            if(!isVisited[child]){

                q.push(child);
                isVisited[child] = true;
                level[child] = level[parent] + 1;
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

    while(e--){

        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int src, dest; cin >> src >> dest;

    bfs(src);

    // for(int i = 0; i < n; i++){

    //     cout << i << " = " << level[i] << endl;
    // }

    cout << "Shortest Distance = " << level[dest] << endl;

    if(level[dest] >= 0){

        cout << "Connected and level is = " << level[dest] << endl;

    }else{

        cout << "Not Connected" << endl;
    }


    return 0;
}