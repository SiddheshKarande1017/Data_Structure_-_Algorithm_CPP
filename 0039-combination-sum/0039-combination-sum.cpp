class Solution {
public:
    vector<vector<int>> a;
    void ans(vector<int> temp, int i, int sum,vector<int>& candidates,int target)
    {
        if(i>=candidates.size())
        {
            if(sum==target)
            {
                a.push_back(temp);
                return;
            }
            return;
        }
        if(target>sum){
        temp.push_back(candidates[i]);
        ans(temp,i,sum+candidates[i],candidates,target);
        temp.pop_back();
        }
        ans(temp,i+1,sum,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans({},0,0,candidates,target);
        return a;
        
    }
};