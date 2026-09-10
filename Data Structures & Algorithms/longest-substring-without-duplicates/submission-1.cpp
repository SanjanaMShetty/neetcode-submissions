class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,n=s.size();
        int maxLen=0;
        unordered_set<char> chars;
        for(right=0;right<n;right++){
            while(chars.find(s[right])!=chars.end()){
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[right]);
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
