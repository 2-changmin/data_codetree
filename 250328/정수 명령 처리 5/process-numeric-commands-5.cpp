#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;
    vector<int> k;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
            
        }
        if(command[i] == "push_back"){
            k.push_back(num[i]);
        }
        else if(command[i] == "get"){
            cout << k[num[i]-1] << endl;
        }
        else if(command[i] == "pop_back"){
            k.pop_back();
        }
        else if(command[i] == "size"){
            cout << k.size() << endl;
        }
    }

    

    return 0;
}
