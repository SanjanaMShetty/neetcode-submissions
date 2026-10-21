class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int>seen(nums.begin(),nums.end());
        for(int num: nums){
            if(seen.find(num-1)==seen.end()){
                int current = num;
                int length = 1;
                while(seen.find(current+1)!=seen.end()){
                    current++;
                    length++;
                }
                longest = max(length,longest);
            }
        }
        return longest;
    }
};
