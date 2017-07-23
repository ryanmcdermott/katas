#include <random>

void swap(int arr[], int x, int y) {
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

int random_number_from_range(int min, int max) {
  std::random_device rd;
  std::mt19937 eng(rd());
  std::uniform_int_distribution<int> distr(min, max);

  return distr(eng);
}

void shuffle(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int num = random_number_from_range(i, n);
    swap(arr, i, num);
  }
}
