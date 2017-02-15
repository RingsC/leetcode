class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size()==0) return  0;
        if (nums.size() ==1) return nums[0] ;
        
        map<int, int> count ; 
        for (int i=0; i< nums.size(); i++) {
            count[nums[i]] ++ ;
        }
        
        int fl(0) ;
        if (nums.size()> 3)
            fl = floor(nums.size() /2.0) ;
        else 
            fl =2; 

        map<int,int>::const_iterator cit = count.begin(); 
        int mostcount(0), mostcountval(0) ;
        for (;cit != count.end(); cit++) {
            if((*cit).second >= fl && (*cit).second > mostcount) {
                mostcount = (*cit).second ;
                mostcountval = (*cit).first;  
            }
        }
    
        return mostcountval;
    }
};