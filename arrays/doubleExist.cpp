// https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/

// [-2,0,10,-19,4,6,-8]

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


//     bool checkIfExist(vector<int>& arr) {
//         int zeCount = 0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]==0){
//                      zeCount++;
//             }else if(zeCount){
//                 continue;
//             }else if(zeCount==2){
//                  return true;
//             }
//             for(int j=0;j<arr.size();j++){
//                 if((arr[j]*2)==arr[i]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }



//  bool checkIfExist(vector<int>& arr) {
//  for(int i = 0; i < arr.size(); i++){
//             auto it = find(arr.begin(), arr.end(), arr[i]*2);
//             if(it != arr.end() && it != arr.begin()+i){
//                 return true;
//             }
//         }
//         return false;
//     }
