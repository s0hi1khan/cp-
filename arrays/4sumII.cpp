// https://leetcode.com/problems/4sum-ii/


class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count =0;
        
        unordered_map<int,int> sums;
        
        for(int i =0;i<nums1.size(); i++){
            for(int j=0;j<nums2.size();j++){
                sums[nums1[i] + nums2[j]]++;
            }
        }
        
        for(int i =0;i<nums3.size(); i++){
            for(int j=0;j<nums4.size();j++){
                
                if (sums.find(-(nums3[i] + nums4[j])) != sums.end()) {
                        count += sums[-(nums3[i] + nums4[j])];
                }
                
            }
        }
        
        return count;
    }
};