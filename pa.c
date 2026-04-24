#include <stdio.h>
int main(){
   int Status;

   printf("System Status:");
   scanf("%d", &Status);

   if ("CPU Usage > 90%:"){
    printf("High CPU Usage-Potential Issue\n");
   } else if ("CUP Usage > 70%:"){
   printf("High CPU Usage\n");
   } else {
       printf("Normal CPU Usage\n");
   }
   return 0;
}
