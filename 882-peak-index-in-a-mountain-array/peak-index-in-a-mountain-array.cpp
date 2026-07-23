class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        int result =-1;
        
        while(low<high){
            int guess= (high+low)/2;
            if (arr[guess]<arr[guess+1]){
                 low=guess+1;
            }
            else{
                result=guess;
                high=guess;
            }
        } 
        return result;
    }
};