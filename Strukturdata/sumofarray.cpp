#include <iostream>

 using namespace std;
 
int main() {
    int n; // Number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid number of elements." << std::endl;
        return 1; // Exit with an error code
    }

    int arr[n]; // Declare an array of size n

    // Input the elements from the user
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Display the sum
    std::cout << "Sum of the array elements: " << sum << std::endl;

    return 0; // Exit normally
}