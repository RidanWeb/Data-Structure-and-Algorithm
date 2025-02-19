
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        
        cin >> a[i];
    }

    int v; cin >> v;

    a.push_back(v);

    int current_loc = a.size() - 1;

    while(current_loc != 0){

        int parent_loc = (current_loc - 1)/2;

        if(a[parent_loc] < a[current_loc]){

            swap(a[parent_loc], a[current_loc]);
        }else{

            break;
        }

        current_loc = parent_loc;
    }

    for (int i = 0; i < a.size(); i++){

        cout<< a[i] << " ";
    }
    
    
    return 0;
}