class Solution {
public:
    vector<int>path;
    vector<vector<int>>result;
    void solve(vector<int> &nums,int start){
        result.push_back(path);
        for(int i=start;i<nums.size();i++){
            path.push_back(nums[i]);
            solve(nums,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return result;
    }
};
