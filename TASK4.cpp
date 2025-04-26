//#include <iostream>
//using namespace std;
//
//class StudentList {
//private:
//	int studentIDs[6]; 
//	int size;
//
//public:
//	//  Parmerized Constructor 
//	StudentList(int ids[], int n) {
//		size = n;
//		for (int i = 0; i < size; i++) {
//			studentIDs[i] = ids[i];
//		}
//	}
//
//	// Function to find the first occurrence 
//	int findStudent(int searchID) {
//		for (int i = 0; i < size; i++) {
//			if (studentIDs[i] == searchID) {
//				return i; 
//			}
//		}
//		return -1; // Return -1 if not found
//	}
//
//	// Function to display all student IDs
//	void showList() {
//		cout << "Initial Student IDs: ";
//		for (int i = 0; i < size; i++) {
//			cout << studentIDs[i] << " ";
//		}
//		cout << endl;
//	}
//};
//
//int main() {
//	int ids[] = { 101, 102, 103, 104, 102, 105 };
//	int size = 6;
//
//	
//	StudentList myList(ids, size);
//
//	
//	myList.showList();
//
//	// Input ID to search
//	int searchID;
//	cout << "Enter the Student ID to search for: ";
//	cin >> searchID;
//
//	
//	int position = myList.findStudent(searchID);
//
//	// Display result
//	if (position != -1) {
//		cout << "Student ID " << searchID << " found at position: " << position << endl;
//	}
//	else {
//		cout << "Student ID " << searchID << " not found." << endl;
//	}
//	system("pause");
//	return 0;
//}
