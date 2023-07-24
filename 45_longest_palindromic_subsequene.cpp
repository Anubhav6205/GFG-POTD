class Solution {
	public:
	
    int helper(    vector<vector<int>>&dp,string &str,int i1,int i2,int n)
	    {
	        if(i1==n||i2==n)
	        {
	            return 0;
	        }
	        if(dp[i1][i2]!=-1) return dp[i1][i2];
	        
	        if(i1!=i2 && str[i1]==str[i2])
	        {
	           return dp[i1][i2]= 1+helper(dp,str,i1+1,i2+1,n);
	        }
	        int first=helper(dp,str,i1+1,i2,n);
	        int second=helper(dp,str,i1,i2+1,n);
	        return dp[i1][i2]=max(first,second);

	        
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.size();
		    vector<vector<int>>dp(n,vector<int>(n,-1));
		    return helper(dp,str,0,0,n);
		    
		} 
};