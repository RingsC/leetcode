class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result; 
        map<int, int> count; 
    
        for (int i=1; i<= nums.size(); i++)
            count[i] =0 ;
        
        for (int i= 0; i< nums.size(); i++)
            count[nums[i]] ++ ;

        map<int, int>::const_iterator cit = count.begin() ;
        for (; cit!= count.end(); cit++) {
            if ((*cit).second ==0 )
                result.push_back ((*cit).first) ;
        }
        return result; 
    }
};