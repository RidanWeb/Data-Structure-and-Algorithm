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

void insert_head(DNode* &head, DNode* &tail, int val){

    DNode* newNode = new DNode(val);

    if(head == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

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


void insert_any_position(DNode* head, int val, int indx){

    DNode* newNode = new DNode(val);

    DNode* temp = head;

    for(int i = 1; i < indx; i++){

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}




void print_forward(DNode* head){

    DNode* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_backward(DNode* tail){

    DNode* temp = tail;

    while(temp != NULL){

        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int sizeOfLL(DNode* head){

    DNode* temp = head;
    int size = 0;

    while(temp != NULL){

        size++;
        temp = temp->next;
    }

    return size;

}





int main(){

    DNode* head = NULL;
    DNode* tail = NULL;




    int q; cin >> q;

    while(q--){

        int x, v; cin >> x >> v;
        int size = sizeOfLL(head);

        if(x > size){

            cout << "Invalid" << endl;

        }else{

            if(x == 0){

                insert_head(head, tail, v);

            }else if(x == size){

                insert_tail(head, tail, v);

            }else if(x > 0 && x < size){

                insert_any_position(head, v, x);
            }

            cout << "L -> ";  print_forward(head);
            cout << "R -> "; print_backward(tail);
        }
        


    }



    return 0;
}