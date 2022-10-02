class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int sum=0;
        while(n)
        {
            int a=n%10;
            n=n/10;
            sum+=a;
            p=p*a;
        }
        cout<<p<<" "<<sum;
        return p-sum;
    }
};