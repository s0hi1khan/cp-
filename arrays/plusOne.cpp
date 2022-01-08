// https://leetcode.com/problems/plus-one/

//     vector<int> plusOne(vector<int>& digits) {        
//         long int num =0;
//         for(int i =0; i<digits.size() ;i++){
//             num = (num*10) + digits[i];
//         }
//        num+=1;
//        digits.clear();
//        vector<int>::iterator it = digits.begin();
//        while(num!=0){
//             int dig = num%10;
//             digits.insert (it,dig);
//             num/=10;
//        }
//       return digits;
//     }


