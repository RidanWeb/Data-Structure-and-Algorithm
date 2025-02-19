#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    int n; cin >> n;

    vector<long long int> v(n);
    vector<long long int> preSum(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];
    }

    preSum[0] = v[0];

    for(int i = 1; i < n; i++){

        preSum[i] = preSum[i-1] + v[i];
    }

    reverse(preSum.begin(), preSum.end());


    for(int i = 0; i < n; i++){

        cout << preSum[i] << " ";
    }


   

    return 0;
}