// https://leetcode.com/problems/valid-palindrome/

class Solution {
    private:
    bool valid(char ch){
        if ((ch >='a' && ch <='z') || (ch >='0' && ch <= '9') || (ch >='A' && ch <='Z')){
            return 1;
        }else{
            return 0;
        }
    }
    
    char toLower(char ch){
        if((ch >='a' && ch <='z') || (ch >='0' && ch <= '9')){
            return ch;
        }else{
            int temp = ch - 'A' + 'a' ;
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        
       
        string temp = "";
        
//         pushing valid chars
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
//      upper to lowercase
        
      
        for(int i =0; i<temp.length();i++){
            temp[i] = toLower(temp[i]);
        }
        
//         check palindrome
        
        int l=0;
        int h=temp.length()-1;
        while(l<h){
            if(temp[l++]!=temp[h--]){
                return 0;
            }
        }
   
        
        return 1;
        
    }
};
