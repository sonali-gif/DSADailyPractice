class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int revn=0;
        while(x>0){
            int lastdig= x%10;
            if ((revn > INT_MAX / 10) || (revn < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            revn=(revn *10)+ lastdig;
            x=x/10;
        }
        return revn == original;
    }
    
};