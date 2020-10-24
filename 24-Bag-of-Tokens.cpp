class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(), tokens.end());
        int maxpts = 0;
        int curr_pts = 0;
        int i =0, j=tokens.size() -1;
        while(i<=j){
            if(P>=tokens[i]){
                curr_pts++;
                P-=tokens[i++];
                maxpts = max(maxpts,curr_pts);
            }
            else if(curr_pts>0){
                curr_pts--;
                 P+=tokens[j--];
            }
            else
                return maxpts;
        }
        return maxpts;
    }
};