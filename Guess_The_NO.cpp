#include <bits/stdc++.h>
using namespace std;

long long int dp[100000005];

bool guessNo(long long int x, long long int n){

    if(x == n){

        return true;

    }else if(x > n){

        return false;
    }



    if(dp[x] != -1){

        return dp[x];
    }


    dp[x] = guessNo(x+3, n) || guessNo(x+4, n);

    return dp[x];

    


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n; cin >> n;

    memset(dp, -1, sizeof(dp));

    bool result = guessNo(0, n);

    if(result){

        cout << "YES" << endl;
    }else{

        cout << "NO" << endl;
    }



    return 0;
}