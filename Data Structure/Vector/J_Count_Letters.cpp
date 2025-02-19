#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    // getline(cin, s);
    cin >> s;

    vector<int> freqV(26);

    for(int i = 0; i < s.size(); i++){
        
        int x = s[i];
        freqV[x-97]++;

    }

    for(auto i = 0; i < 26; i++){

        if(freqV[i] != 0){

            cout << char(i+97) << " : " << freqV[i] << endl;
        }
    }


    
    






    return 0;
}