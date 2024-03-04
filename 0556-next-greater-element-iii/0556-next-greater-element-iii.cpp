class Solution {
public:
    int nextGreaterElement(int n) {
        // Convert the input number to a string
        std::string num = std::to_string(n);
        
        // Find the next permutation of the digits
        bool next_permutation_possible = std::next_permutation(num.begin(), num.end());
        
        // Check if the next permutation is possible
        if (!next_permutation_possible || std::stoll(num) > INT_MAX)
            return -1;
        
        // Convert the resulting string back to an integer and return
        return std::stoi(num);
//         if(n >= INT_MAX)
//             return -1;
//         vector<int> s,r,v,res;
//         if(n%10 == n){
//             return -1;
//         }
//         int temp = n;
//         while(temp){
//             s.push_back(temp%10);
//             temp/=10;
//         }
//         reverse(s.begin(),s.end());
//         int j=s.size()-2;
//         while(j>=0 & s[j] >= s[j+1]){
//             j--;
//             if(j == -1){
//             return -1;
//         }
//         }
//         if(j == -1){
//             return -1;
//         }
//         for(int i=0;i<j;i++){
//             r.push_back(s[i]);
//         }
//         for(int i=0;i<r.size();i++){
//             res.push_back(r[i]);
//         }
        
//         int t=s.size()-1;
//         while(s[j]>=s[t]){
//             t--;
//         }
//         swap(s[j],s[t]);
//         res.push_back(s[j]);
//         for(int i=t;i<s.size();i++){
//             v.push_back(s[i]);
//         }
       
//         sort(v.begin(),v.end());
        
//         for(int i=0;i<v.size();i++){
//             res.push_back(v[i]);
//         }
//         long long int result = 0;
//         int sz = res.size();
//         for(auto d : res){
//             result = (result * 10) + d;
//         }
//         if(result >= INT_MAX)
//             return -1;
//         return result;
    }
};  