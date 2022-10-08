#include <stdio.h>

int binary_search(int array[], int value, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == value) return mid;
    if (array[mid] < value) low = mid + 1;
    else high = mid - 1;
  }

  return -1;
}

int main(void) {
  int test_array[] = {-3, 40, 75, 16, 7, 28, 9};
  int size = sizeof(test_array) / sizeof(test_array[0]);
  int x = 4;
  int result = binarySearch(test_array, x, 0, size - 1);
  if (result == -1) printf("Value Not found");
  else printf("Value is found at index %d", result);
  return 0;
}
