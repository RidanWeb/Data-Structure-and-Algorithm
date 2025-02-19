#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;



    while(n--){

        string s;
        // getline (cin, s);
        cin >> s;

        stack<char> st0;
        stack<char> st1;

        for(char c : s){

            if(c == '0'){

                st0.push(c);
            }else{

                st1.push(c);
            }
        }

        while(!st1.empty() && !st0.empty()){

            if(st1.top() != st0.top()){

                st1.pop();
                st0.pop();
            }
        }

        if(st1.empty() && st0.empty()){

            cout << "YES" << endl;
        }else{

            cout << "NO" << endl;
        }

    }    

    return 0;
}