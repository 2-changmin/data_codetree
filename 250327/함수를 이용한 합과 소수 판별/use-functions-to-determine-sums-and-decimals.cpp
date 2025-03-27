#include <iostream>
#include <cmath>

int a, b;

bool is_prime(int c){
    for(int i=2;i<=sqrt(c);i++){
        if(c%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    std::cin >> a >> b;

    int sum = 0;
    for(int i=a;i<=b;i++){
        if(i == 1){
            continue;
        }
        int first = i % 10;
        int second = i / 10;
        if(is_prime(i) && (first+second)%2 == 0){
            sum += 1;
        }
    }
    std::cout<<sum;

    return 0;
}