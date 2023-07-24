class Solution {
  public:
    int sumOfNaturals(int n) {
          return long(long(n*long(n+1)/2)%1000000007);
        // code here
    }
};