class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() <= 1)
            return 0;
        int profit = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            if (prices[i] < prices[i + 1])
                profit += prices[i + 1] - prices[i];
        }
        return profit;
    }
};

// The approach would be to find the local minima and maxima and calculate the profit. We can find the highest and lowest around days and find the profit.
