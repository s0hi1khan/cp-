// https://leetcode.com/problems/rearrange-array-elements-by-sign/


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        
        while(i<nums.size()-1){
            int j = i+1;
            if(nums[i]>0 && nums[j]<0){
                i+=2;
            }else if(nums[i]>0){
                while(j<nums.size()){
                    if(nums[j]<0){
                        swap(nums[i],nums[i+1]);
                        break;
                    }else{
                        j++;
                    }
                }
            }else{
                while(j<nums.size()){
                    if(nums[j]>0){
                        swap(nums[i],nums[i+1]);
                        break;
                    }else{
                        j++;
                    }
                }
            }
            i+=2;
        }
        return nums;
    }
};
