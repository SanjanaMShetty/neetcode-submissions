class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void solve(vector<int> &nums,int target,int start){
        if(target==0){
            result.push_back(path);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=start;i<nums.size();i++){
            path.push_back(nums[i]);
            solve(nums,target-nums[i],i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        solve(nums,target,0);
        return result;
    }
};
