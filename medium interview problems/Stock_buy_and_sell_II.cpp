// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1?page=1&company[]=Salesforce&sortBy=difficulty

class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int max = 0;
        for(int i=1; i< n ; i++){
            if(prices[i] > prices[i-1] || prices[i] == prices[i-1] ){
                max += (prices[i] - prices[i-1]);
            }
        }
        
        return max;
    }
};

