#include <stdio.h>
#include <string.h>

void toUpper(char s[], char t[]){
  int i;
  
  for(i=0; s[i]!='\0'; i++){
    if(s[i] >= 'a' && s[i] <='z') 
      t[i] = s[i]+'A'-'a';
    else 
      t[i] = s[i];
  }
  t[i] = '\0';
}

int main(){
  char s[101], t[101];
  printf("\nEnter string s: ");
  scanf("%[^\n]", s); // Note the argument style!
  toUpper(s, t);
  printf("In uppercase =  %s\n\n", t);
  return 0;
}
