class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         int n = prices.size();
    if (n < 2)
        return 0;

    std::vector<std::vector<int>> dp(n, std::vector<int>(2));

    dp[0][0] = 0; // The initial profit when not holding any stock
    dp[0][1] = -prices[0]; // The initial profit when holding a stock

    for (int i = 1; i < n; ++i) {
        dp[i][0] = std::max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
        dp[i][1] = std::max(dp[i - 1][1], -prices[i]);
    }

    return dp[n - 1][0];
    }

    
};