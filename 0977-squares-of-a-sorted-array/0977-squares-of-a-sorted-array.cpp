class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // multiset<int> s;
        // for(int i=0;i<nums.size();i++){
        //   s.insert(nums[i]*nums[i]);
        // }
        // multiset<int>::iterator it1, it2; 
        // vector<int> v;
        // for(it1 = s.begin(); it1 != s.end(); ++it1){
        //     v.push_back(*it1);
        // }
        // return v;
        int n = nums.size();
        vector<int> result(n);
        
        int left = 0, right = n - 1;
        int idx = n - 1; // Start from the end of the result array
        
        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];
            
            if (leftSquare > rightSquare) {
                result[idx--] = leftSquare;
                left++;
            } else {
                result[idx--] = rightSquare;
                right--;
            }
        }
        
        return result;
    }
};