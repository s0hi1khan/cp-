// https://leetcode.com/problems/reverse-string/


  void reverseString(vector<char>& s) {
        int n = s.size();
            for(int i=0;i<n/2;i++){
                    // char temp = s[i];
                    // s[i] = s[n-1-i];
                    // s[n-1-i]= temp;
                    swap(s[i],s[n-1-i]);
                
            }
          
    }



// https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927



void solve(int i, int j, string& str){
    
    if(i>j){
        return;
    }
    
    swap(str[i++],str[j--]);
    
    solve(i,j,str);
    
}

string reverseString(string str)
{
	// Write your code here.
    int i =0;
    int j = str.length()-1;
    solve(i,j,str);
    return  str;
}
