#include <iostream> 
#include <vector>

// Leetcode Best Time to Buy and Sell a Stock 

class Solution {
	public:
		// Passing by Reference
		int maxProfit(std::vector<int>& prices) {
			int max_profit = 0;
			unsigned long int min_price = 1e10;

			for (int i = 0; i < prices.size(); ++i) { 
				if (prices[i] < min_price) { 
					min_price = prices[i]; 
				}
				else if (prices[i] - min_price > max_profit) { 
					max_profit = prices[i] - min_price; 
				}
			}
			return max_profit; 
		}
};

int main() { 
	std::vector<int> prices1 = {7, 1, 5, 3, 6, 4}; 
	std::vector<int> prices2 = {7, 6, 4, 3, 1}; 
	// test1 object 
	Solution test1; 
	std::cout << "First Test: "<< test1.maxProfit(prices1) << std::endl;

	// test2 object 
	Solution test2; 
	std::cout << "Second Test: " << test2.maxProfit(prices2) << std::endl; 
	return 0; 
}
