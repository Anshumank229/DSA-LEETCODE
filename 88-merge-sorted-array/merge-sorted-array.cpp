class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(m + n);
        int index=0;
        int i=0;
        int j=0;
        while(i<m&& j<n){
            if (nums1[i]<=nums2[j]){
                 res[index]=nums1[i];
                 index++;
                 i++;
            }
            else{
                res[index]=nums2[j];    
                index++;
                j++;
            }
        }
        while(i < m)
        {
            res[index] = nums1[i];
            i++;
            index++;
        }
        while(j < n)
        {
            res[index] = nums2[j];
            j++;
            index++;
        }

        for(int k = 0; k < m + n; k++)
        {
            nums1[k] = res[k];
        }
    }
};