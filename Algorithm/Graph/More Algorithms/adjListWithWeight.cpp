#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    vector<pair<int, int>> adjList[n];

    while(e--){

        int a, b, c;
        cin >> a >> b >> c;

        adjList[a].push_back({b, c});
        adjList[b].push_back({a, c});
    }

    for(int i = 0; i < n; i++){

        cout << i << " : ";
        for(auto x : adjList[i]){

            cout << x.first << " " << x.second << ","; 
        }

        cout << endl;
    }
    return 0;
}