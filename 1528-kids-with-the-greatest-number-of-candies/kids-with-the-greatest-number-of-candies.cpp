class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx = INT_MIN;
        for(int i =0; i < candies.size(); i++) {
            if(maxx < candies[i]) {
                maxx = candies[i];
            }
        }
        
        vector<bool> ans;
        for(int i =0; i < candies.size(); i++) {
            int r = candies[i] + extraCandies;
            if(r>=maxx) {
               ans.push_back(true);   
            }
            else {
                ans.push_back(false);
            }
        }
        return  ans;
    }
};