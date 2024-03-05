#include<bits/stdc++.h>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int flag = 0;
        vector<int> v;
        int i = n;
        bool pre=false,skip=false;
        if(digits[n] != 9){
            for(int i=0;i<n;i++){
                v.push_back(digits[i]);
            }
            v.push_back(digits[n]+1);
        }else{
            for(int i=n;i>=0;i--){
                if(digits[i] == 9 && skip != true){
                    v.push_back(0);
                    pre = true;
                }else if(pre == true){
                    v.push_back(digits[i] + 1);
                    pre = false;
                    skip = true;
                }else{
                    v.push_back(digits[i]);
                    pre = false;
                }
                
            }
            if(pre == true){
                    v.push_back(1);
                }
                reverse(v.begin(),v.end());
        }
        
        return v;
    }
};