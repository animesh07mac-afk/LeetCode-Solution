class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxint=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxint) return false;
            maxint=max(maxint,i+nums[i]);
        }
        return true;
        
    }
};