class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0) continue;
            if(cnt!=arr[i] ) return cnt;
            while(i+1 < n && cnt==arr[i+1])
            {
                i++;
            }
            cnt++;
    
          
        }
        return cnt;
    } 
};