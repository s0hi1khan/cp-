//  https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/


    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int prevDup ;
        
        for(int j=0;j<nums.size();j++){
            
            if(prevDup != nums[j]){
                nums[i++]=nums[j]; 
                prevDup = nums[j];
            }
            
        }
        
        return i;
    }
