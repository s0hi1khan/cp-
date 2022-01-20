
// https://leetcode.com/problems/roman-to-integer/



class Solution {
private:
    int getInteger(char c){
        switch(c)
        {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return -1;
        }
}
public:
    int romanToInt(string s) {
         int n = s.size();
    int prev = getInteger(s[n - 1]) , result = prev , current;
    for(int i = n - 2 ; i >= 0 ; i--)
    {
        current = getInteger(s[i]);
        if(current < prev)
            result -= current;
        else
            result += current;
        prev = current;
    }
    return result;
}

        
        
        
    
};
