class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size () ;
        if (length ==1) return ; 
    
        int head =0;
        while (head < length && nums[head] == 0) {
            head ++ ;
        }
        if (head ==length) return;
        if (head !=0) {
            nums[0] = nums[head] ;
            nums[head] =0;
        }
    
        for (int i=0; i< length; i++) {
            for (int j = i; j< length -1; j++) {
                if (nums[j] ==0) {
                    int tmp =nums[j]; 
                    nums[j] = nums[j+1] ;
                    nums[j+1] = tmp; https://leetcode.com/problems/remove-element
                }
            }
        }
    }
};