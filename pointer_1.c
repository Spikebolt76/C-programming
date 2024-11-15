// #include <stdio.h>
// #include <string.h>

// void main()
// {
//     char str1[10] = "There";
//     char str2[10] = "minecraft";

//     printf("%s", strrchr(str1, 'e')); 
// }

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element

    // Accessing elements
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, ptr[%d] = %d\n", i, arr[i], i, *(ptr + i));
    }
    
    return 0;
}
