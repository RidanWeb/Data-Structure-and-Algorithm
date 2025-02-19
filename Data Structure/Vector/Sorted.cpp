#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    int tc; cin >> tc;

    while(tc--){


        int n; cin >> n;
        vector<long long int> v(n);

        for(int i = 0; i < n; i++){

            cin >> v[i];
        }
        int flag = 0;

        for(int i = 0; i < n-1; i++){

            if(v[i] > v[i+1]){

                flag = 1;
                break;
            }
        }

        if(flag == 0){

            cout << "YES" << endl;
        }else{

            cout << "NO" << endl;
        }


    }




   

    return 0;
}