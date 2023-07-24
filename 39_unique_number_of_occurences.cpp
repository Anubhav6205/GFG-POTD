//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> map;
        unordered_map<int,int> freq;
        
        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }
        
        for(auto i:map)
        {
            freq[i.second]++;
        }
        
        for(auto i:freq)
        {
            if(i.second>1)
            return false;
        }
        
        return true;
        
    }
};