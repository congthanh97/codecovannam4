#include<iostream>

using namespace std;

void nhap(int arr[], int &n) {	
	cout << "Nhap so phan tu cua mang n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
 		cout << "Phan tu arr["<<i<<"]" << " = ";
 		cin >> arr[i];
 	} 
 }

void bubblesort(int arr[], int n) {
 	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// swap
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}




void inkq(int arr[], int &n) { 
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

int main () {
	int arr[100], n;
  	nhap(arr, n);
  	cout << "=< Mang ban dau la: ";
  	inkq(arr, n);
	
  	bubblesort(arr, n);
  	cout<<"=> Mang khi sap xep la: ";
  	inkq(arr, n);
  	return 0;
} 