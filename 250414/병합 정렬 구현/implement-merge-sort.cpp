#include <iostream>

using namespace std;

int n;
int arr[100000];
int merged_arr[100000];

void merge(int arr[], int, int, int);
void merge_sort(int arr[],int low,int high){
    if(low < high){
        int mid = (low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void merge(int arr[],int low,int mid,int high){
    int i = low, j = mid + 1, k = low;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            merged_arr[k] = arr[i];
            k += 1;
            i += 1;            
        }
        else{
            merged_arr[k] = arr[j];
            k += 1;
            j += 1;
        }
    }
    while(i <= mid){
        merged_arr[k] = arr[i];
        k += 1;
        i += 1;
    }
    while(j <= high){
        merged_arr[k] = arr[j];
        k += 1;
        j += 1;
    }
    for(int k = low; k <= high; k++){
        arr[k] = merged_arr[k];
    }
    
}

int main() {
    cin >> n;
    int max = 0;
    int min = 100001;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max = n-1;
    min = 0;
    merge_sort(arr,min,max);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
