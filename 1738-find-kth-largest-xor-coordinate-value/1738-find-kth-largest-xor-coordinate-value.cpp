class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int a=0,b=0,c=0;
                if(j!=0) a=matrix[i][j-1];
                if(i!=0)b=matrix[i-1][j];
                if(i!=0 && j!=0) c=matrix[i-1][j-1];
                matrix[i][j]=matrix[i][j]^a^b^c;
            }
        }
        vector<int> v;
         for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                v.push_back(matrix[i][j]);
            }
         }
        sort(v.begin(),v.end(),greater<int>());
        return v[k-1];
    }
};