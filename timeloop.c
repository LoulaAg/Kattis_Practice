#include <stdio.h>

void main(){
  int num, i=0;
  if(scanf("%d", &num) ==1){
    while(i<num){
      printf("%d Abracadabra\n", i+1);
      i++;
    }
  }
}
