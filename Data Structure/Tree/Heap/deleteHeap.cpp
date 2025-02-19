#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int>&a, int v ){

    a.push_back(v);

    int current_loc = a.size() - 1;

    while(current_loc != 0){

        int parent_loc = (current_loc - 1)/2;

        if(a[parent_loc] < a[current_loc]){

            swap(a[parent_loc], a[current_loc]);
        }else{

            break;
        }

        current_loc = parent_loc;
    }
}

void displayHeap(vector<int> a){

    for (int i = 0; i < a.size(); i++){

        cout<< a[i] << " ";
    }
}

void deleteHeap(vector<int> &a){

    a[0] = a.back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    int n; cin >> n;

    for(int i = 0; i < n; i++){

        int val; cin >> val;
        insertHeap(v, val);

    }


    return 0;
}