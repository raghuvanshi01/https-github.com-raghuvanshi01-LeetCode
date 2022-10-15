class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int size = n+m;
        vector<int> ans(size);
        double res=0;
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                ans[k++]=nums1[i++];
            }
            else if(nums1[i]>=nums2[j])
            {
                ans[k++]=nums2[j++];
            }
        }
        while(i<n)
        {
            ans[k++]=nums1[i++];
        }
        while(j<m)
        {
            ans[k++]=nums2[j++];
        }
        for(int i=0;i<size;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        if(size%2==0)
        {
            int x=size/2;
            int y=x-1;
            res=double((ans[x]+ans[y])/2.0);
        }
        else{
            res=ans[size/2.0];
        }
        return double(res);
        
    
    }
};