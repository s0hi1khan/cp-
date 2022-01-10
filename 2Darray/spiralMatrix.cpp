// https://leetcode.com/problems/spiral-matrix/


// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int count =0;
//         int total = row*col;
        
//         int startRow = 0;
//         int startCol = 0;
//         int endRow = row-1;
//         int endCol = col-1;
        
//         while(count<total){
            
//             //print start row
//             for(int i = startCol;i<=endCol   &&  count<total;i++){
//                     ans.push_back(matrix[startRow][i]);
//                     count++;
//             }
//             startRow++;
            
//             // print end coloumn
//             for(int i = startRow;i<=endRow   &&  count<total;i++){
//                     ans.push_back(matrix[i][endCol]);
//                     count++;
//             }
//             endCol--;
            
//             // print end row
//             for(int i = endCol;i>=startCol   &&  count<total;i--){
//                     ans.push_back(matrix[endRow][i]);
//                     count++;
//             }
//             endRow--;
            
//             // print start coloumn
//             for(int i = endRow;i>=startRow   &&  count<total;i--){
//                     ans.push_back(matrix[i][startCol]);
//                     count++;
//             }
//             startCol++;
             
//         }
        
//         return ans;
//     }
// };








class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1,bottom=n-1,top=0;
        int direction=1;
        vector<int> v;
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++) v.push_back(matrix[top][i]);
                direction=2;
                top++;
            }
            
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) v.push_back(matrix[i][right]);
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) v.push_back(matrix[bottom][i]);
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) v.push_back(matrix[i][left]);
                direction=1;
                left++;
            }
        }
        return v;
        
    }
};
