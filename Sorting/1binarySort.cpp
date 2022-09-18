// Q:


/* 

When to use selection sort?
The selection sort is best used when you want to:

You have to sort a small list of items in ascending order
When the cost of swapping values is insignificant
It is also used when you need to make sure that all the values in the list have been checked.

 */

#include<bits/stdc++.h>
using namespace std;

void help(int n,int *arr){

    int j=0;
    for(int i=0; i<n; i++){
        for(j=0; j<n-i; j++)
            if(arr[j] > arr[j+1] and j<n) 
                swap(arr[j],arr[j+1]);
    }

}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Bubble Sort"<<endl;
    help(n,arr);

    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    return 0;
}