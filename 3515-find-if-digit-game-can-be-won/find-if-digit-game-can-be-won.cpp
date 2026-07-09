class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ss=0,ds=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                ss += nums[i];
            }
            else {
                ds += nums[i];
            }
        }
        return ss != ds;
        
    }
};