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


void remove_duplicate(Node* &head, Node* &tail){

    Node* first = head;

    while(first != NULL){

        Node* second = first;

        while(second->next != NULL){

            if(first->val != second->next->val){

                second = second->next;
            }else{

                Node* deleteNode = second->next;
                second->next = second->next->next;
                delete deleteNode;
            }

        }
         first = first->next;

    }
}



void print_linkedlist(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
         temp = temp->next;
    }
}

int main()
{
    
    
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true){

        cin >> val;

        if(val == -1){

            break;
        }

        optimized_insert_at_tail(head, tail, val);
    }

    remove_duplicate(head, tail);

    print_linkedlist(head);


    return 0;
}