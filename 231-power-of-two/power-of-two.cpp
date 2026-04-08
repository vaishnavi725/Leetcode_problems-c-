class Solution {
public:
    bool isPowerOfTwo(int n) {
       int c=0;
       while(n!=0){
        int d=n%2;
        c=c+d;
        n=n/2;
       }
       if(c==1){
        return true;
       }
       return false;
    }
};