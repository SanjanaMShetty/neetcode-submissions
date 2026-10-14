class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> windowCount(26,0);
        int n = s1.size(),m=s2.size();
        if(n>m) return false;
        for(int i=0;i<n;i++){
            freq[s1[i]-'a']++;
            windowCount[s2[i]-'a']++;
        }
        if(freq==windowCount) return true;
        for(int i=n;i<m;i++){
            windowCount[s2[i]-'a']++;
            windowCount[s2[i-n]-'a']--;
            if(windowCount==freq) return true;
        }
        return false;
    }
};
