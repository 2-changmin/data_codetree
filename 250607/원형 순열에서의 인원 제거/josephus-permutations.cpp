#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    queue<int> a;

    for(int i = 1; i <= N; i++){
        a.push(i);
    }
    while(a.size()!=0){
        for(int i = 0; i < K - 1; i++){
            a.push(a.front());
            a.pop();
        }
        cout << a.front() << " ";
        a.pop();
    }

    return 0;
}
