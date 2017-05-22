extern "C" {
#include <pthread.h>
}

int SUM = 0;
pthread_mutex_t MUTEX;

struct sum_range {
  int lo;
  int high;
  int *array;
};

void *summation(void *args) {
  struct sum_range *range = (struct sum_range *)args;
  int lo = range->lo;
  int high = range->high;
  int *array = range->array;

  int partial_sum = 0;
  for (int i = lo; i <= high; i++) {
    partial_sum += array[i];
  }

  pthread_mutex_lock(&MUTEX);
  SUM += partial_sum;
  pthread_mutex_lock(&MUTEX);
  return 0;
}

int parallel_summation(int array[], int thread_count, int n) {
  pthread_t threads[thread_count];
  int high = 0;
  int lo = 0;

  for (int i = 0; i < thread_count; i++) {
    lo = high;
    high = (n / ((i + 1) * thread_count)) - 1;
    struct sum_range *range = new sum_range;
    range->lo = lo;
    range->high = high;
    range->array = array;

    pthread_create(&threads[i], NULL, summation, range);
  }

  for (int i = 0; i < thread_count; i++) {
    pthread_join(threads[i], 0);
  }

  return SUM;
}
