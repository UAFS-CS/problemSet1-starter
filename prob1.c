#include <stdio.h>

int Atoi(char *str);
char readString(char *str);

int main(){
   char buffer[100];
   int testNo=1;

   while(readString(buffer)!=EOF){
      printf("Test %2d: %10s -> %d\n",testNo++,buffer,Atoi(buffer));
   }
   return 0;
}


char readString(char *str){
/*****************************************************
 * This function reads a string from STDIN into str. *
 * The function returns the EOF character if the End *
 * of the File is reached on STDIN.                  *
 * Arguments:                                        *
 * str - Address of buffer                           *
 * Return Value:                                     *
 * char - null of EOF                                *
 *****************************************************/
   int index=0;

   str[index]=getchar();
   while(str[index]!='\n' && str[index]!=EOF){
      str[++index]=getchar();
   }
   if(str[index]==EOF) return EOF;
   str[index]='\0';
   return str[index];
}

int Atoi(char *str){
/*****************************************************
 * Your Atoi Function
 *****************************************************/

}

