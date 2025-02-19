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


int nodeCount(myTree* root){

    queue<myTree*> q;
    q.push(root);

    int sum = 0;

    while(!q.empty()){

        //extract queue front element
        myTree* front = q.front();  //root of tree
        q.pop();

        //Do operation 
        sum++;

        //Push Children to the queue
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }

    return sum;

}

int nodeCountRec(myTree* root){

    if(root == NULL){

        return 0;
    }

    int l = nodeCountRec(root->left);
    int r = nodeCountRec(root->right);

    return l+r+1;
}


myTree* treeInput(){

    int x; cin >> x;
    myTree* root = new myTree(x);

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        //extract queue front element
        myTree* p = q.front();  //root of tree
        q.pop();

        //Do operation 
        int l, r; cin >> l >> r;

        myTree *treeL, *treeR;

        if(l == -1)treeL = NULL;
        else treeL = new myTree(l);

        if(r == -1)treeR = NULL;
        else treeR = new myTree(r);

        p->left = treeL;
        p->right = treeR;


        //Push Children to the queue
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }

    }

    return root;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myTree* root = treeInput();

    cout << "Total Node : " << nodeCount(root) << endl;
    cout << "Total Node : " << nodeCountRec(root) << endl;

    return 0;
}