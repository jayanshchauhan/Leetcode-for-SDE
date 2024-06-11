class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> um;
        vector<int> v;
        for(int i=0;i<arr1.size();i++){
            um[arr1[i]]++;
        }
        
        for(int i=0;i<arr2.size();i++){
            while(um[arr2[i]] !=0 && um[arr2[i]]--){
                v.push_back(arr2[i]);
            }
        }
        
        for(auto a:um){
            while(a.second!=0){
              v.push_back(a.first);
                a.second--;
            }
        }
        
        return v;
    }
};