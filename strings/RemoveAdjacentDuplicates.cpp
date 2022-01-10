// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/




class Solution {
private:
    bool checkDup(string s){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){return true;}
        }
        return false;
    }
public:
    string removeDuplicates(string s) {
            
        int n = s.length();
        int i=0;
        while(i<n-1){
            
            if(s[i]==s[i+1]){
                s.erase(i,2); 
                i=0;
            }
            i++;
            
            if(!checkDup(s)){
                return s;
            }
            
        }
        
        
    }
};
