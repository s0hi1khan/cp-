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
        
    
        
        
//          int n = arr.size();
//         if (n == 0) return arr;
//         int maxnum = arr.back();
//         arr[n - 1] = -1;
//         for (int i = n - 2; i >= 0; --i) {
//             int tmpnum = maxnum;
//             maxnum = max(maxnum, arr[i]);
//             arr[i] = tmpnum;
//         }
//         return arr;
        
        
        
        
         if (arr.size()==0) return arr;
        if (arr.size()==1) { arr[arr.size()-1] = -1; return arr; }
        size_t arrSize = arr.size(), i = arrSize-1, i_max = 0, l = 1;
        while (l <= arrSize-1) {
            while (i>=l) {
                if (arr[i] > arr[i_max]) i_max = i;
                i--;
            }
            for(i = l-1; i < i_max; i++) arr[i] = arr[i_max];
            l = i_max + 1;
            i_max = arrSize-1;
            i = arrSize-1;
        }
        arr[arrSize-1] = -1;
        return arr;
    }
};
