// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        int min_s = INT_MAX;
        int store=0;
        string s;
        for(int i=0;i<n;i++)
        {
            if(arr[i].length()<min_s)
            {
                min_s = arr[i].length();
                s=arr[i];
                
            }
        }
        int l = s.length();
        min_s = INT_MAX;
        string ans;
        
        for(int i=0;i<n;i++)
        {
            string temp="";
            for(int j=0;j<l;j++)
            {
                if(arr[i][j]==s[j])
                {
                    temp+=s[j];
                }
                else{
                    break;
                }
            }
            if(temp.size()<min_s)
            {
                ans = temp;
                min_s = temp.size();
            }
        }
        if(ans.size()==0)return "-1";
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends