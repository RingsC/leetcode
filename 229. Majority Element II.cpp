class Solution {
public:
    //for finding the majority elems, which count more than [n/3], therefore we can use only two count_nums to record its.
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        if (nums.size() == 0) return res; 
        
        int elem_1(INT_MAX); int elem_2(INT_MAX);
        int elem1_count (0), elem2_count(0) ;
        
        for (int i=0;i < nums.size(); i++) {
            if (nums[i] == elem_1) 
                elem1_count ++ ;
            else if (nums[i] == elem_2)
                elem2_count ++ ;
            else if (elem1_count ==0) {
                elem1_count =1 ; 
                elem_1 = nums[i] ;
            } else if (elem2_count == 0) {
                elem2_count = 1; 
                elem_2 = nums[i] ;
            } else  {
                elem1_count --;
                elem2_count --;
            }
        }
        
        elem1_count = elem2_count = 0;
        for (int i=0; i< nums.size(); i++) {
            if (nums[i] == elem_1) 
                elem1_count ++ ;
            if (nums[i] == elem_2)
                elem2_count ++ ;
        }
        if (elem_1 != elem_2) {
            if (elem1_count > nums.size() /3) res.push_back (elem_1) ;
            if (elem2_count > nums.size() /3) res.push_back (elem_2) ;
        }else  {
            if (elem2_count > nums.size() /3) res.push_back (elem_2) ;
        }
            
        return res; 
        
    }
};