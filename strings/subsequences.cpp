// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087


void solve(string str, int index, string output, vector<string> &ans){
    //base case
    if(index>=str.length()){ 
      if(output.length()>0{
    	    ans.push_back(output);
      }
        return;
    }
    
//     exclude case
     solve(str,index+1,output,ans);
    
//     include case
    	char ch = str[index];
    	output.push_back(ch);
    	solve(str,index+1,output,ans);
    

}

vector<string> subsequences(string str){
	
	// Write your code here
    
    vector<string> ans;
    string output ="";
    int index=0;
    solve(str,index,output,ans);
    
    return ans;
	
}
