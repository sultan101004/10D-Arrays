//#include<iostream>
//#include<ctime>\
//#include<cstdlib>
//using namespace std;
//
//void display(int******* A, int x, int y, int z, int fourD, int fiveD, int sixD ,int sevenD) {
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
//
//						for (int n = 0; n < sixD; n++)
//						{
//							for (int o = 0; o < sevenD; o++) {
//								cout << A[i][j][k][l][m][n][o] << " ";
//								count++;
//							}
//							cout << endl;
//						}
//						cout << endl;
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
//void insert(int******* A, int x, int y, int z, int fourD, int fiveD, int sixD, int sevenD) {
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
//						for (int n = 0; n < sixD; n++)
//						{
//							for (int o = 0; o < sevenD; o++) {
//								A[i][j][k][l][m][n][o] = rand() % 100;
//							}
//						}
//					}
//				}
//				//cout << endl;
//			}
//			//	cout << endl;
//		}
//		//	cout << endl;
//	}
//
//	cout << "Values added sucessfully" << endl;
//}
//
//int main() {
//
//	srand(time(0));
//
//	int x, y, z, a, b, c, d;
//	cout << "Enter the x, y, z, 4D, 5D, 6D, and 7D?" << endl;
//	cin >> x >> y >> z >> a >> b >> c >> d;
//
//	int******* arr = new int****** [x]; //dynamically alloting memory on heap
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int***** [y];
//
//		for (int j = 0; j < y; j++) {
//			arr[i][j] = new int**** [z];
//
//			for (int k = 0; k < z; k++) {
//				arr[i][j][k] = new int*** [a];
//
//				for (int l = 0; l < a; l++) {
//					arr[i][j][k][l] = new int** [b];
//
//					for (int m = 0; m < b; m++) {
//						arr[i][j][k][l][m] = new int*[c];
//
//						for (int n = 0; n < c; n++) {
//							arr[i][j][k][l][m][n] = new int[d];
//						}
//					}
//				}
//			}
//		}
//	}
//	insert(arr, x, y, z, a, b, c, d);
//	display(arr, x, y, z, a, b, c, d);
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++) {
//				for (int l = 0; l < a; l++) {
//					for (int m = 0; m < b; m++) {
//						for (int n = 0; n < c; n++) {
//							delete[] arr[i][j][k][l][m][n];
//						}
//						delete[] arr[i][j][k][l][m];
//					}delete[] arr[i][j][k][l]; //delete each row of row of row / 4D pointer
//
//				}
//				delete[] arr[i][j][k]; //delete each row of row of row / 3D pointer
//			}
//			delete[] arr[i][j]; //delete each row of row / 2D pointer
//		}w
//		delete[] arr[i];  //delete each row / 1D pointer
//	}
//	delete[]arr;  //delete array of pointer
//
//	return 0;
//}