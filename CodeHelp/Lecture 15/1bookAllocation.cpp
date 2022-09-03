// Q:         "Book Allocation"
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int mid,int A[],int N,int M) {
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0; i<N; i++) {
        if(pageSum + A[i] <= mid) pageSum += A[i];
        else {
            studentCount++;
            if(studentCount > M || A[i] > mid ) {
                return false;
        }
            pageSum = A[i];
        }
    }
    return true;
}


int help(int A[], int N, int M) 
{
    int s=A[0];
    int sum=0;
    
    for(int i=0;i<N;i++) sum+=A[i];
    
    int e=sum;
    int res= -1;
    
    if(M>N) return -1;
    int mid = s + (e-s) / 2;
    while(s<=e)
    {
                cout<<"start: "<<s<<" end: "<<e<<" mid: "<<mid<<endl;

        if(isPossible(mid,A,N,M)) {
            res = mid;
            e = mid - 1;
        }
        
        else
            s = mid+1;
    mid = s + (e-s) / 2;
    }
    return res;
}
/* void minAndSum(int* arr, int size, int& min, int& sumOfArray){
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
        cout<<"start: "<<start<<" end: "<<end<<endl;
        cout<<"mid: "<<mid<<endl;
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
 */
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