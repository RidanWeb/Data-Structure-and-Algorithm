#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool isVisited[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int x, int y){

    if(x < 0 || x >= n || y < 0 || y >= m){

        return false;
    }else{

        return true;
    }

}


void dfs(int si, int sj){

    cout << si << " " << sj << endl;
    isVisited[si][sj] = true;

    for(int i = 0; i < 4; i++){

        int xi = si + d[i].first;
        int yi = sj + d[i].second;

        if(valid(xi, yi) == true && isVisited[xi][yi] == false){

            dfs(xi, yi);
        }
    }



}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cin >> grid[i][j];
        }
    }

    int si, sj; cin >> si >> sj;

    memset(isVisited, false, sizeof(isVisited));

    dfs(si, sj);


    return 0;
}



// 3 4
// . . . .
// . . . .
// . . . .
// 1 2