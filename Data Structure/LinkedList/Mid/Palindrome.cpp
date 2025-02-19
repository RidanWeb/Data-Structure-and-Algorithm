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


void palindromeCheck(DNode* head, DNode* tail){

    DNode* left = head;
    DNode* right = tail;

    int flag = 0;

    while(right->next != left && left != right){

        if(left->val != right->val){

            flag = 1;
            break;
        }

        left = left->next;
        right = right->prev;
    }

    if(flag == 1){

        cout << "NO" << endl;

    }else{

        cout << "YES" << endl;
    }

    
}





int main()
{


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


    
    palindromeCheck(head, tail);




    return 0;
}