class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size() ;
        if (length ==1 || length ==0) return length; 

        int j=0;
        for (int i=0;i<length;i++) {
            if (i != length-1 && nums[i] == nums[i+1]){
                continue; 
            } else {
                nums[j++] = nums[i] ;
            }           
        }
            
        return (j==0)?1: j ;
    }
};