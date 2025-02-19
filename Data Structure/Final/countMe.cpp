#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; cin.ignore();

    while(tc--){

        string s;
        getline(cin, s);
    
        stringstream str(s);
    
        string word;
    
        map<string, int> mp;
    
        string maxKey;
        int maxValue = 0;
    
        while(str >> word){
    
            mp[word]++;
    
            if(mp[word] > maxValue){
    
                maxValue = mp[word];
                maxKey = word;
            }
        }
    
        cout << maxKey << " " << maxValue << endl;
    }

    
    return 0;
}