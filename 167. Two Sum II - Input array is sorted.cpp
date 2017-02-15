class Solution {
public:
    int findvalue (vector<int>& numbers, int start, int end, int target) {
        if (start > end  || numbers[end] < target) return -1;
        if (numbers[start] == target) return start; 
        if (numbers[end] == target) return end; 
        
        int mid ;
        while (start <= end ) {
            mid = start + (end - start) /2 ;
            if (numbers[mid] == target) 
                return mid; 
            if (numbers[mid] < target)
                start = mid + 1; 
            if (numbers[mid] > target)
                end  = mid - 1; 
        }
        return -1; 
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        int mid;
        int left = 0 ; 
        int right = numbers.size() -1;
        vector<int> res; 
        
        if (numbers.size() == 0) return res; 
        if (target < numbers[0] ) return res; 
        
        for (int i= 0; i < right ; i++) {
            int right_index = findvalue(numbers, i + 1, right, target - numbers[i]) ;
            if ( right_index != -1) {
                res.push_back (i +1); 
                res.push_back (right_index+1) ;
                return res; 
            }
        }
        
        return res; 
    }
};