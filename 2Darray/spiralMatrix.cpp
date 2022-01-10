// https://leetcode.com/problems/spiral-matrix/



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int count =0;
        int total = row*col;
        
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;
        
        while(count<total){
            
            //print start row
            for(int i = startCol;i<=endCol   &&  count<total;i++){
                    ans.push_back(matrix[startRow][i]);
                    count++;
            }
            startRow++;
            
            // print end coloumn
            for(int i = startRow;i<=endRow   &&  count<total;i++){
                    ans.push_back(matrix[i][endCol]);
                    count++;
            }
            endCol--;
            
            // print end row
            for(int i = endCol;i>=startCol   &&  count<total;i--){
                    ans.push_back(matrix[endRow][i]);
                    count++;
            }
            endRow--;
            
            // print start coloumn
            for(int i = endRow;i>=startRow   &&  count<total;i--){
                    ans.push_back(matrix[i][startCol]);
                    count++;
            }
            startCol++;
             
        }
        
        return ans;
    }
};
