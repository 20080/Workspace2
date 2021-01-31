vector<int> sortedSquares(vector<int>& arr) {

    int n = arr.size();
    vector<int> squares(n);
    int i = 0, j = n - 1, k = n - 1;
    while (i <= j) {
        int square1 = arr[i] * arr[i];
        int square2 = arr[j] * arr[j];
        if (square1 < square2) {
            squares[k--] = square2;
            --j;
        } else {
            squares[k--] = square1;
            ++i;
        }
    }
    return squares;
}

//given already sorted array of negitive to non negitive integers sort the sq. version of that
