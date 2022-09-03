#include<bits/stdc++.h>
using namespace std;

int sqt(int num){
    int start = 0; int end = num;
    long long  mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end){
        if(mid*mid > num) { end = mid -1;}
        else if(mid*mid < num) start = mid + 1;
        else if(mid*mid == num) return mid;
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < precision; i++) {
        factor /=10;
        for(double j=ans; j*j<n; j= j+factor) ans = j;
    }
    return ans;
}

int main(void) {
    cout<<morePrecision(13,3,sqt(13));
    return 0;
}