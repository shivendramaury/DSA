class Solution {
public:
    int n;
    int MOD = 1e9+7;
    vector<vector<pair<int, int>>> dp;
    vector<vector<bool>> visited;

    int getIntFromChar(char ch){
        return ch != 'S' ? ch- '0' : 0;
    }
    bool isValid(int i, int j, vector<string> &board){
        return (i>=0 && i<n && j>=0 && j<n && board[i][j] != 'X');
    }
    pair<int, int> solve(int i, int j, vector<string>& board){
        if(board[i][j] == 'E'){
            return {0, 1};
        }
        if(board[i][j] == 'X'){
            return {0, 0};
        }
        if(visited[i][j]){
            return dp[i][j];
        }
        visited[i][j] = true;
        int upScore=0, upPaths =0;
        int leftScore=0, leftPaths=0;
        int diagScore=0, diagPaths=0;
        char ch = board[i][j];

        if(isValid(i-1, j, board)){ // up
            auto [score, paths] = solve(i-1, j, board);
            upScore = score;
            upPaths = paths;
            if(upPaths > 0){
                upScore+= getIntFromChar(ch);
            }
        }

        if(isValid(i, j-1, board)){ // Left
            auto [score, paths] = solve(i, j-1, board);
            leftScore = score;
            leftPaths = paths;
            if(leftPaths > 0){
                leftScore += getIntFromChar(ch);
            }
        }

        if(isValid(i-1, j-1, board)) { // Dia
            auto [score, paths] = solve(i-1, j-1, board);
            diagScore = score;
            diagPaths = paths;

            if(diagPaths > 0){
                diagScore += getIntFromChar(ch);
            }
        }

        // find the best
        int bestScore = max({upScore, leftScore, diagScore});
        int bestPaths = 0;
        
        if(upScore == bestScore) {
            bestPaths = (bestPaths + upPaths) % MOD;
        }
        if(leftScore == bestScore){
            bestPaths = (bestPaths + leftPaths) % MOD;
        }
        if(diagScore == bestScore){
            bestPaths = (bestPaths + diagPaths) % MOD;
        }
        return dp[i][j] = {bestScore, bestPaths%MOD};
    }
    vector<int> pathsWithMaxScore(vector<string>& board) {
        n=board.size();
        dp.resize(n, vector<pair<int,int>>(n));
        visited.resize(n, vector<bool>(n, false));
        auto result = solve(n-1, n-1, board);
        return {result.first, result.second};
    }
};