// https://leetcode.com/problems/3sum/


// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>>  finalAns;
//         for(int p=0;p<nums.size();p++){
            
//             vector<pair<int,int>> v;
//             for(int i=0;i<nums.size();i++){
//                 v.push_back({nums[i],i});
//             }
//             sort(v.begin(),v.end());
//             int l=0;
//             int h=v.size()-1;
//             int idx1=0;
//             int idx2=0;
//             while(l<h){
                
//                 if(v[l].first+v[h].first+nums[p]==0){   
                    
//                     idx1=v[l].second;
//                     idx2=v[h].second;
                    
//                 }
//                 if(v[l].first+v[h].first+nums[p]<0)
//                     l++;
//                 if(v[l].first+v[h].first+nums[p]>0)
//                     h--;
//             }  
//             vector<int> ans;        
//             ans.push_back(idx1);
//             ans.push_back(idx1);
//             ans.push_back(p);
//             finalAns.push_back(ans);
//         }
    
    
//         return finalAns;
//     }
// };








// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>>  finalAns;
//         int n = nums.size();
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int> ans;
//                         ans.push_back(nums[i]);
//                         ans.push_back(nums[j]);
//                         ans.push_back(nums[k]);
//                         finalAns.push_back(ans);
//                     }
//                 }
//             }
//         }
        
//         return finalAns;    
        
//      }
// };

