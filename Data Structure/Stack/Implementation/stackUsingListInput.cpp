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





class myStack{

    public:

    DNode* head = NULL;
    DNode* tail = NULL;

    int sz = 0;

    void push(int val){

        DNode* newNode = new DNode(val);
        sz++;

        if(head == NULL){

            head = newNode;
            tail = newNode;

            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){

         DNode* deleteNode = tail;
         sz--;

         tail = tail->prev;
         delete deleteNode;

         if(tail = NULL){

            head = NULL;
            return;
         }
         tail->next = NULL;
    }

    int top(){

        return tail->val;
    }

    int size(){

        return sz;
    }

    bool empty(){

        return head == NULL;
    }




};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myStack st;

    int sz; cin >> sz;

    while(sz--){

        int x; cin >> x;
        st.push(x);
    }

    while(!st.empty()){

        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}