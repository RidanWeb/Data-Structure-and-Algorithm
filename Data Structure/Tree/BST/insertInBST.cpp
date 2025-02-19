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


myTree* inputElement(){

    int x; cin >> x;

    myTree* root = new myTree(x);

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        myTree* front = q.front();
        q.pop();

        int l, r; cin >> l >> r;

        myTree *treeL, *treeR;

        if(l == -1){

            treeL = NULL;
        }else{

            treeL = new myTree(l);
        }

        if(r == -1){
            treeR = NULL;
        }else{
            treeR = new myTree(r);
        }

        front->left = treeL;
        front->right = treeR;

        if(front->left)
            q.push(front->left);

        if(front->right)
            q.push(front->right);


    }

    return root;
}


void levelOrderTraverse(myTree* root){

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        myTree* front = q.front();
        q.pop();


        cout << front->val << " ";

        if(front->left){

            q.push(front->left);
        }

        if(front->right){

            q.push(front->right);
        }
    }

}

void insertBST(myTree* &root, int val){

    if(root == NULL){

        root = new myTree(val);
    }

    

    if(root->val > val){

        if(root->left == NULL){
            root->left = new myTree(val);
        }else{

            insertBST(root->left, val);
        }

    }else{

        if(root->right == NULL){
            root->right = new myTree(val);
        }else{

            insertBST(root->right, val);
        }
    }


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    myTree* root = inputElement();

    levelOrderTraverse(root);

    int a; cin >> a;

    insertBST(root, a);
    levelOrderTraverse(root);


    return 0;
}