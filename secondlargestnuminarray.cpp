#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    if (n < 2) {
        cout << "Array must have at least 2 elements to find the second largest number." << endl;
        return 1;
    }
    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no distinct second largest number in the array." << endl;
    } else {
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}
