/*
2138. Divide a String Into Groups of Size k
-Easy
*/
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int cnt = 0;
        string ns = "";
        for(int i = 0; i < s.size(); i++){
            if(cnt != k){
                ns += s[i];
                cnt++;
            }
            else{
                res.push_back(ns);
                ns = s[i];
                cnt = 1;
            }
        }

        if(cnt != k){
            ns += string((k-cnt), fill);
        }


        res.push_back(ns);

        return res;
    }
};
