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

    st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);

    cout << "Top : "; if(!st.empty()){cout << st.top();} cout << " Size : " << st.size() << " isEmpty : " << st.empty() << endl;

    if(!st.empty()){

        st.pop();
    }

    if(!st.empty()){

        st.pop();
    }

    cout << "Top : "; if(!st.empty()){cout << st.top();} cout << " Size : " << st.size() << " isEmpty : " << st.empty() << endl;


    return 0;
}