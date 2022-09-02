// Q: peek index in moutain array

/* 

    def peakIndexInMountainArray(self, A):
        def gold1(l, r):
            return l + int(round((r - l) * 0.382))

        def gold2(l, r):
            return l + int(round((r - l) * 0.618))
        l, r = 0, len(A) - 1
        x1, x2 = gold1(l, r), gold2(l, r)
        while x1 < x2:
            if A[x1] < A[x2]:
                l = x1
                x1 = x2
                x2 = gold1(x1, r)
            else:
                r = x2
                x2 = x1
                x1 = gold2(l, x2)
        return A.index(max(A[l:r + 1]), l)



 */
#include<bits/stdc++.h>
using namespace std;


void peek(int *arr, int start, int end, int& peek){

    while(start < end) {
        int mid = start + (end-start)/2;
        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else end = mid;

        peek = start;
    }
}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<""<<endl;
    int p = 0;
    peek(arr,0,n-1,p);
    cout<<p+1<<endl;
    return 0;
}