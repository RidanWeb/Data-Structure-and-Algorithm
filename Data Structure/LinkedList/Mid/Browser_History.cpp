#include <bits/stdc++.h>
using namespace std;

int main()
{


    list<string>listItems;

    string val;

    while(true){

        cin >> val;

        if(val == "end"){

            break;
        }

        listItems.push_back(val);
    }

    int q; cin >> q;

    auto head = listItems.begin();
    int size = listItems.size();

    while(q--){

        string val;
        cin >> val;

        

        if(val == "prev"){

            if(head != listItems.begin()) {

                --head;
                cout << *head << endl;

            } else {

                cout << "Not Available" << endl;

            }

        }else if(val == "next"){

            if (next(head) != listItems.end()){

                ++head;
                cout << *head << endl;

            }else {

                cout << "Not Available" << endl;
                
            }


        }else if(val == "visit"){

            string link; cin >> link;
            
            auto it = find(listItems.begin(),listItems.end(),link);

            if(it != listItems.end()){

                head = it;
                cout << *head << endl;

            }else{

                cout << "Not Available" << endl;
            }

        }
    }




    return 0;
}