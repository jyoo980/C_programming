#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
  printf("Enter the string you want to reverse: ");

  if (argc < 1) {
    return -1;
  } else {
  
    int len = 0;
    for (int i = 0; i < argc; i++) {
      len += strlen(argv[i]);    
    }

   printf("%d", len);    
  }


}

