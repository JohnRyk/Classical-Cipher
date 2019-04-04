#include"caeser.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 1000

/*void encoder(char * text,int len,int key)
{
    for(int i=0;i<len;i++)  
    {
        printf("%c",text[i]+key); 
    }
  
}*/

void encoder()
{
   int key;
   char src[LEN];
   for(int i=0;i<strlen(src);i++)
     src[i]=' ';

   printf("-----------------------------------------\n");
   printf("|                                       |\n");
   printf("|  Input the text you want to encrypt:  |\n");
   printf("|                                       |\n");
   printf("|---------------------------------------|\n");
   fgets(src,LEN,stdin);

   printf("-----------------------\n");   // Attention！the key is order
   printf("|     Choose a key:   |\n");
   printf("|   (bewteen 1 to 25) |\n");
   printf("-----------------------\n");
    
   do{ 
     scanf("%d",&key);
   }while(key<1 || key>25);   // Flit invalid value
  
   printf("---------------------------------------------------\n");
   printf("| Your key: %d  |    Press any key to start...    |\n",key);
   printf("---------------------------------------------------\n");
   
   getchar();
   getchar();

   printf("--------------------\n");
   printf("| Encode finished: |\n");
   printf("--------------------\n");
   for(int i=0;i<strlen(src)-1;i++) 
   {
     printf("%c",src[i]+key); 
   }
  
   printf("\n\n"); 
   printf("------------------------------------------\n");
   printf("|  Input b go to back to previous step   |\n");
   printf("------------------------------------------\n");
   
   
   char c;
   do{
     scanf("%1c",&c);
   }while(c!='b'&& c!='B');

   printf("\n");

   return; 

}
