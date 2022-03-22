#include <stdio.h>

int main(int argc, char const *argv[])
{
  int dan  ;
  printf("dan: ");
  scanf("%d", &dan);
  for (int i = 1; i < 9; i++)
  {
    printf("%d * %d = %d\n", dan, i, dan*i);
  }
  return 0 ;
}
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int i = 1 ;
//   while (i < 10 )
//   {
//     i++ ;
//     if (i % 7 == 0)
//     {
//       continue ;
//     }
//     printf("i= %d\n", i);
//   }
//   return 0 ;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   for (int i = 1; i <= 10; i++)
//   {
//     if (i % 7 == 0)
//       break;
//     printf("i= %d\n", i);
//   }
//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int i = 0 ;
//   while (i < 10 )
//   {
//     i++ ;
//     printf("i= %d\n", i);
//   }

//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int i = 0;
//   do
//   {
//     i++;
//     printf("i = : %d\n", i);
//   } while (i < 10);

//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   for (int i = 1; i <= 10; i++)
//   {
//     printf("i=%d\n",i);
//   }

//   return 0;
// }
