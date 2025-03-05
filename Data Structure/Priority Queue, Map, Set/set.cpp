#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;

    int n; cin >> n;

    while(n--){

        int v; cin >> v;
        s.insert(v);
    }

    for(auto it = s.begin(); it != s.end(); it++){

        cout << *it << " " << endl;  
    }


    if(s.count(5)){

        cout << "Yes" << endl;  
    }else{

        cout << "No" << endl;
    }

    
    return 0;
}