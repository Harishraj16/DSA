#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  fgets(str,sizeof(str),stdin);
  char ans[100];
  int ind = 0;
  for(int i=0;i<strlen(str);i++){
    if(str[i]>64 && str[i]<91) ans[ind++]=str[i];
    else if(str[i]>96 && str[i]<123) ans[ind++]=str[i];
  }
  printf("After removing the Output String : %s",ans);
  return 0;
}
