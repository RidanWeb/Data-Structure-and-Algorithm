#include <bits/stdc++.h>
using namespace std;

long long cs(string s, string t){


    int m = s.length();
    int n = t.length();

    vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

    for (int i = 0; i <= m; i++){

        dp[i][0] = 1;
    }

    for (int i = 1; i <= m; i++){


        for (int j = 1; j <= n; j++){

            if (s[i - 1] == t[j - 1]){


                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];


            } else {


                dp[i][j] = dp[i - 1][j];


            }
        }
    }

    

    return dp[m][n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--){


        string s, t;
        cin >> s >> t;

        long long result = cs(s, t);
        cout << result << '\n';
    }







    return 0;
}