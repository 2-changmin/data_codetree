#include <iostream>

using namespace std;

int N;

int find1(int N){
    if(N==1) return 1;
    if(N==2) return 2;
    return find1(N/3) + find1(N-1);
}

int main() {
    cin >> N;

    int result = find1(N);

    cout << result;

    return 0;
}