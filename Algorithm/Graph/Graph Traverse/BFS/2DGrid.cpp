#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool isVisited[105][105];
int level[105][105];
vector<pair<int, int>> d = {{-1, 0},{1, 0},{0, -1},{0, 1}};
int n, m;

bool valid(int si, int sj){

    if(si < 0 || si >= n || sj < 0 || sj >= m){

        return false;
    }else{

        return true;        
    }
}

void bfs(int si, int sj){

    queue<pair<int, int>> q;
    q.push({si, sj});
    isVisited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()){

        pair<int, int> parent = q.front();
        q.pop();

        int parI = parent.first;
        int parJ = parent.second;

        // cout << parI << " " << parJ << endl;

        for(int i = 0; i < 4; i++){

            int xi = parI + d[i].first;
            int yj = parJ + d[i].second;

            if(valid(xi, yj) && ! isVisited[xi][yj]){

                q.push({xi, yj});
                isVisited[xi][yj] = true;
                level[xi][yj] = level[parI][parJ] + 1;
            }
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

    int si, sj, di, dj; cin >> si >> sj >> di >> dj;

    memset(isVisited, false, sizeof(isVisited));
    memset(level, -1, sizeof(level));

    bfs(si, sj);


    cout << "Level of " << di << " " << dj << " = " << level[di][dj];
    return 0;
}



// 3 4
// . . . .
// . . . .
// . . . .
// 1 2

