// https://www.codingninjas.com/codestudio/problems/print-permutations-string_758958

void solve(string s,int index, vector<string> &ans){    
       if(index>=s.length()){
           ans.push_back(s);
           return;
       }
     for(int i=index;i<s.length();i++){
         swap(s[index],s[i]);
         solve(s,index+1,ans);
         swap(s[index],s[i]);
     }  
}
vector<string> findPermutations(string &s) {
    // Write your code here.
     vector<string> ans;
    int index =0;
    solve(s,index,ans);
    return ans;
}





// https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254
// https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_1172219
// https://leetcode.com/problems/permutations/
