#include <bits/stdc++.h>
using namespace std;


int linearSearch(vector<long long int> v, int si, long long int key){


    for(int i = 0; i < si; i++){

        if(v[i] == key){

            return i;

        }

    }


    return -1;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<long long int> v;

    for(int i = 0; i < n; i++){

        long long int a; cin >> a;

        v.push_back(a);
    }

    long long int find; cin >> find;

    cout << linearSearch(v, n, find) << endl;;




    return 0;
}