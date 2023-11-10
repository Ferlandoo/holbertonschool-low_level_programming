#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size;
  int *arr;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  arr = (int *) malloc(size * sizeof(int));

  printf("Enter %d integers:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("The array is:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);
  return 0;
}
