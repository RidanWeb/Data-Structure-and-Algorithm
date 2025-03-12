#include <bits/stdc++.h>
using namespace std;

long long int dp[1005];

long long int tetra(long long int n){

    if(n < 2){

        return n;
    }

    if(n >= 2 && n <= 3){

        return n - 1;
    }

    if(dp[n] != -1){

        return dp[n];
    }

    dp[n] = tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);

    return dp[n];


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    int n; cin >> n;

    cout << tetra(n);


    return 0;
}