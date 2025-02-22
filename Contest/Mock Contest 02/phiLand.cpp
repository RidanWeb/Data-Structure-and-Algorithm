#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){

        cout << (char) tolower(s[i]);
    }
    return 0;
}