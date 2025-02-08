#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array needs at least 2 elements to find second smallest and second largest." << endl;
        return 0;
    }

    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] > smallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondSmallest != INT_MAX) {
        cout << "The second smallest number is " << secondSmallest << endl;
    } else {
        cout << "There is no second smallest number." << endl;
    }

    if (secondLargest != INT_MIN) {
        cout << "The second largest number is " << secondLargest << endl;
    } else {
        cout << "There is no second largest number." << endl;
    }

    delete[] arr;
    return 0;
}
3