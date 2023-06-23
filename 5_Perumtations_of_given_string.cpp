class Solution
{
	public:
	long long fact(int n)
	{
	    if(n<=1) return 1;
	    else return n*fact(n-1);
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    set<string>x;
		    long long count=fact(S.length());
		    while(count--)
		    {
		        x.insert(S);
		         
		      next_permutation(S.begin(),S.end());
		      
		        
		    }
		        for (const auto& str : x) {
        ans.push_back(str);
    }
		    return ans;
		    
		}
};
