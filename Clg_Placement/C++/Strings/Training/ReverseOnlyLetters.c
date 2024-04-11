#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  fgets(str,sizeof(str),stdin);
  int s=0,e=strlen(str)-1;
  while(s<e){
      if(!(str[s]>64 && str[s]<91 || str[s]>95 && str[s]<123))s++;
      if(!(str[e]>64 && str[e]<91 || str[e]>95 && str[e]<123))e--;
      char temp = str[s];
      str[s] = str[e];
      str[e] = temp;
      s++,e--;
  }
  printf("Reversed English letters: %s",str);
  return 0;
}
