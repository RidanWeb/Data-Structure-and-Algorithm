#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<>> pq;

    int n; cin >> n;

    while(n--){

        int x; cin >> x;
        pq.push(x);

    }

    int q; cin >> q;

    while(q--){

        int a; cin >> a;

        if(a == 0){

            int x; cin >> x;
            pq.push(x);

            if(pq.empty()){

                cout << "Empty" << endl;
            }else{

                cout << pq.top() << endl;
            }
            
        }else if(a == 1){

            if(pq.empty()){

                cout << "Empty" << endl;
            }else{

                cout << pq.top() << endl;
            }

        }else{

            if(pq.empty()){

                cout << "Empty" << endl;
            }else{

                pq.pop();

                if(pq.empty()){

                    cout << "Empty" << endl;
                }else{
    
                    cout << pq.top() << endl;
                }
            }

        }
    }


    return 0;
}