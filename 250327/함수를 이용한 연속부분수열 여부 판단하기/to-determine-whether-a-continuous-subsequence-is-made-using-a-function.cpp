#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

int main() {
    cin >> n1 >> n2;
    int result = 1;
    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    for(int i=0;i<n1;i++){
        if(a[i]==b[0]){
            int k = i;
            for(int j=0;j<n2;j++){
                if(b[j]==a[k]){
                    k += 1;
                    result = 0;
                }
                else{
                    result = 1;
                    break;
                }
            }
        }
        if(result == 0){
            break;
        }
    }
    if(result == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}