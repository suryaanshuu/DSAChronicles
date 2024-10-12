class Solution {
public:
    int mySqrt(int x) {
        // return pow(x, 0.5);
        int num = x;
        for(long i = 1; i <= num; i++){
            if(i*i == num) return i;

            else if(i*i > num){
                return i - 1;
            }
        }
        return 0;
    }
};