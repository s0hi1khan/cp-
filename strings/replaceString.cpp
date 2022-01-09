//  https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5



string replaceSpaces(string &str){
	// Write your code here.
    string ans = "";
   
    for(int i = 0; i<str.length();i++){
        
        if(str[i]==' '){
           ans.push_back('@');
           ans.push_back('4');
           ans.push_back('0');
        }else{
           ans.push_back(str[i]);
        }
        
    }
    return ans;
}
