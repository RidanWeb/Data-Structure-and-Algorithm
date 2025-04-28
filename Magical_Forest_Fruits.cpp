#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q; cin >> t >> q;

    int trees[t+1];

    for(int i = 1; i <= t; i++){

        cin >> trees[i];
    }

    long long int preFsum[t+1] = {0};

    for(int i = 1; i <= t; i++){

        preFsum[i] = preFsum[i-1] + trees[i];
    }



    while(q--){

        int l, r; cin >> l >> r;

        cout << preFsum[r] - preFsum[l-1] << '\n';

    }
    return 0;
}