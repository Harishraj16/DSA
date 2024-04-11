#include <stdio.h>
#include <string.h>

int main(void) {
  char str[20];
  fgets(str,sizeof(str),stdin);
  char s[20];
  char c[20];
  int si=0,ci=0;
  for(int i=0;i<strlen(str);i++){
    if(str[i]>64 && str[i]<91) c[ci++]=str[i];
    else if(str[i]>96 && str[i]<123) s[si++]=str[i];
  }
  printf("Lowercase: %s\n",s);
  printf("Uppercase: %s",c);
  return 0;
}
