class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circleSandwich = 0;
        int squareSandwich = 0;
        
        for(int i=0;i<students.size();i++){
            if(students[i] == 0){
                circleSandwich++;
            }else{
                squareSandwich++;
            }
        }
        
        for(int i=0;i<sandwiches.size();i++){
            
            if(sandwiches[i] == 0 && circleSandwich == 0){
                return squareSandwich;
            }
            if(sandwiches[i] == 1 && squareSandwich == 0){
                return circleSandwich;
            }
            
            if(sandwiches[i] == 0){
                circleSandwich--;
            }else{
                squareSandwich--;
            }
        }
        return 0;
    }
};