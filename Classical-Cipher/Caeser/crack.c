#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"caeser.h"

#define LEN 1000  // The allowable mixmum input text length 

void cracker()
{
	
	int offset=1; 
	char src[LEN];	// The input text is save in here
  	int count=0;
 	for(int var=0;var<strlen(src);var++)  // Init it 
    	src[var]=' ';
  

  	printf("--------------------------------------------\n");
  	printf("|      Welcome to caesar cracker  !!!      |\n");
  	printf("|               Cut the Crap               |\n");
  	printf("|      Import your ciphertext bellow:      |\n");
  	printf("--------------------------------------------\n");

  	fflush(stdin);          // Free input buffer
  	fgets(src,LEN,stdin);   // Accept user input data
  //strlwr(src);            // Change to lower

  	for(;count<strlen(src);count++){}

 	printf("----------------------------------------------------\n");
  	printf("|       The length of you input text: %d          |\n",count);
  	printf("----------------------------------------------------\n");

  	printf("-------------------------------\n");
  	printf("|   Press any key to start... |\n");
  	printf("-------------------------------\n");

  	getchar();

 	printf("-----------------\n");
	printf("|  List it all: |\n");
  	printf("-----------------\n");


	for(offset;offset<26;offset++)	// Shifting from 1 to 25
	{
    		int rollback = 0;

    		printf("Key=%d  ",offset);    // Print offset 
    		if(offset<10)
      		printf(" ");

		for(int i=0;i<strlen(src)-1;i++)	// Attent the carriage return was seem as an input character too 
		{
      		// Lowercase only
	/*	if(src[i]<97 || src[i]>122)	// Copy  
			{
				//src[i]=' ';
        printf("%c",src[i]);
        continue;      
			}else{
				if(src[i]+1>=123){            // a to z in ascii correspond to 65 to 90
					rollback=src[i]-122;
					src[i]=97+rollback;
			  }
        else
				  src[i]=src[i]+1;
			}
			printf("%c",src[i]);
   */	
      // Mixed case
      			if( 64<src[i] && src[i]<91 )   // Uppercase
      			{
         			if(src[i]+1>=91){
         				rollback=src[i]-90;
         				src[i]=65+rollback;
         			}else{
           				src[i]=src[i]+1;
         			}
      			}else if( 96<src[i] && src[i]<123 )   // Lowercase
      			{
        			if(src[i]+1>=123){
           				rollback=src[i]-122;
           				src[i]=97+rollback;
         			}else{
           				src[i]=src[i]+1; 
         			}
      			}else{}
      			printf("%c",src[i]);
    		}

		printf("\n");

	}
		
}
