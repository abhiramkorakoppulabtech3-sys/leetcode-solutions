class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double count=0;
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        reverse(prices.begin(),prices.end());
        reverse(discounts.begin(),discounts.end());
        for(int i=0;(i<discounts.size() && i<prices.size());i++){
           count+=(prices[i]*(100-discounts[i])*1.0)/100;
        }
        for(int i=discounts.size();i<prices.size();i++){
            count+=prices[i];
        }
        return count;
     }
};