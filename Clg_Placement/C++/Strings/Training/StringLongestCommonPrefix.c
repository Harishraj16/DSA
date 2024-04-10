#include <stdio.h>
#include <string.h>
int main(void) {
  int n;
  scanf("%d",&n);
  char ch[n][50];
  for(int i=0;i<n;i++){
    scanf("%s",ch[i]);
  }
  if(n==1){
    printf("%s",ch[0]);
    return 0;
  }
  char res[50];
  int ind = 0;
  for(int i=0;i<strlen(ch[0]);i++){
    char c = ch[0][i];
    int flag = 1;
    for(int j=0;j<n;j++){
      if(c!=ch[j][i]) flag=0;
    }
    if(flag){
      res[ind++] = c;
    }
    else{
      break;
    }
  }
  printf("%s",res);
  return 0;
}
