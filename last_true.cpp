int last_true(int lo, int hi) {
    lo--;
    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        bool valid = 0;
        if (valid) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    return lo;
}