//  https://leetcode.com/problems/count-primes/


// class Solution {
// private:
   
// public:
//     int countPrimes(int n) {
//             //seiveOfEratosthenes
//        vector<bool> prime(n+1,true);
//         prime[0] = false;        
//         prime[1] = false;
//         int ans = 0;
//         for(int i=2;i*i<=n;i++)
//         {
//             if(prime[i])
//             {
//                 for(int j=i*i;j<=n;j+=i)
//                 {
//                     prime[j] = false;
//                 }
//             }
//         }
//         for(int i=2;i<n;i++)
//         {
//             if(prime[i])
//             {
//                 ans++;
//             }
//         }
//         return ans;
        
//     }
// };



class Solution {
public:
    int countPrimes(int n) {  
         if (n<=2) 
            return 0;
	    vector<bool> passed(n, false);
	    int sum = 1;
	    int upper = sqrt(n);
	    for (int i=3; i<n; i+=2) {
		    if (!passed[i]) {
			    sum++;
			    if (i>upper) 
                    continue;
			    for (int j=i*i; j<n; j+=i*2) {
				    passed[j] = true;
			    }
		    }
	    }
	    return sum;
        
        
    }
};
