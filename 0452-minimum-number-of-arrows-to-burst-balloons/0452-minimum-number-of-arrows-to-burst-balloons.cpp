class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // sort(points.begin(),points.end());
        // int i=0,j=1,cnt=0;
        // while(j<points.size()){
        //     while(points[i][0]==INT_MAX && points[i][1]==INT_MAX)i++;
        //     if(points[j][0]>points[i][1]) i++,j++;
        //     else
        //         points[i][0]=max(points[i][0],points[j][0]),
        //         points[i][1]=min(points[i][1],points[j][1]),
        //         points[j][0]=points[j][1]=INT_MAX,j++;
        // }
        // for(int i=0;i<points.size();i++) if(points[i][0]!=INT_MAX) cnt++;
        // return cnt;
        int n= points.size();
        if(n==1) return 1;
        sort(points.begin(),points.end());
        vector<int>ans=points[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(points[i][0]<=ans[1]){
                ans={points[i][0],min(ans[1],points[i][1])};
            }
            else {
                ans=points[i];
                count++;
            }
        }
        return count;
    }
};