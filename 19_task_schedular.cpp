class Solution {
  public:
     int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        int freq[26]={0};
        for(auto it: tasks)
        {
            freq[it-'A']++;
        }
        int maxi = *max_element(freq,freq+26);
        int extra =0;
        for(int i =0;i<26;i++)
        {
            if(maxi==freq[i])
            extra++;
            
        }
        return max(N,(maxi + (maxi-1)*K + extra-1));
    }
};