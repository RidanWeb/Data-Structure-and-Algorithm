#include <bits/stdc++.h>
using namespace std;

int val[1005];
int weight[1005];

int knapSack(int i, int maxWeight){

    if(i < 0 || maxWeight <= 0){

        return 0;
    }

    if(weight[i] <= maxWeight){

        ///get 2 Option
        /// 1. Contain in bag | 2. Can not Contain in bag
        int opt1 = knapSack(i-1, maxWeight - weight[i]) + val[i];
        int opt2 = knapSack(i-1, maxWeight);

        return max(opt1, opt2);
    }else{

        ///get 1 option
        ///Can not Contain bag
        return knapSack(i-1, maxWeight);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maxWeight;

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> val[i];
    }

    for(int i = 0; i < n; i++){

        cin >> weight[i];
    }

    cin >> maxWeight;

    cout << knapSack(n-1, maxWeight) << endl;


    return 0;
}


// 4
// 10 4 7 5
// 4 3 2 5
// 8