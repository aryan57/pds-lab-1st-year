/* Number of lines and stanzas */

#include <stdio.h>
#include <string.h>

int main(){
  int nl=0, i=0;
  char c, w[50]; 
  
  do{
    scanf("%c", &c);
    switch(c){
      case ' ': w[i]='\0'; i=0; break;
      
      case'\n': w[i]='\0'; i=0; nl++; 
                scanf("%c", &c);
                if(c!='\n') w[i++]=c;
                break;
                
      default:  w[i++]=c; 
    }
  }while(strcmp(w, "---End---")!=0);
  
  printf("#lines = %d\n", nl-1);
  
  return 0;
}
