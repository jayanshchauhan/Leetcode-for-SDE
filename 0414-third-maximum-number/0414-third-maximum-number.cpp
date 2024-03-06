class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // set<int, greater<int> >s;
        // if(nums.size() == 0)
        //     return 0;
        // else if(nums.size() == 2)
        //     return max(nums[0],nums[1]);
        // else if(nums.size() == 1)
        //     return nums[0];
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }
        // if(s.size() == 2){
        //     return *s.begin() > *s.end() ? *s.begin() : *s.end();
        // }
        // set<int>::iterator it;
        // it=s.begin();
        // advance(it,2);
        // return *it;
        set<int> s;

        // Eliminating duplicate elements

        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        // Finding third maximum when size of set >= 3
        if(s.size() >= 3){
            int index = s.size()-3;
            auto thirdMax= next(s.begin(), index);
            return *thirdMax;
        }

        return *--s.end();
    }
};