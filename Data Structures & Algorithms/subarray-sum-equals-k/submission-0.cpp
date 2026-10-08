class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixCount;
        prefixCount[0]=1;
        int currentSum =0;
        int count=0;
        for( int num : nums){
            currentSum+=num;
            int required = currentSum - k;
            if(prefixCount.find(required)!=prefixCount.end()){
                count += prefixCount[required];
            }
            prefixCount[currentSum]++;
        }
        return count;
    }
};