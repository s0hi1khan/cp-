
// https://practice.geeksforgeeks.org/problems/product-of-primes5328/1/#


class Solution{
private:
long long isprime(long long n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    
    
public:
long long primeProduct(long long L, long long R){
         int mod = 1000000007;

        if(L<=1 && R<=1)
        {
            return 1;
        }
        long long mul=1;
        
        for(int i=L;i<=R;i++)
        {
            if(isprime(i)==1){
            mul = ((mul%mod)*(i%mod))%mod;
            }
        }
        
        return mul%mod;
        
        
    }
    
    
};
