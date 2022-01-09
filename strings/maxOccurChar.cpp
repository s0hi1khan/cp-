// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

    char getMaxOccuringChar(string str){
       int arr[26] = {0}; 
       for(int i=0; i<str.length();i++){
         int n =0;
         int ch = str[i];
         if(ch>='A' && ch<= 'Z'){
              n = ch-'A';
         }else if(ch>='a' && ch<= 'z'){
              n = ch-'a';
         }
         arr[n]++;
     }
     int maxi = 0;
     int ans = 0;
     for(int i=0;i<26;i++){
          if(arr[i]>maxi){
               ans = i;
               maxi = arr[i];
            }
        }
     char ansch = 'a' +ans;
     return ansch;
     }
