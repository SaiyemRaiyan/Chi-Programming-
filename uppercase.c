#include<stdio.h>
#include<string.h>

int main() {
   char string[100];

   printf("Input a string in lowercase: ");
   gets(string);

   strupr(string);
   printf("Here is the above string in UPPERCASE:: %s", string);

   return 0;
}
