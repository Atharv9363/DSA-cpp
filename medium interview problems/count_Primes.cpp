//https://leetcode.com/problems/count-primes/

//Below approach is not the best approach because if you run this time limit will exceed because here the constraint is 0 <= n <= 5 * 106.

class Solution {
private:
    bool isPrime(int n){
        if(n<=1)
        return false;
        
        for(int i=2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    int countPrimes(int n) {
        int cnt = 0;
        for(int i=2; i<n; i++){
            if(isPrime(i))
            cnt++;
        }
        return cnt++;
    }
};

class Solution {
public:
    int countPrimes(int n) {
       int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};
//Here complexity is O(n^2)

//So, we are solving it using Sieve of Eratosthenes

class Solution {
public:
    int countPrimes(int n) {
       int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};

// OR

class Solution {
public:
    int countPrimes(int n) {
        if(n == 0) return 0;

        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;

        int ans = 0;

        for(int i = 2; i < n; i++){
            if(prime[i]){
                ans++;

                int j = 2 * i;
                while(j < n){
                    prime[j] = false;
                    j += i; 
                }
            }
        }
        return ans;
    }
};
//Here Time complexity is O(n*log(logn)
