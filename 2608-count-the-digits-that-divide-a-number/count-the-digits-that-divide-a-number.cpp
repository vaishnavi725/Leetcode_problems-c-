class Solution {
public:
    int countDigits(int num) {
        int original=num;
        int c=0;
        while(num!=0){
            int d=num%10;
             if (original % d == 0) {
                c++;
            }
            num=num/10;
        }
        return c;
    }
};