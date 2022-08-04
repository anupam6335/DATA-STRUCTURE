// Maximum-Subarray or Largest Sum Contiguous Subarray


#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int *arr, int n){
     if(n == 0) return 0;
        int max_sum = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            max_sum = max(sum, max_sum);
            if(sum < 0) sum = 0;

    }
    return max_sum;     
}
int main()
{
    int A[] = {-1, -2, -3, -4};
    // int A[] = {-2, -3, 4, -1, -2, 1, 5, -3};/
    int n = sizeof(A) / sizeof(A[0]);
    cout<<maxSubarraySum(A, n)<<std::endl;

    return 0;
}



