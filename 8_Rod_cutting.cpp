// User function Template for C++

class Solution{
  public:
  int solve(int price[],int n,int l,vector<int> &dp){
      if(l<=0)
      return 0;
      if(dp[l]!=-1)
      return dp[l];
      int ans=0;
      for(int j=1;j<=n;j++)
      {
          if(j<=l)
          ans=max(ans,price[j-1]+ solve(price,n,l-j,dp));
      }
      return dp[l]=ans;
  }
    int cutRod(int price[], int n) {
        //code here
        vector<int> dp(n+1,-1);
        return solve(price,n,n,dp);
    }
};