#include <stdio.h>

int main() {
    int n;
    int temp;
    scanf("%d",&n);
  for(int i=0;i<n;i++){
      for(int j=1;j<=n;j++){
          temp = j+i;
          if(temp>=n){
              temp = n;
          }
          printf("%d ",temp);
      }
      printf("\n");
  }

    return 0;
}
