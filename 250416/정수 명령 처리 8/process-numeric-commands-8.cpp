#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int num;

int main() {
    cin >> N;
    list<int> s;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> num;
        }
        if(command[i] == "push_front") 
            s.push_front(num);
        else if(command[i] == "push_back") 
            s.push_back(num);
        else if(command[i] == "pop_front"){
            cout << s.front() << endl;
            s.pop_front();
        }
        else if(command[i] == "pop_back"){
            cout << s.back() << endl;
            s.pop_back();
        }
        else if(command[i] == "size"){
            cout << s.size() << endl;
        }
        else if(command[i] == "empty"){
            cout << s.empty() << endl;
        }
        else if(command[i] == "front"){
            cout << s.front() << endl;
        }
        else if(command[i] == "back"){
            cout << s.back() << endl;
        }
        
    }

    

    return 0;
}
