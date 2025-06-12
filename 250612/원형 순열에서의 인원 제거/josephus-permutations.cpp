#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    queue<int> s;

    for(int i = 1; i <= N; i++){
        s.push(i);
    }
    while(s.size() != 0){
        for(int i = 0; i < K - 1; i++){
            s.push(s.front());
            s.pop();
        }
        cout << s.front() << " ";
        s.pop();
    }


    return 0;
}
