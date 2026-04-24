#include <stdio.h>

int main() {
    int status;
    int health;

    // ---- CPU Usage Check ----
    printf("Enter CPU Usage (in %%): ");
    scanf("%d", &status);

    if (status > 90) {
        printf("High CPU Usage - Potential Issue\n");
    } else if (status > 70) {
        printf("High CPU Usage\n");
    } else {
        printf("Normal CPU Usage\n");
    }

    // ---- Health Check ----
    printf("\nEnter Character Health: ");
    scanf("%d", &health);

    if (health > 80) {
        printf("Healthy\n");
    } else if (health > 40) {
        printf("Weakened\n");
    } else {
        printf("Critical\n");
    }

    return 0;
}
