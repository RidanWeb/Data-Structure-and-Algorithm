#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){

        int n; cin >> n;

        vector<long long int> h;

        while(n--){

            long long int a; cin >> a;
            h.push_back(a);
        }



        long long int fMax = INT_MIN, sMax = INT_MIN;
        int findex = -1, Sindex = -1;

        for (int i = 0; i < h.size(); i++) {

            if (h[i] > fMax) {

                sMax = fMax;
                Sindex = findex;

                fMax = h[i];
                findex = i;

            } else if (h[i] > sMax && h[i] != fMax) {

                sMax = h[i];
                Sindex = i;
            }
        }

        if(findex < Sindex){

            cout << findex << " " << Sindex << endl;
        }else{

            cout << Sindex << " " << findex << endl;
        }

        




    }
    return 0;
}