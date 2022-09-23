class Solution {
public:
    long mod=1e9+7;
    int noofbits(int n)
    {
        return log2(n)+1;
    }
    int concatenatedBinary(int n) {
        long ans=0;
     for(int i=1;i<=n;i++)
     {
         int len=noofbits(i);
         ans=((ans<<len)%mod+i)%mod;
     }
        return ans;
    }
};