#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    vector<int> adjList[n];

    while(e--){

        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int q; cin >> q;

    while(q--){

        int x; cin >> x;

        sort(adjList[x].begin(), adjList[x].end(), greater<>());
        if(adjList[x].empty()){
            cout << -1;
        }else{
            for(int x : adjList[x]){

                cout << x << " ";
            }
        }
        cout << endl;
    }

    return 0;
}