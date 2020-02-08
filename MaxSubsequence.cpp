#include <iostream>
#include <vector>

int main() {
    std::vector<int> A = {2, 11, -9, 3, 4, -6, -7, 7, -3, 5, 6, -2};
    int n = A.size();
    if (n == 0)
        return A[0];
    int mSum = A[0];
    int tSum = mSum;
    int index = 0;
    for (int i = 2; i < n; i++) {
        tSum += A[i];
        if (tSum > mSum) {
            mSum = tSum;
            index = i;
        }
        else if (tSum < 0)
            tSum = 0;
    }
    int index2 = index;
    while (mSum > 0) {
        mSum -= A[index--];
    }
    for (int i = index + 1; i <= index2; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}
