class Solution {
    typedef long long ll;
    ll solve(int ri, int fi, vector<int>&r, vector<int>&p, vector<vector<ll>>&dp){
        if(ri >= r.size())return 0;
        
        if(fi>=p.size())return 1e12;

        if(dp[ri][fi]!=-1)return dp[ri][fi];

        ll take = abs(r[ri] - p[fi]) + solve(ri+1, fi+1, r, p, dp);
        ll skip = solve(ri, fi+1, r, p, dp);

        return dp[ri][fi] = min(take, skip);
    }

public:
    long long minimumTotalDistance(vector<int>& r, vector<vector<int>>& f) {
        sort(r.begin(), r.end());
        sort(f.begin(), f.end());
        
        vector<int>positions;
        for(int i=0; i<f.size(); i++){
            int lim = f[i][1];
            int pos = f[i][0];

            for(int j=0; j<lim; j++){
                positions.push_back(pos);
            }
        }
        vector<vector<ll>>dp(r.size()+1, vector<ll>(positions.size()+1, -1));

        return solve(0, 0, r, positions, dp);
    }
};