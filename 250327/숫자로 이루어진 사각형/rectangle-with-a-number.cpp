#include <iostream>

using namespace std;

int N;

int square(int N){
    int a = 1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a<<" ";
            a += 1;
            if(a>=10){
                a=1;
            }
        }
        cout<<endl;
    }
    return 0;
}

int main() {
    cin >> N;

    square(N);
    

    return 0;
}