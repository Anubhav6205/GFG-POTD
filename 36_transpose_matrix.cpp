class Solution
{   
    public:  
    void trans(int point,vector<vector<int>>&matrix)
    {
        int n=matrix[0].size()-1-point;
        for(int i=point;i<matrix[0].size();i++)
        {
            swap(matrix[i][point],matrix[point][i]);
        }
    }
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0;i<n;i++)
        {
            trans(i,matrix);
        }
    }
};