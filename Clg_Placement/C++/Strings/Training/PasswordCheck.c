#include <stdio.h>
int main(void) {
  char str[20];
  scanf("%s",str);
  int small = 0, special = 0,num=0;
  for(int i=0;i<strlen(str)-1;i++){
    if(str[i]>=97 && str[i]<=122) small++;
    else if(str[i]>=48 && str[i]<=57) num++;
    else if(str[i]>=32 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=91 && str[i]<=96 || str[i]>=123 && str[i]<=126) special++;
    else small++;
  }
  int n = strlen(str);
  if(n>=8 && num>=1 && special>=1) printf("Strong");
  else if(n>=5) printf("moderate");
  else printf("Weak");
  return 0;
}
