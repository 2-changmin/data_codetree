#include <iostream>
using namespace std;

int main() {
    int number[10];

    int a,b;
    cin >> a >> b;
    number[0] = a;
    number[1] = b;

    for(int i = 2;i < 10;i++){
        number[i] = (number[i-1] + number[i-2])%10;
    }

    for(int i = 0;i < 10;i++){
        cout << number[i] << " ";
    }
    return 0;
}