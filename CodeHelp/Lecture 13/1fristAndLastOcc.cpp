// Q:
#include<bits/stdc++.h>
using namespace std;



void firstOccurance(int *arr, int size ,  int key, int& occu) {
    
    int start = 0; int end = size - 1;

    while (start <= end) {
        int mid = start + (end-start)/2;
        if(key == arr[mid]) {
            occu = mid; 
            end = mid - 1;
        }
        else if(key < arr[mid]) 
            end = mid - 1;
        else 
            start = mid + 1;
    }
}
void lastOccurance(int *arr, int size ,  int key, int& occu) {
    
    int start = 0; int end = size - 1;

    while (start <= end) {
        int mid = start + (end-start)/2;
        if(key == arr[mid]) {
            occu = mid; 
            start = mid + 1;
        }
        else if(key < arr[mid]) 
            end = mid - 1;
        else 
            start = mid + 1;
    }
}


int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key; cin>>key;
    int occu = 1;

    firstOccurance(arr,n,key,occu);
    cout<<occu+1<<endl;
    return 0;
}