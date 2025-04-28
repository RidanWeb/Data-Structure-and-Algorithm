#include <bits/stdc++.h>
using namespace std;

auto val(long long int i){

    if(i == 0){

        return (long long int)0;
    }

    long long int s = (i - 1) / 3;
    long long int sum = 3 * s * (s + 1) / 2;
    long long int rem = i - 3 * s;

    sum += rem * (s + 1);

    return sum;


};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin >> n >> q;

    while(q--){

        long long int l, r; cin >> l >> r;

        if(l < 1 || r > n || l > r){

            continue;
        }

        long long int totalS = val(r) - val(l-1);

        cout << totalS << '\n';
    }

    return 0;
}