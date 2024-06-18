#include<bits/stdc++.h>
using namespace std;
void insert(int arr[], int i)
{
    int j = i;
    while(j>0&&arr[j]<arr[j-1])
    {
        int temp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }  
}
//Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{    
    for(int i =0;i<n;i++){
        insert(arr,i);
    }    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr,n);
    for(int i = 0; i<n;i++){
        cout<< arr[i] <<" ";;
    }

    return 0;
}
