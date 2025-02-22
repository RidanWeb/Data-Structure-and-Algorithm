#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    if((a == b) && (b == c)){

        if ((a > 0) && (b > 0) && (c > 0)){

            cout << "Yes";
        }else{

        cout << "No";
    }

    }else{

        cout << "No";
    }
    return 0;
}