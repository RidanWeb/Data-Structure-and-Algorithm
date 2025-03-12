#include <bits/stdc++.h>
using namespace std;

long long int dp[1005];

long long int fibo(long long int n){

    if(n < 2){

        return n;
    }

    if(dp[n] != -1){

        return dp[n];
    }

    dp[n] = fibo(n-1) + fibo(n-2);

    return dp[n];


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    int n; cin >> n;

    cout << fibo(n);


    return 0;
}