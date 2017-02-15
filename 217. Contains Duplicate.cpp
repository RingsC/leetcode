class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> result(nums.begin(), nums.end()) ;
       return (result.size() == nums.size())? false : true; 
    }
};