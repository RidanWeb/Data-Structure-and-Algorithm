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


void isCycle(Node* &head){

    Node* fast = head;
    Node* slow = head;

    bool flag = false;

    while(fast != NULL && fast->next != NULL){

        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){

            flag = true;
            break;
        }
    }

    if(flag == true){

        cout << "Cycle" << endl;
    }else{

        cout << "No Cycle" << endl;
    }


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

    // tail->next = b;



    isCycle(head);



    return 0;
}
