#include<stdio.h>
#include<string.h>
#define LEN 1000

int main()
{

  char src[LEN];
  for(int var = 0; var<(int)strlen(src); var++) 
    src[var]=' ';

  printf("Input you text: \n");
  
  fgets(src,LEN,stdin);

  int key = 0;
  int len = 0;
  len = strlen(src);
  len = len - 1;
  printf("The length of your input text is: %d\n",len);

  printf("\nInput your key:  (Your key should between 1 and %d)\n",len);
  scanf("%d",&key);

  printf("Your key: %d \n",key);
  if(key <= 1 || key >= len)
  {
    printf("Key Error! retry it! \n");
  }
  else{
    int groups = 0;
    if(len%key > 0){
      groups = len/key + 1;
    }else{
      groups = len/key; 
    }

    printf("It was splited into %d groups\n",groups);
 
    printf("\nAfter encode: \n");
    int flag = 0;
    for(int i=0;i<key;i++)  // The key is meaning the length of per group
    {  
      flag = i;
      for(int j=0;j<groups;j++){ 
        if(flag<len){
          printf("%c",src[flag]);
        }
        else{
          printf("#");
          continue;
        } 
        //printf("%c",src[flag]);
        flag = flag + key ;
      }
    }
    printf("\n");
  }

  return 0;  
}


