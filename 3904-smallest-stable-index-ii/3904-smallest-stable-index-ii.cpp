class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> s(n, 0);
        int mn = INT_MAX;
        for (int i = n - 1; i >= 0; i--) {
            mn = min(mn, nums[i]);
            s[i] = mn;}
        int mx = INT_MIN;
        int j = -1;

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);

            int mini = mx - s[i];

            if (mini <= k) {
                j = i;
                break;
            }
        }

        return j;
    }
};