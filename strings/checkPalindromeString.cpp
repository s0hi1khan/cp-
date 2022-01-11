//  https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0


bool checkPalindrome(string s)
{
    
      int n = s.length();
      //  modifying string   removing space and characters
      for (int i = 0; i < n; i++){
//             // //         uppercase to lower
            if (s[i] >= 'A' && s[i] <= 'Z'){
                 char ch = s[i] + 32;
                 s[i] = ch;
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                    // lowercase or digit 	s[i]=s[i];
                	continue;
            }else{   // other characters
                  s.erase(i,1); 
                  i--;
                  n--;
            } 
        }
//     cout<<s;
//     checking palindrome
    int l=0;
    int h= n-1;
    while(l<h){
        if(s[l++]!=s[h--]){
            return 0;
        }
    }
    
    
    return 1;   
}
