#include <bits/stdc++.h>
using namespace std;

int leader[1005];

int find(int node){

    cout << node << " ";

    if(leader[node] == -1){
        return node;
    }

    int led = find(leader[node]);

    leader[node] = led;

    return led;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(leader, -1, sizeof(leader));

    leader[0] = 1;
    leader[1] = -1;
    leader[2] = 1;
    leader[3] = 1;
    leader[4] = 5;
    leader[5] = 3;

    cout << find(4) << endl;

    for(int i = 0; i < 6; i++){

        cout << leader[i] << " ";
    }


    return 0;
}