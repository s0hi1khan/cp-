// https://leetcode.com/problems/find-the-duplicate-number/ 



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int ans = 0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //         if(nums[i]==nums[i+1]){
        //                 return nums[i];
        //         }else{
        //                 ans = ans ^ i ^ nums[i];
        //         }
        //     }
        // return ans; 
        
        int n = nums.size();
        vector<int> ans(n+1 , 0);
        
        for(int i =0; i<n;i++){
            
            if(ans[nums[i]]!=0){
                return nums[i];
            }else{
                ans[nums[i]]++;
            }
            
            
        }
        return -1;
        
    }
};
