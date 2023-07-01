
class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        priority_queue <int> pq;
        
        for( int i=0 ; i<N ; i++){
            pq.push(A[i]);
        }
        
        long long ans=0;
        
        while(K>0){
            int val = pq.top();
            pq.pop();
            ans+=val;
            
            pq.push(val/2);
            K--;
        }
        
        return ans;
    }
};