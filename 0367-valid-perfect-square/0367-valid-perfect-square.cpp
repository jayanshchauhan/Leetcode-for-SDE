class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned int low=0;
        unsigned int high=num;
        
        while(low<=high){
            unsigned int mid = low+(high-low)/2;
            if((double)mid*mid == (double)num){
                return true;
            }
            else if((double)mid*mid > (double)num){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
};