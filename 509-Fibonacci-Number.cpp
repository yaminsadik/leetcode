class Solution {
public:
    int fib(int n) {

        if (n<=1){
            return n;
        }

        int prev2 = 0;
        int prev = 1;
        int fibi = 0;
        for (int i = 2; i <= n; i++){
            fibi = prev+prev2;
            prev2 = prev;
            prev = fibi;
        }
        return fibi;

        
    }
};