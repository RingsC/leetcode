class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        if (nums.size() ==0) return false; 

        map<int, int> nums_dist ; //<number, index> 
        for (int i =0; i< nums.size(); i++) {
            map<int, int>::const_iterator cit = nums_dist.find(nums[i]) ;
            if ( cit != nums_dist.end()) { //have already in
                if ((i - (*cit).second) <= k ) 
                    return true; 
                else
                    nums_dist[nums[i]] = i; 
            } else 
                nums_dist[nums[i]] = i; 
        }
        
        return false; 
    }
};