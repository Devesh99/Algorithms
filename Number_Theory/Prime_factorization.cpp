
/*Finding Prime factors using Sieve
Time Complexity O(log n)

p[i] contains the minimum number which is a factor of i*/

int p[1000000];

void sieve(int n){
    int i,j;
    for(i=1;i<n;++i){
        p[i]=-1;
    }
    for(i=2;i<=n;++i){
        if(p[i]==-1){
            for(j=i;j<=n;j+=i){
                if(p[j]==-1)
                    p[j]=i;
            }
        }
    }
}
/*After applying this, traverse the array by dividing the number n with its value in p[n] and
then finding value of p[n/p[n]]..... till we reach 1*/