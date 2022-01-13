//modulo operator
// (a+b)%n = a%n + b%n;
// (a-b)%n = a%n - b%n;
// (a*b)%n = a%n * b%n;


//modular exponentiation or fast exp..

// https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res = 1;
    
    while(n>0){
        if(n&1){     //odd
            res = (1LL * (res)%m * (x)%m)%m;
        }
        x = (1LL * (x)%m  *  (x)%m)%m;    
        //1LL is for typecasting int to long long
        n=n>>1;
    }
    
    return res%m;
    
}
