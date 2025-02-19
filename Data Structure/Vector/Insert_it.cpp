#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    int n; cin >> n;
    vector<int> u(n);

    for(int i = 0; i < n; i++){

        cin >> u[i];
    }

    int m; cin >> m;
    vector<int> v(m);

    for(int i = 0; i < m; i++){

        cin >> v[i];
    }

    int x; cin >> x;

    
    u.insert(u.begin() + x, v.begin(), v.end());
    
    for(int i = 0; i < n+m; i++){

        cout << u[i] << " ";
    }

        




   

    return 0;
}