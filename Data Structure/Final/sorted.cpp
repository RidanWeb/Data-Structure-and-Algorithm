#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--){

        set<int> s;

        int n; cin >> n;

        while(n--){

            int v; cin >> v;
            s.insert(v);
        }

        for(auto it = s.begin(); it != s.end(); it++){

            cout << *it << " ";  
        }

        cout << endl;

    }


    
    return 0;
}