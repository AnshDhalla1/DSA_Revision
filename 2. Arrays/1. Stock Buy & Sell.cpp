//Given arrays of prices of stocks for upcoming 'n' days. And we can buy stock at any day & sell it in any upcoming day. Maximize the profit

I/p: arr = [1, 5, 3, 8, 12]
O/p: 13

//APPROACH 1 (BRUTE)

int maxProfit(vector<int> &arr, int start, int end){
  if(start < end) return 0;

  int profit =0;
  for(int i= start, i<end; i++){
    for(int j= i+1; i<=end; j++){
      if(price[j] > price[i]){
        int curr_profit = (price[j] - price[i]) + maxProfit(arr, start, i-1) + maxProfit(arr, j+1, end);
        profit = max(profit, curr_profit);
      }
    }
  }
  return profit;
}

//APPROACH 2 (Efficient)
/*
IDEA - 
- Based on fact that we know prices in advance.
- If the price of the stock is going down, we'll leth them go down & once the stock reaches the bottom pt. we will buy the stock
- And when they are going up , let it go up & when it reaches its peak, we'll sell it
- And so on

Therefore, you need to find bottom & peaks
*/

int maxProfit(vector<int> &price){
  int profit =0;
  for(int i=1; i<price.size(); i++){
    if(price[i) > price[i-1]){
      profit += (price[i] - price[i-1]);
    }
    return profit;
  }
}

