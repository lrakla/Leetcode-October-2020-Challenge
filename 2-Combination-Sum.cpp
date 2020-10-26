class Solution {
void findcombos(vector<int>& c, int sum,vector<vector<int>>& res,vector<int>& r,int i){
    if(sum<0)
        return;
    if(sum==0){
       res.push_back(r);
        return;
    }
    while(i<c.size() && sum - c[i]>=0){
        r.push_back(c[i]);
        findcombos(c,sum-c[i],res,r,i);
        i++;
        r.pop_back();
    }
}
public:
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<int> r; 
        vector<vector<int>> res;
        findcombos(c,t,res,r,0);
        return res;
    }
};