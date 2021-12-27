/*
2114. Maximum Number of Words Found in Sentences
- Easy
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count;
        int m = -1;
        for(auto s : sentences){
            count = 0;
            stringstream str(s);
            string w;
            while(str >> w){
                count++;
            }
            m =  max(m, count);
        }

        return m;
    }
};
