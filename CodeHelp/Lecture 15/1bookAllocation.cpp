// Q:         "Book Allocation"
#include<bits/stdc++.h>
using namespace std;


void minAndSum(int* arr, int size, int& min, int& sumOfArray){
    for(int i=0; i<size;i++){
        if(arr[i]<min) min = arr[i];
        sumOfArray += arr[i];
    }
}


bool isPossible(int arr[], int size, int barrier, int students){

    int maxStudents = 1; int maxBooks = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] > barrier) return false;
        if(arr[i]+maxBooks <= barrier) {
            maxBooks += arr[i];
        } else {
            maxStudents++;
             if(maxStudents > students )
                return false;
            maxBooks = arr[i];
        }
    }   
    return true;
}

int help(int* arr, int arrSize, int noOfStudents){
    int min = INT_MAX; int sumOfArray = 0;
    minAndSum(arr, arrSize, min, sumOfArray);

    int start = min; int end = sumOfArray;
    int res = -1;
    int mid = start + (end-start)/2;
       
    while(start <= end) {
        // cout<<"start: "<<start<<" end: "<<end<<endl;
        // cout<<"mid: "<<mid<<endl;
        if(isPossible(arr, arrSize, mid, noOfStudents )) {
            res = mid;
            end = mid - 1; 
        }else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return res;
}

int main(void){
     cout<<endl<<endl<<"Book Allocation"<<endl;
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int noOfStudents; cin>>noOfStudents;
    cout<< help(arr,n,noOfStudents);
    return 0;
}