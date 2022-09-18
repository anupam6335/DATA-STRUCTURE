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

int minElement = INT_MAX;
void help(int n,int *arr){


    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[i]) swap(arr[j],arr[i]);
        }
    }

}

int main(void){
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Selection Sort"<<endl;
    help(n,arr);

    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    return 0;
}