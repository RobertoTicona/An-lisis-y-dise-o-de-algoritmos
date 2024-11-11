//Ejercicio pr�ctico

#include <iostream>
#include <stdlib.h>

using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}

int main() {
	int arr[] = {34, 12, 25, 9, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	system("pause");
	return 0;	
}