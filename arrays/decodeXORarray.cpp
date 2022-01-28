// https://leetcode.com/problems/decode-xored-array/

class Solution {
public:
//     vector<int> decode(vector<int>& encoded, int first) {       
//         int i=0; 
//         vector<int> ans;
//         ans.push_back(first);
//         while(i<encoded.size()){
//             first = ans[i]^encoded[i];  
//             ans.push_back(first);
//             i++;
//         }
//         return ans;
//     }
  
  
  
  
  vector<int> decode(vector<int>& encoded, int first) { 
     encoded.insert(encoded.begin(),first);
          for(int i = 1; i < encoded.size(); i++)
          {
              encoded[i] = encoded[i-1]^encoded[i];
          } 
          return encoded;
  
  }  
};
