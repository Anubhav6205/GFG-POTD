
class Solution {
    public:
      int distributeTicket(int N, int K) {
          // code here
          if(K>=N) return N;
          int start=1,end=N;
          bool flag=true;
          while(start<end &&end-start>=K)
          {
              if(flag)
              {
                  start+=K;
                  flag=false;
                  
              }
              else
              {
                  end-=K;
                  flag=true;
              }
          
          }
  
          if(flag) return end ;
          
          return start;
          
          
      }
  };