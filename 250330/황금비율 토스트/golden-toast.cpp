#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    string::iterator it;
    it = s.end();
    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            s.insert(next(it),c);
        }
        if (command == 'L'){
            if(*it == s.front()) continue;
            it--;
        }
        else if(command == 'R'){
            it++;
        }
        else if(command == 'D'){
            if(*it == s.back()) continue;
            s.erase(it);
        }
    }
    cout << s;

    // Please write your code here.

    return 0;
}
