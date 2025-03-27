#include <iostream>

using namespace std;

int M, D;

int month_day(int M,int D){
    int str[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(M>12){
        cout << "No";
    }
    else{
        if(str[M-1]>=D){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
    return 0;
}

int main() {
    cin >> M >> D;

    month_day(M,D);

    return 0;
}