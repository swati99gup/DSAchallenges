class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;
        int n = nums.size();

        vector<array<bitset<MAXX>, 3>> suf(n + 1);

    
        suf[n][0].set(0);

        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1];

            int a = nums[i];
            suf[i][1].set(a);

            suf[i][2].set(0);

            for (int x = 0; x < MAXX; x++) {
                if (suf[i + 1][0][x])
                    suf[i][1].set(x ^ a);
            }

            for (int x = 0; x < MAXX; x++) {
                if (suf[i + 1][1][x])
                    suf[i][2].set(x ^ a);
            }
        }

        bitset<MAXX> ans;

        for (int i = 0; i < n; i++) {
            for (int x = 0; x < MAXX; x++) {
                if (suf[i][2][x])
                    ans.set(x ^ nums[i]);
            }
        }

        return ans.count();
    }
};