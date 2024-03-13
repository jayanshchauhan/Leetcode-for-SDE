class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> psum(n+1);
        // psum[0] = 0;
        // int sum=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     sum+=nums[i];
        //     psum[i] = psum[i-1] + nums[i-1];
        // }
        // for(int i=0;i<nums.size();i++){
        //     cout<<psum[i]<<" ";
        // }
        // for(int i=1;i+1<nums.size();i++){
        //     if(psum[i-1] == sum-psum[i+1]-nums[i]){
        //         return i-1;
        //     }
        // }
        // return -1;
        int leftSum = 0;
        int rightSum = 0;

        for (auto ele : nums) {
            rightSum += ele;
        }

        for (int i = 0; i < nums.size(); i++) {
            rightSum -= nums[i];
            if (leftSum == rightSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};

    