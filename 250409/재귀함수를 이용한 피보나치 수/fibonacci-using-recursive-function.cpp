#include <iostream>

using namespace std;

int N;

int pibo(int N){
    if(N == 0) return 0;
    if(N == 1) return 1;
    if(N == 2) return 1;
    return pibo(N - 1) + pibo(N - 2);
}

int main() {
    cin >> N;

    cout << pibo(N);

    return 0;
}