
#include<bits/stdc++.h>
using namespace std;





void first (int* arr, int start, int end, int target, int& occu) {

    while (start <= end) {
        int mid = start + (end-start)/2;

        if(target == arr[mid]) {
            occu = mid;
            end = mid - 1;
        } else if (target < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
}
void last (int* arr, int start, int end, int target, int& occu) {

    while (start <= end) {
        int mid = start + (end-start)/2;

        if(target == arr[mid]) {
            occu = mid;
            start = mid + 1;
        } else if (target < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
}

void totalOccurrences(int first, int last, int& total) {
    if(last == 0 and first == 0) total = 0;
    else total = last - first + 1; 
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key; cin>>key;
    int fOccu, lOccu, total; 
    fOccu = lOccu = total = 0;
    first(arr,0,n-1,key,fOccu);
    last(arr,0,n-1,key,lOccu);
    totalOccurrences(fOccu,lOccu,total);


    return 0;
}
