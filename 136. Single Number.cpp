class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::map <int,int> value;
        for (int i=0; i< nums.size(); i++){
            value [nums[i]] ++ ;
        }
        std::map<int,int>::const_iterator cit = value.begin();        
        for (; cit != value.end(); cit++) {
            if ((*cit).second ==1)
                return (*cit).first;
        }
        
        return 0;
            
    }
};