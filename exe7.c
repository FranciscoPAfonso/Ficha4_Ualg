#include <stdio.h>

#define MAX 5000000
#define UNKNOWN -2
#define IMPOSSIBLE -1

int memo[MAX + 1];

int solve(long long m) {
    if (m == 42) return 0;
    if (m < 0 || m > MAX) return IMPOSSIBLE;
    if (memo[m] != UNKNOWN) return memo[m];

    int best = IMPOSSIBLE;

    if (m % 2 == 0) {
        int r = solve(m / 2);
        if (r != IMPOSSIBLE) best = (best == IMPOSSIBLE || r + 1 < best) ? r + 1 : best;
    }

    if (m % 3 == 0 || m % 4 == 0) {
        int a = (int)((m / 10) % 10);
        int b = (int)(m % 10);
        int prod = a * b;
        long long nxt = m - prod;
        if (prod > 0 && nxt != m) {
            int r = solve(nxt);
            if (r != IMPOSSIBLE) best = (best == IMPOSSIBLE || r + 1 < best) ? r + 1 : best;
        }
    }

    if (m % 5 == 0) {
        int r = solve(m - 42);
        if (r != IMPOSSIBLE) best = (best == IMPOSSIBLE || r + 1 < best) ? r + 1 : best;
    }

    memo[m] = best;
    return best;
}

int main() {
    long long N;
    if (scanf("%lld", &N) != 1) { printf("NO\n"); return 0; }
    if (N < 0 || N > MAX) { printf("NO\n"); return 0; }
    for (int i = 0; i <= MAX; ++i) memo[i] = UNKNOWN;
    int ans = solve(N);
    if (ans == IMPOSSIBLE) printf("BAD LUCK\n");
    else printf("%d\n", ans);
    return 0;
}

