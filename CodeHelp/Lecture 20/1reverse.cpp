// Q:
#include<bits/stdc++.h>
using namespace std;


void help(int n,int *arr){
    int i = 0; int j = n - 1;

    while(i < j){
        swap(arr[i],arr[j]);
        i++,j--;
    }
}

int main(void){
    cout<<"Reversed Array"<<endl;
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    help(n,arr);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
    return 0;
}