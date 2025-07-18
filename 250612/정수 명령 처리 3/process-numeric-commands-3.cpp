#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int num;

int main() {
    cin >> N;
    deque<int> s;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num;
        }
        if(cmd[i] == "push_front") s.push_front(num);
        else if(cmd[i] == "push_back") s.push_back(num);
        else if(cmd[i] == "pop_front"){
            cout << s.front() << endl;
            s.pop_front();
        }
        else if(cmd[i] == "pop_back"){
            cout << s.back() << endl;
            s.pop_back();
        }
        else if(cmd[i] == "size"){
            cout << s.size() << endl;
        }
        else if(cmd[i] == "empty"){
            cout << s.empty() << endl;
        }
        else if(cmd[i] == "front") cout << s.front() << endl;
        else if(cmd[i] == "back") cout << s.back() << endl;
    }

    // Please write your code here.

    return 0;
}
