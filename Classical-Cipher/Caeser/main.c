#include<stdio.h>
#include<stdlib.h>
#include"caeser.h"

int main(){
   
  char c;

  printf("-----------------------------------------------------\n");
  printf("| Select a mode:                                    |\n");
  printf("|----------------------------------------------------\n");
  printf("| Encode: type 'E' return Or Decode type 'D' return |\n");
  printf("-----------------------------------------------------\n");
  printf("|                                                   |\n");
  printf("|               Waiting you choice...               |\n"); 
  printf("|                                                   |\n");
  printf("-----------------------------------------------------\n");
   
  while(scanf("%1c",&c))
  {
     if(c=='e' || c=='E')  // Into encode mode  
    {
       getchar();
       encoder(); 
       main();
     }else if(c=='d' || c=='D')   // Into decode mode
    {  
       getchar();
       cracker();    
       main();
     }else if(c=='q' || c=='Q'){
       return 0; 
     }else
       printf("You sure ?? Input 'E' or 'D' or 'Q' to quit\n");  
  }
  return 0;
}
