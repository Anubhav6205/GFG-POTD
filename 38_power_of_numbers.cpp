
class Solution{
    public:
    long long power(int N,int R)
    {
        long long int res = 1;
        long long int x = N;
        long long int mod = 1000000000+7;
        while(R) {
            if(R%2 == 1) {
                res = ((res%mod)*(x%mod))%mod;
            }
            x = ((x%mod)*(x%mod))%mod;
            R = R/2;
        }
        return res;
    }

};