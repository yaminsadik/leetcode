class Solution {
public:
    bool isPalindrome(int x) {
        long long reversed_number = 0, remainder;
        int original_number = x;

        // negative numbers and number ending in zero that are not zero are not palindromes. 
        if (x < 0 || x % 10 == 0 && x != 0){
            return false;
        }
        
        while(x!=0){
            remainder = x % 10;
            reversed_number = reversed_number * 10 + remainder;
            x /= 10;
        }
        return reversed_number == original_number;
        
    }
};