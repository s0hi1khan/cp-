// a^b

int power(int a, int b){
    
    if(b==0){
      return 1;
      
    if(b==1){
      return a;
      
      
    int ans = power(a, b/2);
      
//       if b is even
    if(b%2==0){
        return ans*ans;
    else           //odd 
        return  a * ans * ans;
      
