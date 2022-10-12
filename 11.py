k, n = map(int, input().split())
dp = [1, 1] + (n - 1) * [0]
for i in range(2, k+1):
    dp[i] = dp[i - 1] << 1
for i in range(k + 1, n + 1):
    dp[i] = (dp[i - 1] << 1) - dp[i - k - 1]
print(cnt[n])
