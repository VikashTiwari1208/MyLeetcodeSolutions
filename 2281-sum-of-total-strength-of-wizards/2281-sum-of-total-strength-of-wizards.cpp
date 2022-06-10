class Solution {
public:
    int totalStrength(vector<int>& v) {
      int MOD = 1000000007;
     int N = v.size();
    
    vector<int> prefix(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefix[i + 1] = (prefix[i] + v[i])%MOD;
    }
    
    vector<long long> prefix_sum(N + 2, 0);
    for (int i = 0; i <= N; ++i) {
        prefix_sum[i + 1] = (prefix_sum[i] + prefix[i])%MOD;
    }
    vector<int> left(N, -1);
    
    stack<int>s;
    for (int i = 0; i < N; ++i) {
        while (!s.empty() && v[s.top()] >=v[i]) {
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    
    
    vector<int> right(N, N);
    while(s.empty()==false)
    {
        s.pop();
    }
    for (int i = N - 1; i >= 0; --i) {
        while (!s.empty() && v[s.top()] > v[i]) {
            s.pop();
        }
        right[i] = s.empty() ? N : s.top();
        s.push(i);
    }
    
    long long res = 0;
    for (int i = 0; i < N; ++i) {
        res += ((prefix_sum[right[i] + 1] - prefix_sum[i + 1]) * (i - left[i]) % MOD + MOD  - 
               (prefix_sum[i + 1] - prefix_sum[left[i] + 1]) * (right[i] - i) % MOD) % MOD * v[i] % MOD;
        res %= MOD;
    }
    return (int) res;
    }
};