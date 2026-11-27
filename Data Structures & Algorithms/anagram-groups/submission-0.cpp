class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (const string& s:strs) {
            string key(26, 0);
            for (char c:s) {
                key[c-'a']++;
            }
            groups[key].push_back(s);
        }
        vector<vector<string>> res;
        for (const auto& group:groups) {
            res.push_back(group.second);
        }
        return res;
    }
};
