class Solution {
public:
   
    int crossProduct(vector<int> &x ,vector<int> &y, vector<int> &z){

        int a= y[0] - x[0];
        int b= y[1] - x[1];
        int c= z[0] - y[0];
        int d= z[1] - y[1];
        return a*d - b*c;
    }

    vector<vector<int>> convexHULL(vector<vector<int>> & trees){
        int n= trees.size();
        vector<vector<int>>st;
        int k = 0;
        for(int i=0;i<n;i++){
            while(k>=2 and crossProduct(st[k-2], st[k-1], trees[i])<0){
                st.pop_back();
                k--;
            }
            st.push_back(trees[i]);
            k++;
        }
        return st;
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        set<vector<int>>st;
        sort(trees.begin(),trees.end());

        vector<vector<int>> bottomHULL = convexHULL(trees);
        reverse(trees.begin(),trees.end());
        vector<vector<int>> topHULL = convexHULL(trees);

        for(auto &it: bottomHULL)st.insert(it);        
        for(auto &it: topHULL)st.insert(it);        

        vector<vector<int>>res(st.begin(),st.end());

        return res;
    }
};