class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> res;
        // int n = nums1.size();
        // int m = nums2.size();
        // int i = 0,j = 0;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // while(i<n && j<m){
        //     if(nums1[i] > nums2[j]){
        //         j++;
        //     }else if(nums1[i] < nums2[j]){
        //         i++;
        //     }else{
        //         res.push_back(nums1[i]);
        //         i++;
        //         j++;
        //     }
        // }
        // return res;
        map<int,int>mpp1;

        for(int i=0;i<nums1.size();i++){
            mpp1[nums1[i]]++;
        }
        
        vector<int>ans;

        for(int i=0;i<nums2.size();i++){
            if(mpp1[nums2[i]]){
                ans.push_back(nums2[i]);
                mpp1[nums2[i]]--;
            }
        }

        return ans;
    }
};