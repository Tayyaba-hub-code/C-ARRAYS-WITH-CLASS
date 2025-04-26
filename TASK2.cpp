//#include <iostream>
//using namespace std;
//
//class UpdatingArray {
//private:
//	int array[5];
//	int size;
//
//public:
//	// Parameterized constructor
//	UpdatingArray(int arr[], int n) {
//		size = n;
//		for (int i = 0; i < size; i++) {
//			array[i] = arr[i];
//		}
//	}
//
//	// Function to update marks
//	void updateMarks(int index, int newMarks) {
//		if (index < 0 || index >= size) {
//			cout << "Invalid Index!" << endl;
//			return;
//		}
//		cout << "Updating marks at index " << index << " from " << array[index] << " to " << newMarks << "." << endl;
//		array[index] = newMarks;
//	}
//
//	// Function to display marks
//	void display() const {
//		for (int i = 0; i < size; i++) {
//			cout << array[i] << " ";
//		}
//		cout << endl;
//	}
//};
//
//int main() {
//	int initialarray[] = { 40, 50, 33, 40, 55 };
//	int size = 5;
//
//	
//	UpdatingArray myArray(initialarray, size);
//
//	cout << "Marks in Array before updation: ";
//	myArray.display();
//
//	int index, marks;
//	cout << "Enter index of which you want to update marks: ";
//	cin >> index;
//	cout << "Enter new marks: ";
//	cin >> marks;
//
//	// Update marks
//	myArray.updateMarks(index, marks);
//
//	cout << "ARRAY AFTER UPDATING MARKS: ";
//	myArray.display();
//	system("pause");
//	return 0;
//}