#define MOD (long)(1e9 + 7)

long long modPow(int x, int n){
  if(n == 0) return 1;
  if(n % 2 == 0) {
    long long sqrtX = modPow(x,n/2);
    return sqrtX * sqrtX % MOD ;
  }else{
    return x * modPow(x,n-1) % MOD;
  }
}

long long kaizyou(long long x){
  long long res = 1;
  for(int i = 1; i <= x; i++){
    res = (res * i) % MOD;
  }
  return res;
}

long long modCombi(long long a, long long b){
  if(b > a/2) return modCombi(a,a-b);
  return ((kaizyou(a) * modPow(kaizyou(b),MOD - 2)) % MOD)* modPow(kaizyou(a-b),MOD - 2) % MOD;
}
