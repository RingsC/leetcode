class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size() ;
        int j = 0;
        for (int i =0; i<length; i++) {
            if (nums[i] != val) {
                nums[j++] = nums[i] ;  
            }
        }
        return j ; 
    }
};