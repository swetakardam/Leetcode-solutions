class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {

vector<int> ans;

       int n = matrix.size();
       int m = matrix[0].size();

       for(int i = 0 ; i < n ;i++) {


        int rowMin = matrix[i][0];
        int col = 0 ;

        for(int j = 1 ; j <m ; j++){
            if(matrix[i][j]<rowMin){
           rowMin = matrix[i][j];
           col= j;
    
            }
        }

        bool lucky =true;

        for(int k =0 ; k<n;k++){
            if(matrix[k][col]>rowMin){
                lucky = false;
                break;
            }
        }
        if(lucky){
            ans.push_back(rowMin);
        }

       }
       return ans;
    }
};