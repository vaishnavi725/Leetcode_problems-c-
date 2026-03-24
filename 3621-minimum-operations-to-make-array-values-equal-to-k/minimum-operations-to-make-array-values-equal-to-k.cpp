class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> myset;
        for(auto a : nums){
            if(a<k){
                return -1;
            }
            if(a>k){
                myset.insert(a);
            }
        }
       return myset.size();
    }
};