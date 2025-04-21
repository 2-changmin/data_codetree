#include <iostream>

using namespace std;

int N;

int fibo(int N){
    if(N == 1||N == 2) return 1;
    return fibo(N-1) + fibo(N-2);
}

int main() {
    cin >> N;

    cout << fibo(N);

    return 0;
}