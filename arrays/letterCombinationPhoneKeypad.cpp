// https://leetcode.com/problems/letter-combinations-of-a-phone-number/


class Solution {
private:
    void solve(string digits,string output,vector<string> &ans,int index, vector<string> mapping ){
        
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        };
        
        int num = digits[index]-'0';
        string val = mapping[num];
        
        
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits,output,ans,index+1,mapping);
            //backtrack
            output.pop_back();
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        
        if(digits.length()<=0){
            return ans;
        }
        
        string output;
        int index =0;
        vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        solve(digits,output,ans,index,mapping);
        
        return ans;
        
    }
};



