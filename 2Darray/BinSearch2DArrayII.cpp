// https://leetcode.com/problems/search-a-2d-matrix-ii/


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {       
//          int row = matrix.size();
//          int col = matrix[0].size();
//          int rowIndex = 0;
//          int colIndex = col-1;  
//         while (colIndex>=0 && rowIndex<row)
//         {
//             int Element = matrix[rowIndex][colIndex];        
//             if (Element == target){
//                         return true;
//                 }
//                else if (Element < target){
//                       rowIndex++;
//                 }else{
//                        colIndex--;
//                 }
//         }
//         return false;
//     }
// };




// {int i = 0, j = matrix[0].size(), k;
//         while(i < matrix.size() && j && (k = matrix[i][j-1]) != target) {
//             if (k > target) j--;
//             else if(k == target) return true;
//             else i++;
//         }
//         while (matrix.size()) matrix.pop_back();
//         return k == target;
// }
