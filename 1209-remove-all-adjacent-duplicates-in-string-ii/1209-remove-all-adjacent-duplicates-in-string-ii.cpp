class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char> st;
        stack<int> count;
        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                count.top()++;
                if (count.top() == k) {
                    st.pop();
                    count.pop();
                }
            }
            else {
                st.push(c);
                count.push(1);
            }
        }
        string ans = "";
        while (!st.empty()) {
            while(count.top()!=0){
                ans += st.top();
                count.top()--;}
                if(count.top()==0){
                st.pop();
                count.pop();}
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};