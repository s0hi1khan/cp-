// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/





// wrong ans
//   int mini = prices[0];
//         int minIndex =0;
//         for(int i =0;i<prices.size();i++){
//             if(prices[i]<mini){
//                 mini = prices[i];
//                 minIndex = i;
//             }
//         }
//         int maxProfit =0;
//         for(int i= minIndex;i<prices.size();i++){
//             int profit = prices[i]-mini;
//             maxProfit = max(profit , maxProfit);
//         }      
//         return maxProfit;





// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int currMin = prices[0];
//         int maxProfit = 0;
//         for(int i=0;i<prices.size();i++){
//             int currMin =  min(currMin, prices[i]);
//             int profit = prices[i]-currMin;
//             maxProfit = max(maxProfit, profit);
//         }
//         return maxProfit;
//     }
// };


