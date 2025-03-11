#include <bits/stdc++.h>
using namespace std;

int leader[100005];
int grpSize[100005];

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

    int countCycle = 0;

    while(e--){

        int a, b; cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB){

            countCycle++;
        }else{

            dsuUnion(a, b);
        }


    }


    cout << countCycle << endl;
    return 0;
}
