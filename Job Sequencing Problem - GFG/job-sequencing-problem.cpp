// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool mycomp(Job A,Job B)
    {
        return A.profit>B.profit; 
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,mycomp);;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i].dead);
        }
        int sum=0;
        int count=0;
        vector<int> ans(maxi+1,-1);
        for(int i=0;i<n;i++)
        {
                int c = arr[i].dead-1;
                while(c>=0 && ans[c]!=-1)
                {
                    c--;
                }
                if(c>=0 && ans[c]==-1)
                {
                    count++;
                    sum+=arr[i].profit;
                    ans[c]=1;
                }
        }
        vector<int> v;
        v.push_back(count);
        v.push_back(sum);
        return v;
    } 

};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends