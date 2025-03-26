class Solution {
public:
    bool isPalindrome(int x) {
        long reverse = 0;
        int initial = x;
        
        if (x < 0) {
            return false;
        }

        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }

        return reverse == initial;      
    }
};