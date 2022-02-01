// https://leetcode.com/problems/permutation-in-string/


//sliding window approach
// class Solution {
// private: 
//     bool checkEqual(int a[26] , int b[26]){
//         for(int i =0; i<26; i++)
//         {
//             if(a[i]!=b[i]){
//                 return 0;
//             }
//         } 
//         return 1;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {
        
//         //character count array
//         int count[26] = {0};
        
//         for(int i=0 ; i<s1.length()  ; i++){
//             int index =s1[i]-'a';
//             count[index]++;
//         }
        
//         //traverse s2 string in window of s1 lenth 
//         int i =0;
//         int windowSize = s1.length();
//         int count2[26]={0};
        
//         //running for first window
//         while(i< windowSize  &&  i<s2.length()){
            
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }
        
        
//         if(checkEqual(count , count2)){
//             return 1;
//         }
        
//         //aage process kro
//         while(i<s2.length()){
//             char newCh = s2[i];
//             int index = newCh - 'a';
//             count2[index]++;
            
//             char oldCh = s2[i-windowSize];
//             index = oldCh-'a';
//             count2[index]--;
            
//             i++;
            
//             if((checkEqual(count , count2))){
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };



//another approach
// class Solution {
// public:
//     string getAnagram(string str) {
//         vector<int>arr(26,0);
//         string ans="";
        
//         for(int i=0; i<str.size(); i++) {
//             arr[str[i]-97]++;
//         }
//         for(int i=0; i<26; i++) {
//             if(arr[i]>0) {
//                 ans+= (97+i);
//                 ans+= to_string(arr[i]);
//             } 
//         }
//         return ans;
//     }
//     bool checkInclusion(string s1, string s2) {
//         int i=0, j=s1.length()-1;
//         string str1= getAnagram(s1);
//         while(j<s2.length()) {
//             string str2= getAnagram(s2.substr(i, j-i+1));
//             if(str1==str2) return true;
//             i++;
//             j++;
//         }
//         return false;
//     }
// };



//another approach 
  bool checkInclusion(string s1, string s2) {
  int n1= s1.length(), n2= s2.length();
        if(n1>n2) return false;
        vector<int>arr1(26,0), arr2(26,0);
        
        int i;
        for(i=0; i<n1; i++) {
            arr1[s1[i]-97]++;
            arr2[s2[i]-97]++;
        }
        if(arr1==arr2) return true;
        
        for(; i<n2; i++) {
            arr2[s2[i-n1]-97]--;
            arr2[s2[i]-97]++;
            if(arr1==arr2) return true;
        }
        return false;
    }
