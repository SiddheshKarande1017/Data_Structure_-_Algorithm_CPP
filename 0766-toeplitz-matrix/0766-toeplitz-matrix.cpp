class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
       for(int i=0;i<matrix[0].size();i++)
       {
           int k=matrix[0][i];
           int l=0;
           int m=i;
           while(l<matrix.size() && m<matrix[0].size())
           {
              // cout<<matrix[l][m]<<endl;
               if(matrix[l][m]!=k) return false;
               l++;
               m++;
           }
       }
        for(int i=0;i<matrix.size();i++)
       {
           int k=matrix[i][0];
           int l=0;
           int m=i;
           while(l<matrix[0].size() && m<matrix.size())
           {
               //cout<<matrix[m][l]<<endl;
               if(matrix[m][l]!=k) return false;
               l++;
               m++;
           }
       }
        return true;
    }
};