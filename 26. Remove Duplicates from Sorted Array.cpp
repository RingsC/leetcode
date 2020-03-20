class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length; 
        if (!nums.size()) return 0;
        if (nums.size() == 1) return 1;
        
        int loc = 1;
        for (int index=1; index < nums.size(); index++) {
           if (nums[index] == nums[index -1]) {
              continue; 
           } else {
               nums[loc] = nums[index];
               loc ++;
             
           }    
            
        }
        
        
        return loc;
    }
};
