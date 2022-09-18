// Q:
#include<bits/stdc++.h>
using namespace std;


void help(int n,int *arr){
    int num[n];
    int i = 1;
    while(i < n){
        int temp = arr[i];
        
        int j = i - 1;
        while(j>=0){

            if(arr[j] > temp) arr[j+1] = arr[j]; // shifting 
            else break;
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    help(n,arr);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}