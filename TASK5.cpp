#include <iostream>
using namespace std;

class StudentRecords {
private:
	int rollNumbers[7]; 
	int size; 

public:
	// Paramerized Constructor
	StudentRecords(int rolls[], int s) {
		size = s;
		for (int i = 0; i < size; i++) {
			rollNumbers[i] = rolls[i];
		}
	}

	// Binary search function
	int binarySearch(int target) {
		int left = 0, right = size - 1;
		while (left <= right) {
			int mid = left + (right - left) / 2;
			if (rollNumbers[mid] == target)
				return mid;  // return index
			else if (rollNumbers[mid] < target)
				left = mid + 1;  // Search in the right half
			else
				right = mid - 1; // Search in the left half
		}
		return -1; 
	}

	// Function to search and display result
	void searchRollNumber(int target) {
		int result = binarySearch(target);
		if (result != -1)
			cout << "Roll number " << target << " found at index: " << result << endl;
		else
			cout << "Roll number " << target << " not found in the list." << endl;
	}
};

int main() {
	int rolls[] = { 1001, 1005, 1010, 1012, 1020, 1030, 1045 }; // Sorted roll numbers
	int size = sizeof(rolls) / sizeof(rolls[0]);

	
	StudentRecords records(rolls, size);

	int searchRoll;
	cout << "Enter the roll number to search: ";
	cin >> searchRoll;


	records.searchRollNumber(searchRoll);
	system("pause");
	return 0;
}