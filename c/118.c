#include <stdlib.h>
#include <stdio.h>
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize = numRows;
    int ** result = (int **) malloc(numRows * sizeof(int *));
    *returnColumnSizes = (int *) malloc(numRows * sizeof(int));
    int i = 0;
    int j = 0;
    for (i = 0; i < numRows; i++) {
        *(result + i) = (int *) malloc((i+1) * sizeof(int));
        *(*returnColumnSizes + i) = i + 1;
        **(result + i) = 1;
        if (i >= 1) {
            *(*(result + i) + i) = 1;
            for (j = 1; j <= i-1; j++){
                *(*(result + i) + j) = *(*(result + i - 1) + j - 1) + *(*(result + i - 1) + j);
            }
        }
    }
    return result;
}

int main() {
  int returnSize = 0;
  int * returnColumnSizes = 0;
  int ** result = generate(5, &returnSize, &returnColumnSizes);
  int i = 0;
  int j = 0;
  for (i = 0; i < returnSize; i++) {
    for (j = 0; j < *(returnColumnSizes + i); j++) {
      printf("%d ", *(*(result + i) + j));
    }
    printf("\n");
  }
}
