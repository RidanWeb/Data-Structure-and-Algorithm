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

    dsuUnion(1,2);
    dsuUnion(2,9);

    dsuUnion(3,4);
    dsuUnion(3,8);


    dsuUnion(2,4);

    for(int i = 0; i < 10; i++){

        cout << i << " = " << leader[i] << endl;
    }

    cout << "==============" << find(8) << "||" << leader[8] << endl;

    for(int i = 0; i < 10; i++){

        cout << i << " = " << find(i) << endl;
    }


    return 0;
}