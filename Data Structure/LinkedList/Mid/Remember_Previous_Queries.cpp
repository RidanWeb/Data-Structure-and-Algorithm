#include <bits/stdc++.h>
using namespace std;

void printLinkedList(list<long long int> &head){

    for (int val : head) {

        cout << val << " ";
    }
    cout << endl;

}

void printBackward(list<long long int> &head){

    while(!head.empty()){

        cout << head.back() << " ";
        head.pop_back();
    }
    cout << endl;

}



int main()
{
    
    
    list<long long int>listItems;
    list<long long int>listItems2;

    int q; cin >> q;

    while(q--){

        int x; cin >> x;

        long long int v; cin >> v;

        if(x == 0){

            listItems.push_front(v);

        }else if(x == 1){

            listItems.push_back(v);

        }else if(x == 2){

            int size = listItems.size();

            if(v < size){

                listItems.erase(next(listItems.begin(), v), next(listItems.begin(), v+1));

            }
        }

        cout << "L -> "; printLinkedList(listItems);
        listItems2 = listItems;
        cout << "R -> "; printBackward(listItems2);

    }



    return 0;
}