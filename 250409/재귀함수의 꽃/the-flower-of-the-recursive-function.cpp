#include <iostream>

using namespace std;

int N;

int print1(int N){
    if(N == 0) return 0;
    cout << N << " ";
    print1(N-1);
    cout << N << " ";

    return 0;
}

int main() {
    cin >> N;

    print1(N);

    return 0;
}