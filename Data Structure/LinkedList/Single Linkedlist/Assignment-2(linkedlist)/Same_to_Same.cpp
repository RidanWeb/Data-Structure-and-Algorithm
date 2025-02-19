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

    if(head == NULL || tail == NULL){

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;


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

    Node* head = NULL;
    Node* tail = NULL;

    int val, a = 0;

    while(true){

        cin >> val;
        a++;
        if(val == -1){

            break;
        }

        optimized_insert_at_tail(head, tail, val);
    }


    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val2, b = 0;

    while(true){

        cin >> val2;
        b++;
        if(val2 == -1){

            break;
        }

        optimized_insert_at_tail(head2, tail2, val2);
    }

    int flag = 0;
    while(head != NULL){

        if((a != b) || (head->val != head2->val)){

            flag = 1;
            break;
        }

        head = head->next;
        head2 = head2->next;
    }

    if(flag == 0){

        cout << "YES" << endl;
    }else{

        cout << "NO" << endl;
    }

    return 0;
}