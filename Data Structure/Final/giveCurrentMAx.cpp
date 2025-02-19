#include <bits/stdc++.h>
using namespace std;

class Student{

    public:

        string name;
        int roll, mark;


        Student(string name, int roll, int mark){

            this->name = name;
            this->roll = roll;
            this->mark = mark;

        }
};

class cmp{

    public:


    bool operator()(Student l, Student r){

        if(l.mark < r.mark){

            return true;

        }else if(l.mark > r.mark){

            return false;

        }else{

            return l.roll > r.roll;
        }
    }


};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<Student, vector<Student>, cmp> pq;

    int n; cin >> n;

    for(int i = 0; i < n; i++){

        string n;
        int r, m;

        cin >> n >> r >> m;

        Student obj(n, r, m);

        pq.push(obj);


    }

    int x; cin >> x;

    while(x--){

        int a; cin >> a;

        if(a == 0){

            string n;
            int r, m;
    
            cin >> n >> r >> m;
    
            Student obj(n, r, m);
            pq.push(obj);


            if(pq.empty()){

                cout << "Empty" << endl;
            }else{

                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }
            
        }else if(a == 1){

            if(pq.empty()){

                cout << "Empty" << endl;
            }else{

                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            }


        }else{

            if(pq.empty()){

                cout << "Empty" << endl;
            }else{

                pq.pop();

                if(pq.empty()){

                    cout << "Empty" << endl;
                }else{
    
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
                }
            }

        }
    }



    return 0;
}