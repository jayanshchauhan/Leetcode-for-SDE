class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       /* vector<int> temp;
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }else{
                temp.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        while(i<m){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            temp.push_back(nums2[j]);
            j++;
        }
        nums1=temp;
        */
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
        /*    for (int k=0; k<nums1.size(); k++)  
              cout << nums1[k] << " ";
              cout<<endl;  */
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
          /*      for (int k=0; k<nums1.size(); k++)  
              cout <<"inside1 "<<nums1[k] << " ";
              cout<<endl; */
            } else {
                nums1[k--] = nums2[j--];
          /*      for (int k=0; k<nums1.size(); k++)  
              cout <<"inside2 "<< nums1[k] << " ";
              cout<<endl; */
            }
        }
    }
};