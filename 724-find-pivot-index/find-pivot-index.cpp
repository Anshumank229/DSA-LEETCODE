class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int rightSum;
        int totalSum=0;
        int n=nums.size();
        for (int num : nums) {
            totalSum += num;
        }
        for(int i=0;i<n;i++){
            int rightSum = totalSum - leftSum - nums[i];
            if (leftSum==rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;    
    }
};