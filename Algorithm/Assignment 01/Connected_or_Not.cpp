#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    int adjMat[n][n];

    // shortcut of for loop
    memset(adjMat, 0, sizeof(adjMat));

    for(int i = 0; i < e; i++){

        int a, b; cin >> a >> b;
        adjMat[a][b] = 1;

    }


    int q; cin >> q;

    while(q--){

        int a, b; cin >> a >> b;

        if(a < n && b < n && a >= 0 && b >= 0){

            if((a == b || adjMat[a][b] == 1)){

                cout << "YES" << endl;
            }else{
    
                cout << "NO" << endl;
            }

        }
    }
    




    return 0;
}