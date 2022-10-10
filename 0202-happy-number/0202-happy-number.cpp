class Solution {
public:
    bool isHappy(int n) {
        map<int,int> m;
        int sum=0;
        while(n!=1)
        {
            while(n)
            {
                int a=n%10;
               n= n/10;
                sum+=a*a;
            }
            if(m[sum])
            {
                return false;
            }
            else{
                m[sum]++;
            }
            n=sum;
            sum=0;
        }
        return true;
    }
};