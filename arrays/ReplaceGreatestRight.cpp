//  https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3259/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
//         vector<int> ans;
//         if(arr.size()>1){
//             for(int i=0;i<arr.size()-1;i++){
//                 int max =0;
//                 for(int j=i+1;j<arr.size();j++){
//                     if(arr[j]>max){
//                         max = arr[j];
//                     }
//                 }
//                 ans.push_back(max);
//             }
//         }
//         ans.push_back(-1);
        
//         return ans;
        
    
        
        
         int n = arr.size();
        if (n == 0) return arr;
        int maxnum = arr.back();
        arr[n - 1] = -1;
        for (int i = n - 2; i >= 0; --i) {
            int tmpnum = maxnum;
            maxnum = max(maxnum, arr[i]);
            arr[i] = tmpnum;
        }
        return arr;
    }
};
