// https://www.codingninjas.com/codestudio/contests/good-bye-2021/problems/15586?leftPanelTab=0

int maxTeams(int n, string s){
    // Write your code here.
    int ze =0;
    int on =0;
    int i=0;
 	while(i<n){
        if(s[i]==48){
            ze++;
        }else{
            on++;
        }
        i++;
    }
    
   return min(ze,on);
    
   
    
}
