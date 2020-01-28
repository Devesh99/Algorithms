
//Time Complexity : O(n*log(log n))
// n is the maximum number till which we find all prime numbers

int prime[1000000];
void sieve(int n){
    for(int i=2;i<=n;++i)
        prime[i]=1;
    prime[0]=prime[1]=0;
    //if prime[i] is 0, then number is not prime
    for(int i=2;i*i<n;++i){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i)
                prime[j]=0;
        }
    }
        
}