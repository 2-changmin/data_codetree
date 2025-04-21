#include <iostream>

using namespace std;

int n;
int arr[100000];
int merged_arr[100000];

void merge(int,int,int);
void merge_sort(int low,int high){
    if(low < high){
        int mid = (low + high) / 2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}

void merge(int low,int mid,int high){
    int i = low;
    int j = mid + 1;
    int k = low;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            merged_arr[k] = arr[i];
            k++;
            i++;
        }
        else{
            merged_arr[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        merged_arr[k] = arr[i];
        k++;
        i++;
    }
    while(j <= high){
        merged_arr[k] = arr[j];
        k++;
        j++;
    }
    for(k = low; k <= high; k++){
        arr[k] = merged_arr[k];
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
