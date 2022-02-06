// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        int prev = nums[0];
        
        for(int i =0;i<nums.size();i++){
            
            if(nums[i]==prev){
                count++;
            }else{
                count=1;
                prev = nums[i];
            }
            
            if(count>2 & nums[i]==prev){
                count--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};
