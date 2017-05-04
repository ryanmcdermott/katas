int partition(int arr[], int left, int right)
{
    int i = left;
    int j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i <= j)
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    return i;
}

void quicksort(int arr[], int left, int right)
{
    int p = partition(arr, left, right);
    if (left < p - 1)
    {
        quicksort(arr, left, p - 1);
    }
    if (p < right)
    {
        quicksort(arr, p, right);
    }
}