//#include<iostream> //for input output
//#include<ctime>	   //for time
//#include<cstdlib>  //for rand
//#include<iomanip>  //for setw
//
//using namespace std; //standard namespace
//
//void display(int**** A, int x, int y, int z, int fourD) {
//	cout << endl;
//	cout << "Printing values" << endl;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++)
//			{
//				for (int l = 0; l < fourD; l++)
//				{
//					cout << setw(5) << A[i][j][k][l] << " ";
//				}
//				cout << endl;
//			}
//			cout << endl;
//		}cout << endl;
//	}
//	cout << endl;
//}
//
//void insert(int**** A, int x, int y, int z, int fourD) {
//
//	cout << " Entering values" << endl;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++)
//			{
//				for(int l =0; l < fourD; l++){
//					A[i][j][k][l] = rand() % 100;
//				}
//				//cout << endl;
//			}
//		//	cout << endl;
//		}
//	//	cout << endl;
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
//	int x, y, z, a;
//	cout << "Enter the x, y, z, 4D?" << endl;
//	cin >> x >> y >> z >> a;
//
//	int**** arr = new int*** [x]; //dynamically allocating memory on heap
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int** [y];
//
//		for (int j = 0; j < y; j++) {
//			arr[i][j] = new int*[z];
//
//			for (int k = 0; k < z; k++) {
//				arr[i][j][k] = new int[a];
//			}
//		}
//	}
//
//	insert(arr, x, y, z, a);
//	display(arr, x, y, z, a);
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++) {
//				delete arr[i][j][k]; //delete each row of row of row / 3D pointer
//			}
//			delete[] arr[i][j]; //delete each row of row / 2D pointer
//		}
//		delete[] arr[i];  //delete each row / 1D pointer
//	}
//	delete[]arr;  //delete array of pointer
//
//	return 0;
//}