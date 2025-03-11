#include <bits/stdc++.h>
using namespace std;

class Edge{

    public:

        int a, b, c;

        Edge(int a, int b, long long int c){

            this->a = a;
            this->b = b;
            this->c = c;
        }
};

long long int dis[1005];
vector<Edge> edgeList;
int n, e;

bool bellmanFord(){


    for(int i = 0; i < n-1; i++){

        for(auto ed : edgeList){

            long long int x, y, z;
    
            x = ed.a;
            y = ed.b;
            z = ed.c;

            if(dis[x] != LLONG_MAX){

                dis[y] = min(dis[y], dis[x] + z);
            }
        }

    }


    for(auto ed : edgeList){

        long long int x, y, z;

        x = ed.a;
        y = ed.b;
        z = ed.c;

        if(dis[x] != LLONG_MAX && dis[x] + z < dis[y]){

            return true;
        }
    }

    return false;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     cin >> n >> e;
     edgeList.clear();

    while(e--){

        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));

    }

    for(int i = 1; i <= n; i++){

        dis[i] = LLONG_MAX;
    }

    int src; cin >> src;

    dis[src] = 0;

    if(bellmanFord()){

        cout << "Negative Cycle Detected" << endl;
        return 0;
        
    }

    int tc; cin >> tc;

    while(tc--){

        int des; cin >> des;

        if(dis[des] == LLONG_MAX){

            cout << "Not Possible" << endl;

        }else{

            cout << dis[des] << endl;
        }

    }

    return 0;
}


