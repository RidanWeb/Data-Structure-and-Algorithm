#include <bits/stdc++.h>
using namespace std;

int leader[1005];
int grpSize[1005];

int find(int node){

    if(leader[node] == -1){
        return node;
    }

    int led = find(leader[node]);

    leader[node] = led;

    return led;
}

void dsuUnion(int first, int second){

    int firstL = find(first);
    int secondL = find(second);

    if(grpSize[firstL] >= grpSize[secondL]){

        leader[secondL] = firstL;
        grpSize[firstL] += grpSize[secondL];

    }else{

        leader[firstL] = secondL;
        grpSize[secondL] += grpSize[firstL];
    }


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(leader, -1, sizeof(leader));
    memset(grpSize, 1, sizeof(grpSize));

    int n, e; cin >> n >> e;

    bool flag = false;

    while(e--){

        int a, b; cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB){

            flag = true;
        }else{

            dsuUnion(a, b);
        }


    }


    if(flag){

        cout << "Cycle Detected" << endl;
    }else{

        cout << "No Cycle" << endl;
    }
    return 0;
}


// 6 6
// 0 1
// 1 2
// 0 4
// 4 5
// 5 3
// 3 4


// 6 5
// 0 1
// 1 2
// 0 4
// 4 5
// 3 4