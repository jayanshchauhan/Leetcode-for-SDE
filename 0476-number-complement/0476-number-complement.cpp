class Solution {
public:
    int findComplement(int num) {
        string binary;
        while(num>0)
        {
            string digit = to_string(num%2);
            binary += digit;
            num/=2;
        }
        reverse(binary.begin(), binary.end());
        int n = binary.size();
        for(int i=0;i<n;i++)
        {
            if(binary[i]=='1') binary[i] = '0';
            else if(binary[i]=='0') binary[i] = '1';
        }
        int decimal_number = bitset<32>(binary).to_ulong();
        return decimal_number;
         
    }
};