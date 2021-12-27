/*
2119. A Number After a Double Reversal
-Easy
*/

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0)
            return true;
        if(num%10 == 0)
            return false;

        return true;
    }
};
