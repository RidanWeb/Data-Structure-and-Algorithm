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


void delete_from_tail(Node* &head){

    Node* deleteNode = head;

    head = head->next;

    delete deleteNode;
}


void delete_from_position(Node* head, int indx){

    Node* temp = head;

    for(int i = 1; i < indx; i++){

        temp = temp->next;
    }

    Node* deleteNode = temp->next;

    temp -> next = temp->next->next;

    delete deleteNode;
}


void sortLL(Node* head){

    for(Node* i = head; i->next != NULL; i = i->next){

        for(Node* j = i->next; j != NULL; j = j->next){

            if(i->val > j->val){

                swap(i->val, j->val);
            }
        }
    }
}




void print_linkedlist(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
         temp = temp->next;
    }

    cout << endl;
}

void print_reverse(Node* temp){

    if(temp == NULL){

        return;
    }

    print_reverse(temp->next);

    cout << temp->val << " ";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

    sortLL(head);

    print_linkedlist(head);

    // print_reverse(head);






    return 0;
}