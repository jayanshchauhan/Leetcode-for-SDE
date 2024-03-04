class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         sort(tokens.begin(),tokens.end());
        int p=power;
        if(tokens.size()==0 || p<tokens[0])
            return 0;
        int scr=0;
        int j=tokens.size()-1,i=0;
        int ans=0;
        while(i<=j)
        {
            if(tokens[i]<=p)
            {
                p=p-tokens[i++];
                scr++;
            }
            else if(scr!=0)
            {
                scr--;
                p=p+tokens[j];
                j--;
            }
            ans=max(ans,scr);
        }   
        return ans;
    }
};