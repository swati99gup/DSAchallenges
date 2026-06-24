class Solution {
public:
    static const long long MOD = 1e9 + 7;

    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;

                long long a = A[i][k];

                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;

                    C[i][j] = (C[i][j] + a * B[k][j]) % MOD;
                }
            }
        }

        return C;
    }

    Matrix power(Matrix base, long long exp) {
        int n = base.size();

        Matrix res(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) res[i][i] = 1;

        while (exp) {
            if (exp & 1) res = multiply(res, base);

            base = multiply(base, base);
            exp >>= 1;
        }

        return res;
    }

    vector<long long> apply(const Matrix& M,
                            const vector<long long>& v) {
        int n = M.size();
        vector<long long> res(n, 0);

        for (int i = 0; i < n; i++) {
            long long cur = 0;

            for (int j = 0; j < n; j++) {
                cur = (cur + M[i][j] * v[j]) % MOD;
            }

            res[i] = cur;
        }

        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;
        int S = 2 * m;

        Matrix T(S, vector<long long>(S, 0));

        // up[x] <- down[y] , y < x
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < x; y++) {
                T[x][m + y] = 1;
            }
        }

        // down[x] <- up[y] , y > x
        for (int x = 0; x < m; x++) {
            for (int y = x + 1; y < m; y++) {
                T[m + x][y] = 1;
            }
        }

        vector<long long> state2(S, 0);

        for (int v = 1; v <= m; v++) {
            state2[v - 1] = v - 1;      // up[v]
            state2[m + v - 1] = m - v; // down[v]
        }

        Matrix P = power(T, n - 2);

        vector<long long> stateN = apply(P, state2);

        long long ans = 0;
        for (long long x : stateN) {
            ans = (ans + x) % MOD;
        }

        return (int)ans;
    }
};