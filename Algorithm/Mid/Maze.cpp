#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool isVisited[1005][1005];
int level[1005][1005];
pair<int, int> parents[1005][1005];

vector<pair<int, int>> d = {{0, 1},{0, -1},{-1, 0},{1, 0}};
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
    parents[si][sj] = {-1, -1};

    while(!q.empty()){

        pair<int, int> parent = q.front();
        q.pop();

        int parI = parent.first;
        int parJ = parent.second;

        for(int i = 0; i < 4; i++){

            int xi = parI + d[i].first;
            int yj = parJ + d[i].second;

            if(valid(xi, yj) && ! isVisited[xi][yj] && (grid[xi][yj] == '.' || grid[xi][yj] == 'D')){

                q.push({xi, yj});
                isVisited[xi][yj] = true;
                level[xi][yj] = level[parI][parJ] + 1;
                parents[xi][yj] = parent;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(isVisited, false, sizeof(isVisited));
    memset(level, -1, sizeof(isVisited));
    memset(parents, -1, sizeof(parents));

    cin >> n >> m;

    int si, sj, di, dj;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cin >> grid[i][j];

            if(grid[i][j] == 'R'){

                si = i;
                sj = j;
            }else if(grid[i][j] == 'D'){

                di = i; 
                dj = j;
            }

        }
    }


    bfs(si, sj);

    vector<pair<int, int>> path;

    pair<int, int> node = {di, dj};

    while(node != make_pair(-1, -1)){

        path.push_back(node);
        node = parents[node.first][node.second];
    }

    reverse(path.begin(), path.end());


    if(path.size() > 1){

        for(auto it = path.begin()+1; it != path.end()-1; it++){

            grid[it->first][it->second] = 'X';
            
        }
    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cout << grid[i][j];

        }
        cout << endl;
    }




    return 0;
}