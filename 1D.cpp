//#include<iostream> //for input output
//#include<ctime>  //for time
//#include<cstdlib> //for rand
//using namespace std; //standard namespace
//
//void display(int* a, int n) {
//	cout << endl;
//	cout << "Printing values..." << endl;
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
//int* insert(int* a, int n) {
//	
//	cout << "Entering values" << endl;
//	
//	for (int i = 0; i < n; i++) {
//		a[i] = rand() % 100;
//	}
//	cout << endl;
//	cout << "Values added successfully!" << endl;
//	return a;
//}
//
//int main() {
//
//	srand(time(0)); //seeding time to initialize rand
//
//	int size;  //size of array
//	cout << "Enter the size?" << endl;
//	cin >> size;
//
//	int* arr = new int[size]; //allocating memory on heap 
//	arr = insert(arr, size);    //inserting values
//	
//	display(arr, size);	  //displaying values
//
//	delete[]arr;  //delete memory on heap
//
//	return 0;
//}