//122. Best Time to Buy and Sell Stock II

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, n = prices.size();
        
        for (int i=1; i<n; ++i) {
            if(prices[i] > prices[i-1])
                profit += prices[i]-prices[i-1];
        }
        return profit;
    }
};

// Input: Prices = [7,1,5,3,6,4]
// Output: 7

// Input: Prices = [1,2,3,4,5]
// Output: 4

// Input: Prices = [7,6,4,3,1]
// Output: 0
