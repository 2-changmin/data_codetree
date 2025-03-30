#include <iostream>
#include <list>

using namespace std;

int n, m;

int main() {
    list<char> l;
    list<char>::iterator it;

    cin >> n >> m;
    
    for(int i = 0;i<n;i++){
        char bread;
        cin >> bread;
        l.push_back(bread);
    }
    it = l.end();
    for(int i=0; i<m;i++){
        string command;
        cin >> command;
        if(command == "R"){
            if(it!=l.end())
            it++;
        }
        else if(command == "L"){
            if(it!=l.begin())
            it--;
        }
        else if(command == "D"){
            if(it!=l.end())
            it = l.erase(it);
        }
        else if(command == "P"){
            char k;
            cin >> k;
            l.insert(it,k);
        }
    }
    for(it = l.begin(); it != l.end(); it++){
        cout << *it;
    }
    return 0;
}
