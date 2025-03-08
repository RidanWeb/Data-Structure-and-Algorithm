#include <bits/stdc++.h>
using namespace std;

class Edge{

    public:

        int a, b, c;

        Edge(int a, int b, int c){

            this->a = a;
            this->b = b;
            this->c = c;
        }
};

int dis[1005];
vector<Edge> edgeList;
int n, e;

void bellmanFord(){


    for(int i = 0; i < n-1; i++){

        for(auto ed : edgeList){

            int x, y, z;
    
            x = ed.a;
            y = ed.b;
            z = ed.c;

            if(dis[x] != INT_MAX && dis[x] + z < dis[y]){

                dis[y] = dis[x] + z;
            }
        }

    }

    bool flag = false;

    for(auto ed : edgeList){

        int x, y, z;

        x = ed.a;
        y = ed.b;
        z = ed.c;

        if(dis[x] != INT_MAX && dis[x] + z < dis[y]){

            flag = true;
        }
    }

    if(flag == true){

        cout << "Negative weighted cycle detected";
    }else{

        for(int i = 0; i < n; i++){

            cout << i << " => " << dis[i] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     cin >> n >> e;

    while(e--){

        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));

    }

    for(int i = 0; i < n; i++){

        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    bellmanFord();

    return 0;
}


// 4 4
// 0 2 5
// 0 3 12
// 2 1 2
// 1 3 3


// 4 4
// 0 1 5
// 1 2 3
// 2 3 2
// 3 1 -6


