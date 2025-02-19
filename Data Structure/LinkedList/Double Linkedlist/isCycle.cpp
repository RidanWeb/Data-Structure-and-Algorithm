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
















void isCycle(DNode* &head){

    DNode* fast = head;
    DNode* slow = head;

    int flag = 0;

    while(fast->next != NULL || fast != NULL){

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

    // tail->next = b;



    isCycle(head);




    return 0;
}