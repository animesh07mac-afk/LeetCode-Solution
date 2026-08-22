class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int ,int> mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.first%2==0){
                maxi=max(maxi,it.second);
            }
        }
        for(auto it:mp){
         if(it.first%2==0){
            if(it.second==maxi){
                return it.first;
            }}
        }
        return -1;

        
    }
};