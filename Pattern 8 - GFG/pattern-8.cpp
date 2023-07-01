//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=n;i>0;i--)
	    {
	        int space = n-i;
	        while(space--)
	        {
	            cout<<" ";
	        }
	        for(int j=1;j<=2*i-1;j++)
	        {
	            cout<<"*";
	        }
	        cout<<endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends