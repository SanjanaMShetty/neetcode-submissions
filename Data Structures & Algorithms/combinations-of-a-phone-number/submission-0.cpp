class Solution {
public:
    vector<string> result;
    string path;
    unordered_map<char,string> dp {
        {'2', "abc"},
        {'3' , "def"},
        {'4' , "ghi"},
        {'5' , "jkl"},
        {'6' , "mno"},
        {'7', "pqrs"},
        {'8' , "tuv"},
        {'9' , "wxyz"}
    };
    void solve(string &digits,int index){
        if(index==digits.size()){
            result.push_back(path);
            return;
        }
        string letters = dp[digits[index]];
        for(char ch : letters){
            path.push_back(ch);
            solve(digits,index+1);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        solve(digits,0);
        return result;
    }
};
