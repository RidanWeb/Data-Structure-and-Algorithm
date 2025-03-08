#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adjList[105];

int dis[105];

void dijkstra(int src){

    queue<pair<int, int>> q;
    q.push({src, 0});

    dis[src] = 0;

    while(!q.empty()){

        pair<int, int> par = q.front();
        q.pop();

        int parNode = par.first;
        int parDis = par.second;

        for(auto child : adjList[parNode]){

            int childNode = child.first;
            int childDis = child.second;

            if(parDis + childDis < dis[childNode]){

                dis[childNode] = parDis + childDis;
                q.push({childNode, dis[childNode]});
            }
        }
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n, e; cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    

    while(e--){

        int a, b, c;
        cin >> a >> b >> c;

        adjList[a].push_back({b, c});
        adjList[b].push_back({a, c});
    }

    int src; cin >> src;

    dijkstra(src);

    for(int i = 0; i < n; i++){

        cout << i << "->" << dis[i] << endl;
    }


    return 0;
}