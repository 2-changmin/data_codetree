#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int gcc(int a,int b){
    if(a==n) return b;
    return gcc(a+1,lcm(b,arr[a]));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = gcc(1,arr[0]);
    cout << result;

    return 0;
}