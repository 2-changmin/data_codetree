#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    list<char> bread;
    list<char>::iterator it; 
    for(int i = 0; i < n; i++){
        char a;
        cin >> a;
        bread.push_back(a);
    }
    it = bread.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if(command == 'L'){
            if(it == bread.begin()) continue;
            it--;
        }
        else if(command == 'R'){
            if(it == bread.end()) continue;
            it++;
        }
        else if(command == 'D'){
            if(it == bread.end()) continue;
            it = bread.erase(it);
        }
        else if(command == 'P'){
            char c;
            cin >> c;
            bread.insert(it,c);
        }
    }
    for(it = bread.begin(); it != bread.end(); it++){
        cout << *it;
    }

    

    return 0;
}
