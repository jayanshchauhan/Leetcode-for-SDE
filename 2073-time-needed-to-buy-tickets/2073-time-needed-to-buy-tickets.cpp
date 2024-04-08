class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // int temp = 0,count = 0;
        // for(int i=0;i<tickets.size();i++){
        //     if(tickets[k]>tickets[i]){
        //         temp +=(tickets[k]-tickets[i]);
        //     }
        //     if(tickets[k] == tickets[i] && k<i){
        //         count++;
        //     }
        // }
        // return (tickets.size())*tickets[k]-temp-count;
        int seconds = 0;

        while (tickets[k] != 0) {
            for (int i = 0; i < tickets.size(); i++) {
                if (tickets[i] <= 0) {
                    continue;
                } else {
                    tickets[i] -= 1;
                    seconds++;
                }
                if (tickets[k] == 0)
                break;
            }
        }

        return seconds;
    }
};

