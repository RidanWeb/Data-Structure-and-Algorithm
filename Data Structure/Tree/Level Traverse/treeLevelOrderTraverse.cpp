#include <bits/stdc++.h>
using namespace std;


class myTree{

    public:

        int val;
        myTree* left;
        myTree* right;

        myTree(int val){

            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};


void levelOrderTraverse(myTree* root){

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        //extract queue front element
        myTree* front = q.front();  //root of tree
        q.pop();

        //Do operation 
        cout << front->val << " ";

        //Push Children to the queue
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myTree* root = new myTree(10);
    myTree* a = new myTree(20);
    myTree* b = new myTree(30);
    myTree* c = new myTree(40);
    myTree* d = new myTree(50);
    myTree* e = new myTree(60);
    myTree* f = new myTree(70);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;


    levelOrderTraverse(root);


    return 0;
}