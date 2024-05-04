class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        // for(int i=0;i<numbers.size();i++){
        //     for(int j=i+1;j<numbers.size();j++){
        //         if(numbers[i]+numbers[j] == target){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //         }
        //     }
        // }
        int i=0,j=numbers.size()-1;
   //     sort(numbers.begin(),numbers.end());
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                return {i+1,j+1};
            }else if(numbers[i]+numbers[j] > target){
                j--;
            }else{
                i++;
            }
        }
        return {0};
    }
};