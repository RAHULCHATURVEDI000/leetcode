class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            bool match = true;

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || ch != strs[j][i]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                ans.push_back(ch);
            } else {
                break;
            }
        }
        return ans;
    }
};

