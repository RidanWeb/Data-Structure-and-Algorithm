#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];
    }

    for(int i = 0; i < n; i++){

        if(v[i] > 0){
            v[i] = 1;
        }else if(v[i] < 0){
            v[i] = 2;
        }

    }

    for(auto i = v.begin(); i < v.end(); i++){

        cout << *i << " ";
    }






    return 0;
}