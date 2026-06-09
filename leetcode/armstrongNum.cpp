class Solution {
  public:
    bool armstrongNumber(int n) {
        int original=n;
        int sum=0;
        // code here
        while(n>0){
            int lastdig=n%10;
            sum=sum+(lastdig*lastdig*lastdig);
            n=n/10;
            
        }
        return sum==original;
    }
};