class Solution {
public:
    void permutation (vector<vector<int> >& res, vector<int> res_one, vector<int> nums) {
        if (res_one.size() == nums.size()) {
            res.push_back (res_one);
        }
        for (int i =0; i< nums.size(); i++) {
            if (find(res_one.begin(), res_one.end(), nums[i])!= res_one.end()) continue; 
            res_one.push_back (nums[i]) ;
            permutation(res, res_one, nums) ;
            res_one.pop_back ();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() ==0) return vector<vector<int> >() ;
        
        vector<vector<int> > res; 
        vector<int> res_one; 
        
        permutation (res, res_one, nums) ;
        
        return res; 
    }
};