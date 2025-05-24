//#include<iostream>//for input output
//#include<ctime>   //for time
//#include<cstdlib> //for rand
//#include<iomanip> //for setw
//
//using namespace std; //standard namespace
//
//void display(int*** A, int x, int y, int z) {
//	cout << endl;
//	cout << "Printing values" << endl;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for(int k = 0; k < z; k++)
//			{
//				cout << setw(5) << A[i][j][k] << " ";
//			}
//			cout << "-" << endl;
//		}
//		cout << "#" << endl;
//	}
////	cout << endl;
//}
//
//void insert(int*** A, int x, int y, int z) {
//
//	cout << "Entering values" << endl;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++)
//			{
//				A[i][j][k] = rand() % 100;
//			}
//			
//		}
//	}
//	cout << endl;
//
//
//	cout << "Values added successfully" << endl;
//}
//
//int main() {
//
//	srand(time(0));
//
//	int x, y, z;
//	cout << "Enter the x, y and z?" << endl;
//	cin >> x >> y >> z;
//
//	int*** arr = new int** [x]; //dynamically allocating memory on heap
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int* [y];
//
//		for (int j = 0; j < y; j++) {
//			arr[i][j] = new int[z];
//		}
//	}
//	insert(arr, x, y, z);
//	display(arr, x, y, z);
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			delete[] arr[i][j]; //delete each row of row
//		}
//		delete[] arr[i];  //delete each row
//	}
//	delete[]arr;  //delete array of pointer
//
//	return 0;
//}