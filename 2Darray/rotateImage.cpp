
//  https://leetcode.com/problems/rotate-image/



class Solution {

public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();       //row and col;
        
       
        
        //first - transpose 
        int p =0;
        for(int i =p;i<n;i++){     
            for(int j =p;j<n;j++){
                int temp = matrix[i][j];
                    matrix[i][j] =  matrix[j][i];
                    matrix[j][i] = temp;
            }   
            p++;
        }
        
        
        
        //second - reverse every rows
//         for(int i =0;i<n;i++){
//             for(int j =0;j<n/2;j++){
//                  int   temp2 = matrix[i][j];
//                        matrix[i][j] =  matrix[i][n-j-1];
//                        matrix[i][n-j-1] = temp2;
//             }  
//         }
        
        
        for(int i =0;i<n;i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
   
    }
};
