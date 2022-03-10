// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0, j = size - 1;
  int ind1 = 0, ind2 = 0;

  if (arr[j] == value) {
    ind1 = j+1;
  }
  if (arr[i] == value) {
    ind2 = i;
  }

  while (i < j) {
    int mid = i + (j - i) / 2;
      if (arr[mid] == value && arr[mid + 1] != value) {
          ind1 = mid+1;
          break;
      } else if (arr[mid] <= value)
          i = mid + 1;
        else
          j = mid;
  }

  i = 0, j = size - 1;
  while (i < j) {
    int mid = i + (j - i) / 2;
    if (arr[mid] == value && arr[mid - 1] != value) {
        ind2 = mid;
        break;
    } else if (arr[mid] >= value)
        j = mid;
      else
        i = mid + 1;
  }
}
