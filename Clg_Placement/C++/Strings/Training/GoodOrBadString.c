#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  fgets(str,sizeof(str),stdin);
  int con=0,vow=0,que=0;
  int flag = 1;
  for(int i=0;i<strlen(str);i++){
      if(str[i]==63)que++;
      else if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'){
           con = 0;
           que=0;
           vow++;
      }
      else{
           vow = 0;
           que = 0;
           con++;
      }
      if((vow+que)>5 || (con+que)>3){
          flag=0;
          break;
      }
  }
  printf("Output: ");
  if(flag)printf("1");
  else printf("0");
  return 0;
}
