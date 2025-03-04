#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[105];
int isVisited[105];
int parent[105];

bool flag;


void bfs(int src){

    queue<int> q;

    q.push(src);
    isVisited[src] = true;

    while(!q.empty()){

        int par = q.front();
        // cout << parent << " ";
        q.pop();

        for(int child : adjList[par]){

            if(isVisited[child] && parent[par] != child){

                flag = true;
            }

            if(!isVisited[child]){

                q.push(child);
                parent[child] = par;
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
    flag = false;
    memset(isVisited, false, sizeof(isVisited));
    memset(parent, -1, sizeof(parent));

    while(e--){

        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(int i = 0; i < n; i++){

        if(!isVisited[i]){

            bfs(i);
        }
    }

    if(flag){

        cout << "Cycle Detected" << endl;
    }else{

        cout << "Cycle is not Detected" << endl;
    }


    return 0;
}