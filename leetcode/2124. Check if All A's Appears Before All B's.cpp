/*
2124. Check if All A's Appears Before All B's
-Easy
*/

class Solution {
public:
    bool checkString(string s) {
        int flag = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'b'){
                flag = 1;
            }
            if(s[i] == 'a' && flag == 1){
                return false;
            }
        }
        return true;
    }
};
