class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int left=0,right=heights.size()-1;
        while(left<right){
            int w=right-left;
            int h=min(heights[left],heights[right]);
            int currWater=w*h;
            maxWater=max(maxWater,currWater);
            heights[left]<heights[right]?left++:right--;
        }
        return maxWater;
    }
};
