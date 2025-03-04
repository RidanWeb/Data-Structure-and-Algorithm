#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[105];
int isVisited[105];
bool path[105];

bool flag;


void dfs(int src){

    isVisited[src] = true;
    path[src] = true;

    for(int child : adjList[src]){

        if(isVisited[child] && path[child]){

            flag = true;
        }

        if(!isVisited[child]){

            dfs(child);
        }
    }

    path[src] = false;
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;
    flag = false;
    memset(isVisited, false, sizeof(isVisited));
    memset(path, false, sizeof(path));

    while(e--){

        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
    }

    for(int i = 0; i < n; i++){

        if(!isVisited[i]){

            dfs(i);
        }
    }

    if(flag){

        cout << "Cycle Detected" << endl;
    }else{

        cout << "Cycle is not Detected" << endl;
    }


    return 0;
}