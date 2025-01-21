// Problem Link
// https://leetcode.com/problems/grid-game/description/


// Source Code

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long ts = 0;
        long long bs = 0;

        // for(int i = 0;i < grid.size();i++){
        //     ts += grid[0][i];
        // }

        ts = accumulate(begin(grid[0]), end(grid[0]), 0LL);

        long long res = LLONG_MAX;

        for(int i = 0;i < grid[0].size();i++){
            ts -= grid[0][i];
            res = min(res, max(ts, bs));
            cout << res <<endl;
            bs += grid[1][i];
        }

        return res;


    }
};