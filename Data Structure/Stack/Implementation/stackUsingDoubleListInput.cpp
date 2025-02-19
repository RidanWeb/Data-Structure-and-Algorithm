#include <bits/stdc++.h>
using namespace std;

class myStack{

    public:

    list<int> l;

    void push(int val){

        l.push_back(val);
    }

    void pop(){

         l.pop_back();
    }

    int top(){

        return l.back();
    }

    int size(){

        return l.size();
    }

    bool empty(){

        return l.empty();
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