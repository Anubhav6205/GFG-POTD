class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        bitset<32>binary(N);
        int count = binary.count();
        return count ;
    }
};