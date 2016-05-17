#include <iostream>

bool even(int num) {
	return num % 2 == 0;
}

bool odd(int num) {
	return num % 2 != 0;
}

void filter(int *arr, int size, bool(*pred)(int)) {
	for (int i = 0; i < size; i++) {
		if (pred(arr[i])) {
			std::cout << arr[i] << ", ";
		}
	}
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8};
	filter(arr, 8, even); /// Output : 2, 4, 6, 8, 
	std::cout << std::endl;
	filter(arr, 8, odd); /// Output: 1, 3, 5, 7, 
	return 0;
}