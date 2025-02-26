#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
bool isVisited[1005];

void dfs(int src){

    //base Case

    cout << src << " ";
    isVisited[src] = true;

    for(int child : adjList[src]){

        if(isVisited[child] == false){

            dfs(child);
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

    int count = 0;
    for(int i = 0; i < n; i++){

        if(isVisited[i] == false){

            count++;
            dfs(i);
            cout << endl;
            
        }
    }

    cout << "No of Component : " << count;
    return 0;
}




// 7 7
// 0 2
// 2 4
// 0 1
// 1 5
// 1 3
// 0 3
// 3 6
// 0

// 7 7
// 0 2
// 2 4
// 0 1
// 1 5
// 1 3
// 0 3
// 3 6
// 0


