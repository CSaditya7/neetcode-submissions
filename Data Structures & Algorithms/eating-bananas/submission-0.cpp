class Solution {
public:
      long long findMax(vector<int>& piles) {
        long long maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, (long long)piles[i]);
        }
        return maxi;
    }
    long long totalhours(vector<int>& piles, long long hourly) {
        long long totalH = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalH += (piles[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1, high = findMax(piles);
        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long totalH = totalhours(piles, mid);

            if (totalH <= h) {
                high = mid;
            } else {
                low = mid+1 ;
            }
        }
        return low;
    }
};
