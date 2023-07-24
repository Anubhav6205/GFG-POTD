//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int>s;
        while(!q.empty())
        {
            int el=q.front();
            s.push(el);
            q.pop();
        }
        while(!s.empty())
        {
            int el=s.top();
            q.push(el);
            s.pop();
        }
        return q;
    }
};