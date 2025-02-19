#include <bits/stdc++.h>
using namespace std;

class Person{

    public:

        string name;
        int num;

        Person(string name, int num){

            this->name = name;
            this->num = num;

        }
};

bool cmp(Person l, Person r){

        if(l.name < r.name){

            return true;

        }else if(l.name > r.name){

            return false;

        }else{

            return l.num > r.num;

        }


};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<Person> p;

    int n; cin >> n;

    for(int i = 0; i < n; i++){

        string n;
        int num;

        cin >> n >> num;

        Person obj(n, num);

        p.push_back(obj);


    }

    sort(p.begin(), p.end(), cmp);

    for(auto it = p.begin(); it != p.end(); it++){

        cout << it->name << " " << it->num << endl;
    }


    return 0;
}