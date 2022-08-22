// Q:
#include<bits/stdc++.h>
using namespace std;


int reverse(int x) {
        /*
        string s=to_string(x);
        int i =0;
        int j = s.length();
        while(i<j/2){
            swap(s[i],s[j-1]);
            i++;
        }
        */
        
        int ans = 0;
        while(x != 0){
            int digit = x%10;
            
            if(ans >INT_MAX/10 or ans<INT_MIN/10) return 0;
            
            ans = (ans*10) + digit;
            x/=10;
        }
        return ans;
    }

int main(void){
    int n; cin >>n;

    cout<<endl;
    cout<< reverse(n);
    return 0;
}