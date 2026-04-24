#include <stdio.h>

int main(){
   int Health;

   printf("Character Health: ");
   scanf("%d", &Health);

   if (Health > 80) {
    printf("Healthy\n");
  } else if (Health > 40) {
    printf("Weakened\n");
  }else {
    printf("Critical\n");
  }

   printf("Character Health: ");
   scanf("%d", &Health);

    if (Health > 80) {
    printf("Healthy\n");
  } else if (Health > 40) {
    printf("Weakened\n");
  }else {
    printf("Critical\n");
  }

  return 0;
}
