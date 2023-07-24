//User function template for C++

class Solution
{
    public:
    void helper(stack<int>&s,int half)
    {
        if(half<1)
        {
            s.pop();
            return;
        }
        int el=s.top();
        s.pop();
        helper(s,half-1);
        s.push(el);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        
        int half=sizeOfStack%2==0 ? sizeOfStack/2  : sizeOfStack/2;
      //  cout<<"half "<<half<<endl;
        helper(s,half);
        
        
        
    }
};