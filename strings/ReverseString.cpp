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
