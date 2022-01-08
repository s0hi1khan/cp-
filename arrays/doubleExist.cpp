// https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/

// bool checkIfExist(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
        
//         int l =0;
//         int h= arr.size()-1;
//         int m = l + ((h-l)/2);
//         while(l<=h){
            
//             if((2*l)==m){
//                 return true;
//             }else if((2*l)<m){
//                 h=m-1;
//             }else{
//                 l=m+1;
//             }
            
//             m = l + ((h-l)/2);
//         }
        
//         return false;
//     }


// bool checkIfExist(vector<int>& arr) {
//      for(int i=0;i<arr.size();i++){
            
//              for(int j=0;j<arr.size();j++){
                
//                  if(arr[j]==0){
//                      continue;
//                  }
//                 if((arr[j]*2)==arr[i]){
//                     return true;
//                 }
            
//             }
        
            
//         }
        
//         return false;
// }

