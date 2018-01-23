#include "./sorted_rotated_array.hpp"
int sorted_rotated_array(int arr[], int low, int high, int key) {
  if (low > high) {
    return -1;
  }

  int mid = (low + high) / 2;

  if (arr[mid] == key) {
    return mid;
  }

  if (arr[low] <= arr[mid]) {
    if (key >= arr[low] && key <= arr[mid]) {
      return sorted_rotated_array(arr, low, mid - 1, key);
    }

    return sorted_rotated_array(arr, mid + 1, high, key);
  } else {
    if (key >= arr[mid] && key <= arr[high]) {
      return sorted_rotated_array(arr, mid + 1, high, key);
    }

    return sorted_rotated_array(arr, low, mid - 1, key);
  }
}
