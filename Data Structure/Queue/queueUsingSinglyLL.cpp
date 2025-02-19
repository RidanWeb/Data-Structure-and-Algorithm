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


class myQueue{

    public:

    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;



    void push(int val){

        sz++;
        Node* newNode = new  Node(val);

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop(){

        sz--;

        // if(head == NULL){
        //     tail = NULL;
        //     return;
        // }

        // if(head->next == NULL){

        //     head = NULL;
        //     tail = NULL;
        //     return;
        // }
        
        Node* deleteNode = head;
        head = head->next; 
        delete deleteNode;

        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){

        return head->val;
    }

    int back(){

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

    myQueue qu;

    qu.push(50);
    qu.push(150);
    qu.push(250);
    qu.push(350);
    qu.push(450);

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
        cout << "Back : " << qu.back() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    if (!qu.empty())qu.pop();
    if (!qu.empty())qu.pop();

    cout << endl;

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
        cout << "Back : " << qu.back() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    if (!qu.empty())qu.pop();
    if (!qu.empty())qu.pop();
    if (!qu.empty())qu.pop();

    cout << endl;

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
        cout << "Back : " << qu.back() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";


    // cout << endl << endl;
    // queue<int> x;

    // x.push(10);

    // cout << x.front();
    // x.pop();
    // cout << x.front();


    return 0;
}