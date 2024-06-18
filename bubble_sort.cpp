#include<bits/stdc++.h>
using namespace std;
// best time complexity for bubble sort is O(n).
// and the worst and average time complexirty is O(n*n).
void bubble_sort(int arr[],int n){
    for(int i =n-1;i>=1;i--){
        int cnt = 0;
        for(int j =0;j<=i-1;j++){
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                cnt = 1;
            }
        }
        // for optimisation , if we check that in first run no swapping happens then it means that the array is sorted already. so to optimise the code we can break the loop here so that it will not run further and will save the run time of our code
        if(cnt == 0) {
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}