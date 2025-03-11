#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    long long int adjMatrix[n+1][n+1];

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= n; j++){

            if(i == j){
                adjMatrix[i][j] = 0;
            }else{

                adjMatrix[i][j] = LLONG_MAX;
            }
        }
    }

    while(e--){

        long long int a, b, c; cin >> a >> b >> c;
        if(adjMatrix[a][b] == LLONG_MAX || adjMatrix[a][b] > c){
            
            adjMatrix[a][b] = c;
        }
    }


    for(int k = 1; k <= n; k++){

        for(int i = 1; i <= n; i++){
        
            for(int j = 1; j <= n; j++){
    
                if(adjMatrix[i][k] != LLONG_MAX && adjMatrix[k][j] != LLONG_MAX){

                    adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
                }
            }
        }
    }

    
    int q; cin >> q;

    while(q--){

        int x, y; cin >> x >> y;

        if(adjMatrix[x][y] == LLONG_MAX){

            cout << -1 << endl;

        }else{

            cout << adjMatrix[x][y] << endl;
        }
    }

    return 0;
}
