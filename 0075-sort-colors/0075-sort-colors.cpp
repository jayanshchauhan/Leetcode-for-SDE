class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1=0;
        int c2=0;
        int c3=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c1++;
            }else if(nums[i]==1){
                c2++;
            }else{
                c3++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(c1){
                nums[i]=0;
                c1--;
            }
            else if(c2){
                nums[i]=1;
                c2--;
            }
            else if(c3){
                nums[i]=2;
                c3--;
            }

        }
    }
};