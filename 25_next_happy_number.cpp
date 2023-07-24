class Solution{
public:
  
    bool check(int N){
        
        //
        if(N == 1 || N == 7) return 1;
        if(N < 10) return 0;
        
        //
        int sum = 0;
        while(N){
            
            int d = N % 10; N/=10;
            sum += (pow(d,2));
        }
        
        return check(sum);
    }
    int nextHappy(int N){
        // code here
        while(1){ // it is infinite loop | such an amazing thing right !!! 😀
            
            //
            N += 1;
            
            //
            bool flag = check(N);
            
            //
            if(flag) return N;
        }
        
        //
        return -1;
    }
};