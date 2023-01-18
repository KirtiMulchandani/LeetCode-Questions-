//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int, int> m;
        int mx = 0;
        long long sum = 0;
        
        for(int i = 0; i < N; i++){
            sum += A[i];
            
            if(sum == K)
                mx = i+1;
            
            if(m.find(sum) == m.end())
                m[sum] = i;
                
            if(m.find(sum - K) != m.end())
                mx = max(mx, i - m[sum - K]);
            
        }
        
        return mx;
        
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

/* It will work for +ve as well as -ve elements */
