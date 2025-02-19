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


void delete_head(DNode* &head, DNode* &tail){

    DNode* deleteNode = head;

    head = head->next;
    delete deleteNode;
    if(head == NULL){

        tail = NULL;
        return;
    }
    head->prev = NULL;
}


void delete_tail(DNode* &head, DNode* &tail){

    DNode* deleteNode = tail;

    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL){

        head = NULL;
        return;
    }
    tail->next = NULL;
}


void delete_any_position(DNode* head, int indx){

    DNode* temp = head;

    for(int i = 1; i < indx; i++){

        temp = temp->next;
    }

    DNode* deleteNode = temp;

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete deleteNode;
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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    DNode* head = new DNode(100);
    DNode* a = new DNode(200);
    DNode* b = new DNode(300);
    DNode* tail = new DNode(400);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    tail->next = b;

    insert_head(head, tail, 600);
    insert_tail(head, tail, 800);

    insert_any_position(head, 1000, 3);

    delete_head(head, tail);
    delete_tail(head, tail);

    print_forward(head);
    print_backward(tail);

    cout << endl;

    isCycle(head);




    return 0;
}