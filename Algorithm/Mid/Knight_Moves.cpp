#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool isVisited[105][105];
int level[105][105];
vector<pair<int, int>> d = {{-1, 2},{-2, 1},{-2, -1},{-1, -2},{1, -2},{2, -1},{2, 1},{1, 2}};
int m, n;

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

        for(int i = 0; i < 8; i++){

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

    int tc; cin >> tc;

    while(tc--){

        cin >> n >> m;

        memset(isVisited, false, sizeof(isVisited));
        memset(level, -1, sizeof(level));

        int qi, qj; cin >> qi >> qj;

        bfs(qi, qj);

        int di, dj; cin >> di >> dj;

        cout << level[di][dj] << endl;

    }

    return 0;
}





