#include <iostream>
#include <vector>

using namespace std;

// This function merges two specific ranges of the array 'A'
vector<int> Merge(const vector<int>& A, int L1, int R1, int L2, int R2) {
    vector<int> temp;
    // Pre-calculate size to reserve memory
    temp.reserve((R1 - L1 + 1) + (R2 - L2 + 1));

    // While there are elements in both parts
    while (L1 <= R1 && L2 <= R2) {
        if (A[L1] <= A[L2]) {
            temp.push_back(A[L1]);
            L1++;
        } else {
            temp.push_back(A[L2]);
            L2++;
        }
    }

    // If there are leftover elements in the first part
    while (L1 <= R1) {
        temp.push_back(A[L1]);
        L1++;
    }

    // If there are leftover elements in the second part
    while (L2 <= R2) {
        temp.push_back(A[L2]);
        L2++;
    }

    return temp;
}

void IterativeMergeSort(vector<int>& A) {
    int n = A.size();
    int len = 1; // Current size of sub-arrays to be merged

    while (len < n) {
        int i = 0;
        while (i < n) {
            int L1 = i;
            int R1 = i + len - 1;
            int L2 = i + len;
            int R2 = i + 2 * len - 1;

            // If there isn't a second part to merge with, we are done with this pass
            if (L2 >= n) {
                break;
            }

            // If the second part is smaller than the current 'len', adjust R2
            if (R2 >= n) {
                R2 = n - 1;
            }

            // Merge the two parts into a temporary vector
            vector<int> temp = Merge(A, L1, R1, L2, R2);

            // Copy the sorted 'temp' back into the original array 'A'
            for (int j = 0; j < temp.size(); j++) {
                A[L1 + j] = temp[j];
            }

            // Move to the next pair of sub-arrays
            i = i + 2 * len;
        }
        // Double the length for the next pass (1, 2, 4, 8...)
        len = 2 * len;
    }
}

int main() {
    vector<int> arr{5, 7, 8, 77, 89, 45, 67, 100, 78, 95, 46, 35, 24, 15, 21};

    IterativeMergeSort(arr);

    cout << "Sorted array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
