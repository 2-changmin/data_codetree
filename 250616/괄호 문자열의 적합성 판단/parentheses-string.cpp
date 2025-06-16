#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;
    
    for(int i : str){
        if(i == '('){
            s.push('(');
        }
        else if(i == ')'){
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
