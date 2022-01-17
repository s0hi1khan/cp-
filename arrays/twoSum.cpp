class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         int len = nums.size();
//         for(int i=0;i<len;i++){
//             for(int j=i+1;j<len;j++){
//                 if(nums[i] == target - nums[j]){return {i,j};}
//             }
//             return {-1,-1};
        
     
      
      
  
//     int len = nums.size();
//     for(int i = 0; i < len; i++) {
//         for(int j = i + 1; j < len; j++) {
//             if(nums[j] == target - nums[i])
//                 return { i, j };
//         }
//     }
//     return {-1, -1};
      
    
      
      
        
      vector<int> res;
        for(auto it1=nums.begin();it1!=nums.end();++it1){     
            auto it2=find(it1+1,nums.end(),target-*it1);
            if(it2!=nums.end()){
                res.push_back(it1-nums.begin());
                res.push_back(it2-nums.begin());
                break;
            }
        }
        return res;
      
      
    }  
      
};
    
