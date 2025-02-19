#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){

        cin >> v[i];
    }

    for(int i = 0; i < n/2; i++){

        int temp = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = temp;

    }

    for(auto i = v.begin(); i < v.end(); i++){

        cout << *i << " ";
    }






    return 0;
}