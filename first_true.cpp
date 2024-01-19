int first_true(int lo, int hi) {
    hi++;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        bool valid = 0;
        if (valid) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    return lo;
}
