#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){

        map<int, int> mp;

        int sz; cin >> sz;

        for(int i = 0; i < sz; i++){

            int a; cin >> a;
            mp[a]++;

        }

        for(auto it = mp.begin(); it != mp.end(); it++){

            if((it->second % 2 != 0)){

                cout << it->first << endl;
            }
        }
    }



    return 0;
}
