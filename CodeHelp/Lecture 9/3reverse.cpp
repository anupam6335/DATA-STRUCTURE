#include<iostream>
using namespace std;

void swap(int *x,int *y) {
    int temp = *x; 
    *x = *y;
    *y = temp;
}

void reverse(int n,int *arr){
    int i,j;
    i = 0;
    j = n - 1;
    while(i < j){
        swap(&arr[i],&arr[j]);
        i++; j--;
    }
}

int main(void){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    reverse(n,arr);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}