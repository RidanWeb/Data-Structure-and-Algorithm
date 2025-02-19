#include <bits/stdc++.h>
using namespace std;

class DNode{

public:
    int val;
    DNode* next;
    DNode* prev;

    DNode(int val){

        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
    
};


void insert_tail(DNode* &head, DNode* &tail, int val){

    DNode* newNode = new DNode(val);

    if(head == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}



void reverse_d_linkedlist(DNode* head, DNode* tail){

    for(DNode* i = head, * j = tail;i!=j && i->prev != j ;i = i->next, j = j->prev){

        swap(i->val, j->val);
    }
}




void print_forward(DNode* head){

    DNode* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    DNode* head = NULL;
    DNode* tail = NULL;

    int val;

    while(true){

        cin >> val;

        if(val == -1){

            break;
        }

        insert_tail(head, tail, val);
    }


    reverse_d_linkedlist(head, tail);
    print_forward(head);




    return 0;
}