#include <stdio.h>
int main(void) {
  char str[100];
  scanf("%s",str);
  char res[20];
  int ind = 0;
  for(int i=strlen(str)-1;i>=0;i--){
    if(str[i]=='#'){
      int num = 0;
      num=num+(str[i-2]-'0');
      num*=10;
      num=num+(str[i-1]-'0');
      res[ind++]=96+num;
      i-=2;
    }
    else{
    
      res[ind++]=96+(str[i]-'0');
    }
  }
  res[ind]='\0';
  int i=0;
  while(i<ind/2){
    char temp = res[i];
    res[i] = res[ind-i-1];
    res[ind-i-1] = temp;
    i++;
  }
  printf("%s",res);
  return 0;
}
