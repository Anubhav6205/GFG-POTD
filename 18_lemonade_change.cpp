class Solution {
  public:
   bool lemonadeChange(int N, vector<int> &bills) {
        // code here]
        
        map<int, int >m ; 
        
        for(int i =0 ;i<N;i++ )
        {
            if(bills[i]==5)
            {
                m[5]++;
                continue; 
            }
            else if(bills[i]==10)
            {
                if(m[5])
                {
                    m[5]--; 
                    m[10]++; 
                }
                else
                return false; 
            }
            else
            {
                if(m[10])
                {
                    m[10]-- ;
                    if(m[5])
                    {
                        m[5]-- ;
                    }
                    else
                    return false; 
                }
                else
                {
                    if(m[5]<3)
                    return false; 
                    else
                    {
                        m[5]-=3; 
                    }
                }
                
            }
            
        }
        return true ; 
    }
};