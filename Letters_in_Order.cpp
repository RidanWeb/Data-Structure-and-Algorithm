#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;

    int freq[26];

    memset(freq, 0, sizeof(freq));

    for(int i = 0; i < s.size(); i++){

        char a = s[i];

        int x = a - 'a';

        freq[x]++;
    }

    for(int i = 0; i < 26; i++){

        if(freq[i] != 0){

            int x = 97 + i;

            cout << (char)x;
        }
    }
    return 0;
}