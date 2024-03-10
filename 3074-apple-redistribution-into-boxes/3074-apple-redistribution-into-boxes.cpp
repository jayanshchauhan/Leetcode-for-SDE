class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long sum = 0;
        long long res = 0;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        int count = 0;
        for(int j=0;j<capacity.size();j++){
            if(res<sum){
                res+=capacity[j];   
                count++;
            }
        }
        return count;
    }
};

