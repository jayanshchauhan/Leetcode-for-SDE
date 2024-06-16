class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        // to handle the case where k > n. We can never select more than n projects.
        k = min(k, n);
        vector<pair<int,int>> projects;
        for(int i = 0; i < n; i++){
            projects.push_back({profits[i] , capital[i]});
        }
       
        //sorting in decreasing order of profits.
        sort(projects.begin(), projects.end(), greater<pair<int,int>>());
        
        int i = 0;
        
        while(k){
            // j indicates most profitable project, other than i (which is the most profitable project) we can
            // work on in case our working capital is not enough for ith project 
            int j = i + 1;  
            if(projects[i].second <= w){
                    w += projects[i].first;
                    k--;
                    i++;
            }
            else{
                while(j < n && projects[j].second > w)
                    j++;
                if(j == n)
                    return w;

                w += projects[j].first;
                // We don't want to count this project again in next iteration
                // We can also use visited array to keep track of which projects we have completed.
                projects.erase(projects.begin() + j);
                k--;
                n--;
            }
        }
        return w;
    }
};