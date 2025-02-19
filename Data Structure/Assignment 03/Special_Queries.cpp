#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    queue<string> qu;

    while(n--){

        int x; cin >> x;

        if(x == 1){

            if(qu.empty()){

                cout << "Invalid" << endl;

            }else{

                cout << qu.front() << endl;
                qu.pop();

            }
        }else{

            string s;
            cin >> s;

            qu.push(s);
        }
    }


    return 0;
}