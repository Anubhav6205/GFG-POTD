class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        set<string>s;
        vector<vector<int>>ans;
        for(int i=0;i<row;i++)
        {
            string str="";
        
            for(int j=0;j<col;j++)
            {
          
                str+=to_string(M[i][j]);
                
            }
            if(s.find(str)==s.end())
            {
              s.insert(str);
              vector<int>p;
              for(int x=0;x<str.length();x++)
              {
                  p.push_back(str[x]-'0');
                  
              }
              ans.push_back(p);
            }
        }

        return ans;
    }
};