class Solution {
public:
    
    void permutation (vector<vector<int> >& res, vector<int> res_one, vector<int> nums, vector<bool> used_flag){
        if (res_one.size() == nums.size()) 
            res.push_back (res_one) ;
        else {
            for (int i=0; i< nums.size(); i++) {
                if (used_flag[i]== true || i > 0 && nums[i] == nums[i-1] && used_flag[i-1] == false )   //the elem has been used.
                    continue ;
            
                res_one.push_back(nums[i]) ;
                used_flag[i] = true ; 
                permutation (res, res_one, nums, used_flag) ;
                res_one.pop_back ();
                used_flag[i] = false; 
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.size() ==0) return vector<vector<int> >() ;
        
        vector<vector<int> >res ; 
        vector<int> res_one; 
        vector<bool> used_flag (nums.size(), false) ;
        sort(nums.begin(), nums.end()) ;
        permutation (res, res_one, nums, used_flag) ;
        
        return res; 
    }
};