#include <bits/stdc++.h>
using namespace std;

int val[1005];
int weight[1005];

int dp[1005][1005];

int knapSack(int i, int maxWeight){

    if(i < 0 || maxWeight <= 0){

        return 0;
    }

    if(dp[i][maxWeight] != -1){

        return dp[i][maxWeight];
    }

    if(weight[i] <= maxWeight){

        int opt1 = knapSack(i-1, maxWeight - weight[i]) + val[i];
        int opt2 = knapSack(i-1, maxWeight);

        dp[i][maxWeight] = max(opt1, opt2);

        return dp[i][maxWeight];

    }else{

        dp[i][maxWeight] = knapSack(i-1, maxWeight);

        return dp[i][maxWeight];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){

        int n, maxWeight;

        cin >> n >> maxWeight;
        
        for(int i = 0; i < n; i++){
    
            cin >> weight[i];
        }

        for(int i = 0; i < n; i++){

            cin >> val[i];
        }

        
        for(int i = 0; i <= n; i++){

            for(int j = 0; j <= maxWeight; j++){

                dp[i][j] = -1;
            }
        }

        cout << knapSack(n-1, maxWeight) << endl;
    


    }



    return 0;
}

