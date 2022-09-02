#include<bits/stdc++.h>
using namespace std;

void getMax(int *arr,int index,int size, int& maxi){
    if(index == size) return;

    maxi = max(maxi,arr[index]);

    getMax(arr,index+1,size,maxi);    
}

int main(void) {

    int arr[]={1,9,2,0,10,2,200,88,28};
    int size =9;
    int maxi = INT_MIN;

    getMax(arr,0,size,maxi);
    cout<<maxi<<endl;
    return 0;
}