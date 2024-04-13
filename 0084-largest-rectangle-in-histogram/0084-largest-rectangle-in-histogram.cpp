class Solution {
private:
    vector<int> NextSmaller(vector<int>& heights){
        stack<int>st;
        st.push(-1);
        int n=heights.size();
        vector<int>ans(n);
       
        for(int i=n-1;i>=0;i--){
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()]>=curr ){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }

        vector<int> PrevSmaller(vector<int>& heights){
        stack<int>st;
        st.push(-1);
        int n=heights.size();
        vector<int>ans(n);
        
        for(int i=0;i<n;i++){
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()]>=curr ){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        // next smaller element
        vector<int>next=NextSmaller( heights);
        // previous smaller element
        vector<int>prev=PrevSmaller( heights);
        
         int maxArea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            // this means there is no any next smaller element
            if(next[i]==-1){ next[i]=heights.size();}
            int area=(next[i]-prev[i]-1)*heights[i];
             maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};