class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
    // code here
    int n = 0;
    for(int i = l-1 ;i<r;i++){
        n += 1<<i;
    }
    int ny = n&y;
    return x|ny;
}
};