// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#


// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void dfs(vector<vector<int>> &m,vector<string> &oans,string ans,int i, int j){
        
          
        if(i == m.size()-1 && j == m[0].size()-1 && m[i][j] == 1){
            oans.push_back(ans);
            return;
        }
        
        
        if(i < 0 || j < 0 || i == m.size() || j == m[0].size() || m[i][j] == 0) return;
      
        
        m[i][j] = 0;
        
      
        dfs(m,oans,ans+'U',i-1,j);
          
        dfs(m,oans,ans+'D',i+1,j);
         
        dfs(m,oans,ans+'L',i,j-1);
         
        dfs(m,oans,ans+'R',i,j+1);
         
         m[i][j]=1;
         
          
         
        
    }
    
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        dfs(m,ans,"",0,0);
        
        return ans;
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
