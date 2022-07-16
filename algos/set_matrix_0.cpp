void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int rows = A.size()-1;
    int cols = A[0].size()-1; // col
    bool first_row = false;
    bool first_col = false;

       for(int i=0;i<=cols;i++){
        if(A[0][i] == 0) {
            {
                first_row = true;
                break;
            }
        }
    }
    for(int i=0;i<=rows;i++){
        if(A[i][0] == 0) {
            first_col = true;
            break;
        }
    }
 
    for(int i=rows;i>0;i--){
        for(int j=cols;j>0;j--){
            if(A[i][j] == 0 ){
                A[0][j] = 0;
                A[i][0] = 0;
            }
        }
    }
    for(int i=rows;i>0;i--){
        for(int j=cols;j>0;j--){
            if(A[i][0] == 0 || A[0][j] == 0){
                A[i][j] = 0;
            }
        }
    }
    if(first_col){
        for(int i=0;i<=rows;i++) A[i][0] = 0;
    }
    if(first_row){
        for(int i=0;i<=cols;i++) A[0][i] = 0;
    }
}
// set matrix zero 