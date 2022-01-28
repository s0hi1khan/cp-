// https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3270/


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        
        int p = 1;
        int i=0;
        
        while(p<=nums.size() && i<nums.size()){
            if(nums[i]==p){
                p++;  i++;
            }else if(nums[i]<p){
                i++;
            }else{
                ans.push_back(p++);
            }
        }
                     
        while(p<=nums.size()){
            ans.push_back(p++);
        }
        
        
        
        
        return ans;
    }
};
