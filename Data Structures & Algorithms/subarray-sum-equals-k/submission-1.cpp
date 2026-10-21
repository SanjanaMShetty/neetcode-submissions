class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixSumCount;
        prefixSumCount[0]=1;
        int count=0;
        int currentSum=0;
        for(int num: nums){
            currentSum+=num;
            int required = currentSum  - k;
            if(prefixSumCount.find(required)!=prefixSumCount.end()){
                count+=prefixSumCount[required];
            }
            prefixSumCount[currentSum]++;
        }
        return count;
    }
};