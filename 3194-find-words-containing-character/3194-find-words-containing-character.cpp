class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(x==words[i][j]){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};