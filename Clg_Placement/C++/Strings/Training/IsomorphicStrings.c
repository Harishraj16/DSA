#include <stdio.h>
#include <string.h>
int main(void) {
  char s1[20];
  char s2[20];
  scanf("%s\n%s",s1,s2);
  if(strlen(s1)!=strlen(s2)){
    printf("False");
    return 0;
  }
  char hash[26];
  for(int i=0;i<strlen(s1);i++){
    if(hash[s1[i]-'a']=='\0'){
      hash[s1[i]-'a']=s2[i];
    }
    else{
      if(hash[s1[i]-'a']!=s2[i]){
        printf("False");
        return 0;
      }
    }
  }
  printf("True");
  return 0;
}
