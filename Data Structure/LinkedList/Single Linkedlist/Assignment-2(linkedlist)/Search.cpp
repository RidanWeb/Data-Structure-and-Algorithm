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

    int tc; cin >> tc;

    while(tc--){

            Node* head = NULL;
            Node* tail = NULL;

            int val;

        while(true){

            cin >> val;

            if(val == -1){

                break;
            }

            optimized_insert_at_tail(head, tail, val);
        }

        int x; cin >> x;

        int flag = 0; int inx = 0;


        Node* temp = head;

        while(temp != NULL){

            if(temp->val == x){

                flag = 1;

                break;
            }

            temp = temp->next;
            inx++;

        }

        if(flag == 1){

            cout << inx << endl;

        }else{

            cout << -1 << endl;
        }
    }


    return 0;
}