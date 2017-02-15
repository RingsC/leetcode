class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result ; 
        map<int, int> numcount ;
        
        for (int i =0; i < nums1.size(); i++){
            numcount[nums1[i]] ++ ;
        }
        
        for (int i =0; i< nums2.size(); i++) {
            if ( --numcount[nums2[i]] >=0 ) 
                result.push_back(nums2[i]) ;
        }
        
        return result; 
    }
};