#include <bits/stdc++.h>
using namespace std;

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