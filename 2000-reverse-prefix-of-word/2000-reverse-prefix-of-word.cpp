class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp = "";
        int i;
        for(i=0;i<word.size();i++){
            if(word[i] == ch){
                temp+=word[i];
                reverse(temp.begin(),temp.end());
                i++;
                break;
            }
            temp+=word[i];
        }
        while(i<word.size()){
                temp+=word[i];
                i++;
        }
        return temp;
    }
};