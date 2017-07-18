#include <stdio.h>
#include <math.h>

int main(){
  char c;
  int true=1;
  int T=0, C=0, G=0, sum;
  while(true){
    if(1 == scanf("%c", &c)){
      if(c == 'T'){
        T++;
      }
      else if (c== 'G'){
        G++;
      }
      else if(c== 'C'){
        C++;
      }
      else{
        true=0;
      }
    }
  }
  sum= pow(T, 2);
  //printf("Sum=%d\n", sum);
  sum= sum + pow(G, 2);
  //printf("Sum=%d\n", sum);
  sum+= pow(C, 2);
  //printf("Sum=%d\n", sum);
  //printf("T=%d C=%d G=%d\n", T, C, G);
  while(T>= 1 && G>= 1 && C>=1){
    sum+=7;
    T--;
    G--;
    C--;
  }
//  if(T>=1 && G>= 1 && C>=1){
  //  printf("Here\n");
    //sum+=7;
  //}
  printf("%d\n", sum);
  return 0;
}
