#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){

        string s;
        cin >> s;

        stack<int>st;

        int flag = 0;

        for(char c : s){

            if(c == '0'){

                st.push(c);

            }else if(c == '1'){

                if(st.empty()){

                    flag++; ///for checking 111111
                    break;
                }
                st.pop();

            }
        }

        if(st.empty() && flag == 0){

            cout << "YES" << endl;

        }else{

            cout << "NO" << endl;

        }
    }



    return 0;
}