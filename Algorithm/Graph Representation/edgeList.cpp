#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    vector<pair<int, int>>edgeList;

    while(e--){

        int a, b; cin >> a >> b;

        edgeList.push_back({a, b});
    }

    // for(int i = 0; i < edgeList.size(); i++){

    //     cout << i << " = " << "{" << edgeList[i].first << "," << edgeList[i].second << "}" << endl;
    // }

    for(pair<int, int> x : edgeList){

        cout << x.first << " " << x.second << endl;
    }



    return 0;
}