class Solution {
public:
    vector<vector<string>> result;
    vector<string> path;
    bool isPalindrome(string s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    void solve(string s,int start){
        if(start==s.size()){
            result.push_back(path);
            return;
        }
        for(int end=start;end<s.size();end++){
            if(isPalindrome(s,start,end)){
                string part = s.substr(start,end-start+1);
                path.push_back(part);
                solve(s,end+1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        solve(s,0);
        return result;
    }
};
