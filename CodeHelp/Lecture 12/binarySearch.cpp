// Q:
#include<bits/stdc++.h>
using namespace std;



int  binarySearch(int *arr,int start,int end,int key){
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return 0;
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key; cin>>key;
    int pos = binarySearch(arr,0,n-1,key);
    cout<<""<<endl;
    if(pos == 0) cout<<"Not found!"<<endl;
    else cout<<"Number is found at: "<<pos+1<<endl;
    return 0;
}