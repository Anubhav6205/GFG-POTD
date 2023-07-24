
class Solution {
  public:
       int stockBuyAndSell(int n, vector<int> &prices) {
         int maxProfit = 0, i = 0;
        while(i < n) // run the loop until all stock values have been checked
        {
            // finding local minima to buy the stock
            while(i < n-1 && prices[i+1] <= prices[i]) // i < n-1 because the current value is checked with the next value if i = n-1 then i +1 = n which throws an error
                i++;
                
            int buy = i++; // store i because it is the local minimum value of the stocks to buy
            // store i first then increment it using post increment
            
            // finding local maxima to sell the stock
            while(i < n && prices[i] >= prices[i-1]) // i < n because the current value is checked with the previous value
                i++;
                
            int sell = i - 1; // store the i-1 because it is the local maximum stock value to sell
            
            maxProfit += prices[sell] - prices[buy];  // add profits
        }
        return maxProfit;
    
        // code here
    }
};