class Solution {
public:
int generate(int i,int cnt,int high){
    int num=0;
while(cnt>0&&i<=9){
    num=num*10+i;
    i++;
    cnt--;
}
if(num<=high)return num;
return -1;
}
    vector<int> sequentialDigits(int low, int high) {
        int cnt=1;
       int temp=low;
        vector<int>ans;
       while(temp>=10){
        temp/=10;
        cnt++;
       } 
       temp=high;
       int maxcnt=1;
       while(temp>=10){
         temp/=10;
       maxcnt++;
       }
       while(cnt<=maxcnt){
       for(int i=1;i<=10-cnt;i++){
      int num=generate(i,cnt,high);
      if(num!=-1 && num>=low)ans.push_back(num);  }
      cnt++;}
      return ans;
    }
};