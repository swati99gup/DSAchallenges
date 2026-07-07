class Solution {
public:
    long long sumAndMultiply(int n) {
        long long place=1;
        long long sum=0;
        long long num=0;
        while(n>0){
           int rem=n%10;
           if(rem!=0){
            num+=rem*place;
           place*=10;
           sum+=rem;
           }
           
           n/=10;
        }
        return num*sum;
    }
};