class Solution {
public:
    int findPeakElem( vector<int>& nums, int left, int right){
        if (left > right) return -1; 
    
        int mid; 
        while (left <= right) {
            mid = left + (right -left) / 2 ;
            int mid_1 (INT_MIN), mid_2(INT_MIN) ;
            
            mid_1 = (mid==0) ? INT_MIN : nums[mid-1];
            mid_2 = (mid == nums.size()-1)? INT_MIN : nums[mid+1] ;
            
            if (nums[mid] > mid_1 && nums[mid] > mid_2) 
                return mid; 
            else {
                int left_index = findPeakElem (nums, left, mid -1) ;
                int right_index = findPeakElem (nums, mid+1, right) ;
                return (left_index == -1)? ((right_index == -1) ? -1: right_index) : left_index;         
            }
        }
    
        return -1 ;        
    }

    int findPeakElement(vector<int>& nums) {
        if (nums.size() ==0 || nums.size() ==1) return 0;
        int length = nums.size () ;
        int index = findPeakElem (nums, 0, length -1) ;
    
        return index;  
    }
};