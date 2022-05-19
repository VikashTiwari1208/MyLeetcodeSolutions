         class Solution {
                    Integer[][] dp;
                    public int stoneGameVIII(int[] stones) {
                        int n = stones.length;
                        for(int i = 1; i < n; i++)
                            stones[i] += stones[i - 1];
                        dp = new Integer[n][2];
                        return recur(1, 0, stones);
                    }
                    
                    int recur(int idx, int turn, int[] prefix) {
                        // checking if we have already computed the result for current subproblem
                        // if yes, we will return the answer directly without further computations
                        // if no, we will compute the answer and store it as given below
                        if(dp[idx][turn] != null)
                            return dp[idx][turn];

                        int curScore = prefix[idx];

                        if(idx == prefix.length - 1) {
                            return turn == 0 ? curScore : -curScore;
                        }

                        if(turn % 2 == 0) {
                            // storing the result for current subproblem in DP array
                            dp[idx][turn] = Math.max(recur(idx + 1, turn, prefix), curScore + recur(idx + 1, turn ^ 1, prefix));
                        } else {
                            // storing the result for current subproblem in DP array
                            dp[idx][turn] = Math.min(recur(idx + 1, turn, prefix), -curScore + recur(idx + 1, turn ^ 1, prefix));
                        }

                        return dp[idx][turn];
                    }
                };