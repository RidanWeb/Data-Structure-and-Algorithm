#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){

        int n; cin >> n;

        int result = n / 5;

        int temp = result;

        while(temp >= 3){

            int x = temp / 3;
            result += x;

            temp = (temp % 3) + x;
        }

        cout << result << endl;
    }
    return 0;
}