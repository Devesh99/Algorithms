
/*Finding GCD/HCF of 2 numbers 
Time Complexity O(log n)*/

int gcd(int a,int b){
    if(!b)
        return a;
    return gcd(b,a%b);
}