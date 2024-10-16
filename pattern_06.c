#include <stdio.h>

int main() {
    int n;

    // Ask the user for the height of the triangles
    printf("Enter the height of the triangles: ");
    scanf("%d", &n);

    // Print both upward and downward triangles using a single loop
    printf("Right-Angled Triangles:\n");
    
    for (int i = 1; i <= n * 2; i++) {
        int stars = (i <= n) ? i : (n * 2 - i);
        
        for (int j = 0; j < stars; j++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
