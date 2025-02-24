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

    for(int i = 0; i < n; i++){

        cout << i << " => ";
        for(int x : adjList[i]){

            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}