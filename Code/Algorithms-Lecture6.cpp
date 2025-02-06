

// Brute Force Approach (O(n³)


#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

void maxSubarrayBruteForce(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible integer
    vector<int> maxSubarray;

    // Brute force approach
    for (int i = 0; i < n; i++) { // Start index
        for (int j = i; j < n; j++) { // End index
            int currentSum = 0;

            // Compute sum of subarray arr[i..j]
            for (int k = i; k <= j; k++) {
                currentSum += arr[k];
            }

            // Update maxSum and store the subarray
            if (currentSum > maxSum) {
                maxSum = currentSum;
                maxSubarray = vector<int>(arr.begin() + i, arr.begin() + j + 1);
            }
        }
    }

    // Print the result
    cout << "Maximum Sum Subarray: ";
    for (int num : maxSubarray) {
        cout << num <<s " ";
    }
    cout << "\nMaximum Sum: " << maxSum << endl;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubarrayBruteForce(arr);
    return 0;
}


// Improved Brute Force Approach 


#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

void maxSubarrayImprovedBruteForce(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN;
    vector<int> maxSubarray;

    // Improved brute force approach
    for (int i = 0; i < n; i++) { // Start index
        int currentSum = 0; // Running sum

        for (int j = i; j < n; j++) { // End index
            currentSum += arr[j]; // Extend subarray by adding arr[j]

            // Update maxSum and store the subarray
            if (currentSum > maxSum) {
                maxSum = currentSum;
                maxSubarray = vector<int>(arr.begin() + i, arr.begin() + j + 1);
            }
        }
    }

    // Print the result
    cout << "Maximum Sum Subarray: ";
    for (int num : maxSubarray) {
        cout << num << " ";
    }
    cout << "\nMaximum Sum: " << maxSum << endl;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubarrayImprovedBruteForce(arr);
    return 0;
}



// Kadane

#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

void kadaneMaxSubarray(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN, currentSum = 0;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        // Update maxSum and store the indices
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        // Reset currentSum if it goes negative
        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1; // Start a new subarray
        }
    }

    // Print the result
    cout << "Maximum Sum Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nMaximum Sum: " << maxSum << endl;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    kadaneMaxSubarray(arr);
    return 0;
}