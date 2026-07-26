class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer =0;
        int unique_ele=1;
        int CM=1;
        while(CM<nums.size()){
            if (nums[CM]==nums[CM-1]){
                CM++;
                continue;
            }
            else if(nums[CM]!=nums[CM-1]){
                nums[officer+1]=nums[CM];
                officer++;
                unique_ele++;
                CM++;

            }
            
        }
        return unique_ele;
    }
};