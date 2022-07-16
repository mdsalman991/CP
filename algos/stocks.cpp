    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int l = 0, r = 1; // left for buy and right for sell
        while(r<prices.size()){
            if(prices[l] < prices[r]){
                maxP = max(maxP, prices[r]-prices[l]);
            }
            else l =r;
        r++;    
        }
        return maxP;
    }