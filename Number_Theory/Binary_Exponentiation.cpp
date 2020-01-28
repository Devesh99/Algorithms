//Time Complexity: O(log x)
// a is the base ,x is exponent , p is modulus
int binpow(int a,int x,int p){
    int res=1;
    while(x>0){
        if(x&1)
            res=(res*a)%p;
        else
            a=(a*a)%p;
            x>>=1;
    }
    return res;
}