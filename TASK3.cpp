//#include<iostream>
//using namespace std;
//class Delete{
//private:
//	int array[10];
//	int size;
//public:
//	//parameterized
//	Delete(int values[], int n){
//		size = n;
//		for (int i = 0; i < size; i++){
//			array[i] = values[i];
//
//		}
//
//
//	}
//	//function to delete value
//	void deletenum( int value){
//		int newsize = 0;
//		for (int i = 0; i < size; i++){
//			if (array[i] != value){
//				array[newsize] = array[i];
//				newsize++;
//			}
//
//		}
//		size = newsize;
//		cout << "ALL OCCURRENCES ARE DELETEED" << endl;
//	}
//	//function to display
//	void display(){
//		for (int i = 0; i < size; i++){
//			cout << array[i] << " ";
//		}
//	}
//};
//int main(){
//	int initialarray[] = { 1,1,2,3,1,2,4,2,1,6};
//	int size = 10;
//	Delete MyArray(initialarray, size);
//	cout << "The current Array: ";
//	MyArray.display();
//	int element;
//	cout << endl;
//	cout << "Enter Deleting elements: ";
//	cin >> element;
//	MyArray.deletenum(element);
//	MyArray.display();
//
//	system("pause");
//	return 0;
//
//}