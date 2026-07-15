class Solution {
public:
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
         a=b;
        b=rem;
    }
    return a;
}
    int gcdOfOddEvenSums(int n) {
       int sumeven=0;
       int sumodd=0;
       int even=2;
       int odd=1;
        for(int i=1;i<=n;i++){
            sumeven+=even;
            sumodd+=odd;
            even+=2;
            odd+=2;
        }
        
           return gcd(sumeven,sumodd);
            
      
    }
};