#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];
    }

    int flag = 0;
    
    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){

            if(v[j] == v[i]){

                flag = 1;

            }
        }
        if(flag == 1){

            break;
        }
    }

    if(flag == 0){

        cout << "NO" << endl;
    }else{

        cout << "YES" << endl;
    }

    return 0;
}