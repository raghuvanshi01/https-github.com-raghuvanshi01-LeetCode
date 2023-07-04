//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        int n=s.length();
        string a;
        for(int i=n-1;i>=0;i--)
        {
           string b="";
           while((isalpha(s[i]) || isdigit(s[i])) && (i>=0))
           {
            b+=s[i];
            i--;
           }
           b+=".";
           reverse(b.begin(),b.end());
           a+=b;
    }
       a.erase(0, 1);
       return a;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends