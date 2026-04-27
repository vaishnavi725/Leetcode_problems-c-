class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        int rev=0;
        while(n!=0){
            int d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        int r=abs(temp-rev);
        return r;
        
    }
};