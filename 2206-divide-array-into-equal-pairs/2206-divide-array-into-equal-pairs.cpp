class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int >mp;
        if(nums.size()%2==0){
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        }
        for(auto it:mp){
            if(it.second%2!=0) return false;
        }
        return true;
        
    }
};