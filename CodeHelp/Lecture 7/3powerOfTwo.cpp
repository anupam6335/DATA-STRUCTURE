// Q: power of 2
// please follow this link - https://leetcode.com/problems/power-of-two/discuss/1638961/C%2B%2BPython-Simple-Solutions-w-Explanation-or-All-Possible-Solutions-Explained
#include <bits/stdc++.h>
using namespace std;

bool help(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
            return true;
        if(ans < INT_MAX/2)
            ans = ans * 2;
    }
    return false;
}
bool isPowerOfTwo(int n) {
    int check =  !(n & (n-1));
    return n > 0 && check;
}

/* 
    There's a nice bit-trick that can be used to check if a number is power of 2 efficiently. As already seen above, n will only have 1 set bit if it is power of 2. Then, we can AND (&) n and n-1 and if the result is 0, it is power of 2. This works because if n is power of 2 with ith bit set, then in n-1, i will become unset and all bits to right of i will become set. Thus the result of AND will be 0.

If n is a power of 2:
n    = 8 (1000)
n-1  = 7 (0111)
----------------
&    = 0 (0000)         (no set bit will be common between n and n-1)

If n is not a power of 2:
n    = 10 (1010)
n-1  =  9 (1001)
-----------------
&    =  8 (1000)         (atleast 1 set bit will be common between n and n-1)
 */


//  power of 2 == 1 << power ;
// 2 * any number = n<<1 ;
//  2 / any number = n>>1 ;
int main(void)
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);
    return 0;
}