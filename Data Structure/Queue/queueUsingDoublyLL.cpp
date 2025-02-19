#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {

        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{

public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {

        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {

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

        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;
    }

    int front()
    {

        return head->val;
    }

    int back()
    {

        return tail->val;
    }

    int size()
    {

        return sz;
    }

    bool empty()
    {

        return head == NULL;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myQueue qu;

    int n;
    cin >> n;

    while (n--)
    {

        int x;
        cin >> x;
        qu.push(x);
    }

    while(!qu.empty()){

        cout << qu.front() << " ";
        qu.pop();
    }

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

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
        cout << "Back : " << qu.back() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    return 0;
}