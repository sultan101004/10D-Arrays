//#include<iostream>	//for input output
//#include<ctime>     //for time
//#include<cstdlib>   //for rand
//#include<iomanip>   //for setw
//
//using namespace std; //standard namespace
//
//void display(int***** A, int x, int y, int z, int fourD, int fiveD) {
//	int count = 0;
//	cout << endl;
//	cout << "Printing values" << endl;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++)
//			{
//				for (int l = 0; l < fourD; l++)
//				{
//					for (int m = 0; m < fiveD; m++) {
//						cout << setw(5) << A[i][j][k][l][m] << " ";
//						count++;
//					}
//					cout << endl;
//				}
//				cout << endl;
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	cout << "Count = " << count << endl;
//	cout << endl;
//}
//
//void insert(int***** A, int x, int y, int z, int fourD, int fiveD) {
//
//	cout << " Entering values" << endl;
//	for (int i = 0; i < x; i++) {
//
//		for (int j = 0; j < y; j++) {
//
//			for (int k = 0; k < z; k++)
//			{
//				for (int l = 0; l < fourD; l++) {
//					
//					for (int m = 0; m < fiveD; m++) {
//		
//						A[i][j][k][l][m] = rand() % 100;
//					}
//				}
//				//cout << endl;
//			}
//			//	cout << endl;
//		}
//		//	cout << endl;
//	}
//
//	cout << "Values added successfully" << endl;
//}
//
//int main() {
//
//	srand(time(0));
//
//	int x, y, z, a, b;
//	cout << "Enter the x, y, z, 4D, and 5D?" << endl;
//	cin >> x >> y >> z >> a >> b;
//
//	int***** arr = new int**** [x]; //dynamically allocating memory on heap
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int*** [y];
//
//		for (int j = 0; j < y; j++) {
//			arr[i][j] = new int** [z];
//
//			for (int k = 0; k < z; k++) {
//				arr[i][j][k] = new int*[a];
//
//				for (int l = 0; l < a; l++) {
//					arr[i][j][k][l] = new int[b];
//				}
//			}
//		}
//	}
//	insert(arr, x, y, z, a, b);
//	display(arr, x, y, z, a ,b);
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++) {
//				for (int l = 0; l < a; l++) {
//					delete[] arr[i][j][k][l]; //delete each row of row of row / 4D pointer
//				}
//				delete [] arr[i][j][k]; //delete each row of row of row / 3D pointer
//			}
//			delete[] arr[i][j]; //delete each row of row / 2D pointer
//		}
//		delete[] arr[i];  //delete each row / 1D pointer
//	}
//	delete[]arr;  //delete array of pointer
//
//	return 0;
//}