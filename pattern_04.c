#include <stdio.h>

int main()
{
  int i, j, n = 8, m = 1;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", m);
      if (m == 1)
      {
        m = 0;
      }
      else
      {
        m = 1;
      }
    }
    printf("\n");
  }
}

//another uniform pattern:

// int main() {
//     int rows = 6; 

   
//     for (int i = rows; i >= 1; i--) 
//     {
//         for (int j = 1; j <= i; j++) 
//         {
//             if (j % 2 == 0) {
//                 printf("1 ");
//             } else {
//                 printf("0 ");
//             }
//         }
//         printf("\n"); 
//     }
//     return 0;
// }
