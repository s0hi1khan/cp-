// https://leetcode.com/problems/string-compression



//naive solution
// int compress(vector<char>& chars) {
// 	int i = 0;
// 	for(int j = 1, count = 1; j <= chars.size(); j++, count++) {
// 		if(j == chars.size() || chars[j] != chars[j - 1]) {
// 			chars[i++] = chars[j - 1];  
// 			if(count >= 2) 
// 				for(char digit : to_string(count)) 
// 					chars[i++] = digit;
// 			count = 0;
// 		}
// 	}
// 	return i;
// }



class Solution {
public:
    int compress(vector<char>& chars) {
        //we need to do inplace in array for that we will store index of valid characters in a var called ansIndex, so here we go
        
        int i = 0;
        int ansIndex=0;
        int n = chars.size();
        
        while(i<n){
            //go to next element from i and start checking if its same or not
            
            int j = i+1;
            
            //maintain a loop to check the same no. of elements  if present with j<n
            
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //we will come out of this loop in two cases
        //1. we traversed whole lot of array
        //2. we encountered a new different character
            
            //firstly we will store the count of old character before moving to the new character
            chars[ansIndex++] = chars[i];   //first element inserted in ans array and count stored in ansIndex, now store its count along with it
            
            int count = j-i;    //j=first occurence of new diff. character, i = first occurence of our current character
            
            //put count in answer array only if it's greater than 1
            if(count>1){
                //convert count freq into single digit then storing coz in character we cant store two digit count
                string cnt = to_string(count);  //we converted integer count to string count & now save it in answer array and increement count in ansIndex
                
                for(char ch:cnt){
                    chars[ansIndex++] = ch; //store 12 as '1' & '2' => so two counts will be increemented
                }
            }
            
            //now all dealings done with old character => move to new one whose 1st occurence already saved in j
            i=j;    //now the loop will start from start for the new character
        }
        //so after this we will have our answer array and we need to return the count of character answer array which we have stored in ansIndex so return that
        
        return ansIndex;
    }
};
