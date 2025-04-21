#include <iostream>
#include <vector>


using namespace std;

int n;

int getmaxdigits(vector<int>& arr){
    int maxnum = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxnum) maxnum = arr[i];
    }
    int cnt = 0;
    while(maxnum > 0){
        maxnum /= 10;
        cnt++;
    }
    return cnt;
}

void sort(vector<int>& arr){
    int maxdigits = getmaxdigits(arr);
    int divisor = 1;
    for(int i = 0; i < maxdigits; i++){
        vector<vector<int>> buckets(10);

        for(int j = 0; j < n; j++){
            int each_digit = (arr[j]/divisor) % 10;
            buckets[each_digit].push_back(arr[j]);
        }
        int idx = 0;
        for(int b = 0; b < 10; b++){
            for(int k = 0; k < buckets[b].size(); k++)
                arr[idx++] = buckets[b][k];
        }
        divisor *= 10;
    }
}

int main() {
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr);

    for(int num:arr){
        cout << num << " ";
    }
    

    return 0;
}
