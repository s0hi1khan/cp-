// https://leetcode.com/problems/find-all-anagrams-in-a-string/



// T L E
// class Solution {
// bool isAnagram(string window,string p){
//     sort(window.begin(),window.end());
//     sort(p.begin(),p.end());
//     // cout<<window<<" "<<p<<endl;
    
//     if(window.length()!=p.length()){
//         return false;
//     }
    
//     for(int i=0;i<p.length();i++){
//         if(window[i]!=p[i]){
//             return false;
//         }
//     }
//     return true;
// }
// public:
//     vector<int> findAnagrams(string s, string p) {
        
//         vector<int> ans;
//         string window;
        
//         for(int i=0;i<=(s.length()-p.length());i++){
//             int j=i;
//             while(j<i+p.length()&&j<s.length()){
//                 window.push_back(s[j++]);
//             }
//             cout<<window<<" "<<p<<endl;
//             if(isAnagram(window,p)){
//                     ans.push_back(i);
//             }
//             window.erase();
//         }

//         return ans;
//     }
// };
