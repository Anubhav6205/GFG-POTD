class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans="";
		    queue<char>q;
		    unordered_map<char,int>mp;
		    for(int i=0;i<A.size();i++)
		    {
		        mp[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty() && mp[q.front()]>1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		        {
		            ans+='#';
		        }
		        else
		        {
		            ans+=q.front();
		        }
		        
		    }
		    
		    return ans;
		}

};