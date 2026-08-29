class Solution {
public:
    int research(vector<int>& nums , int target, int st, int end){
        if(st<=end){
            int mid = st + (end -st)/2;
            if(target < nums[mid]){
                return research(nums,target,st,mid-1);
            }else if(target > nums[mid]){
                return research(nums,target,mid+1,end);
            }else
            return mid;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       return research(nums,target,0,nums.size()-1);
    }
};
