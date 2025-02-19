#include <bits/stdc++.h>
using namespace std;

///queue start from here
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

        if(head == NULL){
            tail = NULL;
            return;
        }

        // if(head->next == NULL){

        //     head = NULL;
        //     tail = NULL;
        //     return;
        // }
        
        Node* deleteNode = head;
        head = head->next; 
        delete deleteNode;

        // if(head == NULL){
        //     tail = NULL;
        // }
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












///stack code start from here
class myStack{

    public:

    vector<int> v;

    void push(int val){

        v.push_back(val);
    }

    void pop(){

         v.pop_back();
    }

    int top(){

        return v.back();
    }

    int size(){

        return v.size();
    }

    bool empty(){

        return v.empty();
    }




};















int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    myStack st;
    myQueue qu;


    int n, m; cin >> n >> m;

    while(n--){

        int x; cin >> x;
        st.push(x);
    }

    while (m--)
    {

        int x;  cin >> x;
        qu.push(x);
    }

    int stackS = st.size();
    int queueS = qu.size();

        if(stackS != queueS){

            cout << "NO";
            return 0;

        }

    myQueue qu2;

    while(!st.empty()){

        qu2.push(st.top());
        st.pop();
    }

    int flag = 0;
    while(!qu.empty()){

        if(qu.front() != qu2.front()){

            flag++;
            break;
        }

        qu.pop();
        qu2.pop();
    }

    if(flag == 0){

        cout << "YES";
    }else{

        cout << "NO";
    }



    
    return 0;
}