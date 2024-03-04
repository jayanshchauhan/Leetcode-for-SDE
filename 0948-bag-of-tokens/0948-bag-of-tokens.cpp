class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // int score = 0;
        // int res = 0;
         sort(tokens.begin(),tokens.end());
        // if(power < tokens[0]){
        //     return score;
        // }
        // int sum = 0;
        // int n = tokens.size();
        // for(int i=0,j=n-1; i<n && j>=0 && i<=j ;){
        //     cout<<" Hello"<<" ";
        //     if(power>=tokens[i]){
        //         power-=tokens[i++];
        //         score++;
        //     }
        //     else if(score!=0){
        //         power+=tokens[j--];
        //         score--;
        //     }
        //     res = max(res,score);
        //     cout<<power<<" "<<score<<endl;
        // }
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