//#include<iostream>//for input output
//#include<ctime>   //for time
//#include<cstdlib> //for rand
//#include<iomanip> //for setw
//
//using namespace std;
//
//void display(int** A, int x, int y) {
//	cout << endl;
//	cout << "Printing values as a table:" << endl;
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			cout << setw(5) << A[i][j] << " "; // Set a width of 5 for each element
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//
//void insert(int** A, int x, int y) {
//
//	cout << " Entering values for 2D array." << endl;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			
//			A[i][j] = rand() % 100;
//			
//		}
//	}
//	
//
//	cout << "Values added successfully" << endl;
//}
//
//int main() {
//
//	srand(time(0));
//
//	int x, y;
//	cout << "Enter the x and y for 2D array?" << endl;
//	cin >> x >> y;
//
//	int** arr = new int*[x]; //dynamically allocating memory on heap
//	
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int[y];
//	}
// 
//	insert(arr, x, y);
//	display(arr ,x , y);
//
//	for (int i = 0; i < x; i++) {
//		delete[] arr[i];  //delete each row
//	}
// 
//	delete[]arr;  //delete array of pointer
//
//	return 0;
//}