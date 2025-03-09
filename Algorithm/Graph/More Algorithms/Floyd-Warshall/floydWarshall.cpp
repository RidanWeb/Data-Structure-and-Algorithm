#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e; cin >> n >> e;

    int adjMatrix[n][n];

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){

            if(i == j){
                adjMatrix[i][j] = 0;
            }else{

                adjMatrix[i][j] = INT_MAX;
            }
        }
    }

    while(e--){

        int a, b, c; cin >> a >> b >> c;
        adjMatrix[a][b] = c;
    }


    for(int k = 0; k < n; k++){

        for(int i = 0; i < n; i++){
        
            for(int j = 0; j < n; j++){
    
                if(adjMatrix[i][k] != INT_MAX && adjMatrix[k][j] != INT_MAX && adjMatrix[i][k] + adjMatrix[k][j] < adjMatrix[i][j]){

                    adjMatrix[i][j] = adjMatrix[i][k] + adjMatrix[k][j];
                }
            }
        }
    }

    
    bool flag = false;
    for(int i = 0; i < n; i++){

        if(adjMatrix[i][i] < 0){

            flag = true;
        }
    }


    if(flag){

        cout << "Negative Weighted cycle detected" << endl;
    }else{

        for(int i = 0; i < n; i++){
        
            for(int j = 0; j < n; j++){
    
                if(adjMatrix[i][j] == INT_MAX){
    
                    cout << "INF" << " ";
    
                }else{
    
                    cout << adjMatrix[i][j] << " ";
                }
            }
    
            cout << endl;
        }
    }





    return 0;
}


// 4 5
// 0 1 3
// 0 2 6
// 1 2 2
// 1 3 5
// 2 3 4


// 4 5
// 0 1 3
// 2 0 -6
// 1 2 2
// 1 3 5
// 2 3 4