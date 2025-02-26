#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool isVisited[1005][1005];

int n, m;

vector<pair<int, int>> direction = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int x, int y){

    if(x < 0 || x >= n || y < 0 || y >= m){

        return false;

    }else{

        return true;
    }
}

void dfs(int si, int sj){

    isVisited[si][sj] = true;

    for(int i = 0; i < 4; i++){

        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if(valid(ci, cj) && !isVisited[ci][cj] && grid[ci][cj] == '.'){

            dfs(ci, cj);
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

    memset(isVisited, false, sizeof(isVisited));

    int count = 0;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            if(!isVisited[i][j] && grid[i][j] == '.'){

                count++;
                dfs(i, j);
            }
        }
    }


    cout << count << endl;




    return 0;
}