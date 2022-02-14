#ifndef MERGE_SORT_H
#define MERGE_SORT_H

void merge(int arr[], int start, int middle, int end)
{

    int n_left = middle - start + 1;
    int n_right = end - middle;

    int arr_left[n_left], arr_right[n_right];

    for (int i = 0; i < n_left; i++)
        arr_left[i] = arr[start + i];
    for (int j = 0; j < n_right; j++)
        arr_right[j] = arr[middle + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = start;

    while (i < n_left && j < n_right)
    {
        if (arr_left[i] <= arr_right[j])
        {
            arr[k] = arr_left[i];
            i++;
        }
        else
        {
            arr[k] = arr_right[j];
            j++;
        }
        k++;
    }

    while (i < n_left)
    {
        arr[k] = arr_left[i];
        i++;
        k++;
    }

    while (j < n_right)
    {
        arr[k] = arr_right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int middle = start + (end - start) / 2;

        merge_sort(arr, start, middle);
        merge_sort(arr, middle + 1, end);
        merge(arr, start, middle, end);
    }
}

#endif
