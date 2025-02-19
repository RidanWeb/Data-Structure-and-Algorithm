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

void insert_at_head(Node* &head, int val){

    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;

}

void insert_at_tail(Node* &head, int val){

    Node* temp = head;
    Node* newNode = new Node(val);

    if(head == NULL){

        head = newNode;
        return;
    }

    while(temp->next != NULL){

        temp = temp->next;
    }

    temp->next = newNode;


}

void optimized_insert_at_tail(Node* &head, Node* &tail,  int val){

    Node* newNode = new Node(val);

    if(head == NULL || tail == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;


}


void insert_at_any_pos(Node* &head, int val, int index){

    Node* newNode = new Node(val);

    Node* temp = head;

    int getIndex = index-2;

    while((getIndex)--){

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


void isCycle(Node* &head){

    Node* fast = head;
    Node* slow = head;

    int flag = 0;

    while(fast->next != NULL){

        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){

            flag = 1;
            break;
        }
    }

    if(flag == 1){

        cout << "Cycle" << endl;
    }else{

        cout << "No Cycle" << endl;
    }


}


void print_linkedlist(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp->val << " ";
         temp = temp->next;
    }
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

    // Node* head = NULL;

    Node* head = new Node(10);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);

    head->next = b;
    b->next = c;
    c->next = tail;
    tail->next = b;


    insert_at_head(head, 300);
    insert_at_head(head, 400);
    insert_at_head(head, 500);

    insert_at_tail(head, 5);
    insert_at_tail(head, 15);
    insert_at_tail(head, 25);

    insert_at_any_pos(head, 4000, 5);

    optimized_insert_at_tail(head, tail, 9000);
    optimized_insert_at_tail(head, tail, 8000);
    optimized_insert_at_tail(head, tail, 7000);


    print_linkedlist(head);

    cout << endl;



    return 0;
}
