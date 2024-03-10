class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        for(int i=0;i<nums2.size();i++){
            um[nums2[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            if(um[nums1[i]] !=0 && um[nums1[i]] !=-1){
                ans.push_back(nums1[i]);
                um[nums1[i]] = -1;
            }
        }
        return ans;
    }
};