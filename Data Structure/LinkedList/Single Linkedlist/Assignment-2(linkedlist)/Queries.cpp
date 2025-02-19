#include <bits/stdc++.h>
using namespace std;


class Node{

public:
    int val;
    Node* next;

    Node(int val){

        this->val = val;
        this->next = NULL;
    }
    
};




void insert_at_head(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);

    if(head == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;

}


void optimized_insert_at_tail(Node* &head, Node* &tail,  int val){

    Node* newNode = new Node(val);

    if(head == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;


}



void delete_from_position(Node* &head, Node* &tail, int indx){

    Node* temp = head;

    if(indx == 0){
        head = head->next;
        return;
    }

    for(int i = 0; i < indx-1; i++){

        temp = temp->next;
    }

    Node* deleteNode = temp->next;

    if(temp->next->next == NULL){

        temp -> next = NULL;
        tail = temp;

    }else{

        temp -> next = temp->next->next;
    }

    delete deleteNode;
}




void print_linkedlist(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
         temp = temp->next;
    }

    cout << endl;
}


int main()
{

    int tc; cin >> tc;

    Node* head = NULL;
    Node* tail = NULL;

     int indx = 0;

    while(tc--){

        int x, v; cin >> x >> v;

        if(x == 0){

            indx++;
            insert_at_head(head, tail, v);

        }else if(x == 1){

            indx++;
            optimized_insert_at_tail(head, tail, v);

        }else if(x == 2){

            if(v < indx){
                delete_from_position(head, tail, v);
                indx--;
            }
        }

        print_linkedlist(head);
    }






    return 0;
}