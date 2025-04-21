#include <iostream>

using namespace std;

int N;

void print1(int N){
    if(N==0) return;
    cout << N << " ";
    print1(N-1);
    cout << N << " ";
}

int main() {
    cin >> N;

    print1(N);

    return 0;
}