#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            s.push('(');
        }
        else if(str[i] == ')'){
            if(s.empty()){
                cout << "No" << endl;
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
