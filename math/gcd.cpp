//  https://www.codingninjas.com/blog/2020/07/25/explained-euclids-gcd-algorithm/

// ans = gcd(a,b) = gcd( a-b , b){a<=b}  =  gcd(a&b , b)  =  gcd(ans , 0) ;
// gcd(a,b) * lcm(a,b) = a*b;



int gcd(int a , int b){
  
  if(a==0){return b;}
  if(b==0){return a;}
  
  while(a!=b){
      if(a>b){
          a=a-b;
      }else{
        b= b=a;
      }
  }
  return a;
  
}

int main(){
  int a ,b;
  cin<<a<<b;
  
  int ans = gcd(a,b);
  cout<<ans;
  
  return 0;
}
