#include <bits/stdc++.h>
using namespace std;


void remove_duplicate(list<int> &head){


    head.sort(); 

    head.unique(); 
}

void printLinkedList(list<int> &head){

    for (int val : head) {

        cout << val << " ";
    }

}

int main()
{
    
    list<int>listItems;

    int val;

    while(true){

        cin >> val;

        if(val == -1){

            break;
        }

        listItems.push_back(val);
    }

    remove_duplicate(listItems);

    printLinkedList(listItems);
    


    return 0;
}


