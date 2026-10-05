class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        vector<vector<int>> b = a;

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                if(a[i][j] == 0){
                    int row = i, column = j;
                    for(int k=0;k<m; k++){
                        b[row][k] = 0;
                    }
                    for(int k=0; k<n; k++) b[k][column] = 0;
                }
            }
        }
        a = b;
    }
};
