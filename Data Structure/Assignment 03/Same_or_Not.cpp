#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> st;
    queue<int> qu;

    int n,m; cin >> n >> m;

    while(n--){

        int x; cin >> x;

        st.push(x);
    }

    while(m--){

        int x; cin >> x;

        qu.push(x);
    }

    queue<int> qu2;

    while(!st.empty()){

        qu2.push(st.top());
        st.pop();
    }

    if(qu == qu2){

        cout << "YES";
    }else{

        cout << "NO";
    }




    return 0;
}