class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int prof = 0;
        
        for(int i=1; i<prices.size(); i++) {
            if(prices[i] > minn) 
                prof = max(prof, prices[i]-minn);
            else
                minn = prices[i];
        }
        return prof;
    }
};
