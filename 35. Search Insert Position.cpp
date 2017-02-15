class Solution {
public:
    int bin_search (vector<int>& nums, int start, int end, int target) {
        
        while ( start <= end ) {
            int mid = (start + end) /2 ;
            
            if (nums[mid] == target) return mid; 
            else if (nums[mid] > target) 
                end = mid -1; 
            else if (nums[mid] < target)
                start = mid + 1;
        }
        
        return start; 
    }
    int searchInsert(vector<int>& nums, int target) {
        
        if (nums.size ()==0) return 0;
        return bin_search (nums, 0, nums.size()-1, target) ;
        
    }
};