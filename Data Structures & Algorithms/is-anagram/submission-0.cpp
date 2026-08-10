class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int f[26]={0};
        for(int i=0; i<s.length(); i++)
        {
            char c = tolower(s[i]);
            f[c - 'a']++;
        }
        for(int i=0;i<t.length(); i++)
        {
            char c = tolower(t[i]);
            f[c - 'a']--;
        }

        for(int i=0; i<26; i++)
        {
            if(f[i]!=0)
            {
                return false;
            }
        }
        return true;

    }
};