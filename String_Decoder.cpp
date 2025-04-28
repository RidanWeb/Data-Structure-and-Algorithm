#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){

        string myString; cin >> myString;

        for(int i = 0; i < myString.size(); i += 2){ 

            char a = myString[i];
            int num = myString[i + 1] - '0';

            while(num--){

                cout << a;
            }

        }

        cout << endl;
    }



    
    return 0;
}
