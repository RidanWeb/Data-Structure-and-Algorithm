#include <bits/stdc++.h>
using namespace std;

long long int dp[100005];

bool makeIt(int x, int n){

    if(x == n){

        return true;

    }else if(x > n){

        return false;
    }



    if(dp[x] != -1){

        return dp[x];
    }


    dp[x] = makeIt(x+3, n) || makeIt(x*2, n);

    return dp[x];

    


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){

        int n; cin >> n;

        memset(dp, -1, sizeof(dp));

        bool result = makeIt(1, n);

        if(result){

            cout << "YES" << endl;

        }else{

            cout << "NO" << endl;
        }

    }



    return 0;
}