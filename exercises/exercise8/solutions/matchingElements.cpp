#include <iostream>

template <typename T>
int matchingElements(T *arr1, int size1, T *arr2, int size2) {
	int count = 0, j;
	for (int i = 0; i < size1; i++) {
		j = 0;
		while (j < size2 && arr1[i] != arr2[j]) {
			j++;
		}
		if (arr1[i] == arr2[j]) {
			count++;
		}
	}
	return count;
}

int main() {
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[] = { 3, 8, 9, 13, 2, 55 };
	std::cout << matchingElements(arr1, 8, arr2, 5) << std::endl;
	char arr3[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	char arr4[] = { 'c', 'z', 'e', 'o', 'p', 'q' };
	std::cout << matchingElements(arr3, 6, arr4, 6);
	/// The following line will give an error: 
	/// std::cout << matchingElements(arr1, 8, arr3, 6);
	/// The reason for this is that arr1 and arr3 are arrays from different types and 
	/// we try to use the same template name for both of them in the function matchingElements
	return 0;
}
