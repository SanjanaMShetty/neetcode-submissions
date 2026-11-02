class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void solve(vector<int>& nums,int start){
        result.push_back(path);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            path.push_back(nums[i]);
            solve(nums,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(nums,0);
        return result;
    }
};
