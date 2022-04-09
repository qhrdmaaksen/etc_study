#include <stdio.h>
#include <stdlib.h>

void Print(int n)
{
  printf("+ : %d\n", n);
  if (n > 0)
  {
    Print(n - 1);
    Print(n - 1);
  }
  printf("- : %d\n", n);
}
int main(int argc, char const *argv[])
{
  Print(3);
  return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// void Print(int n)
// {
//   printf("+ : %d\n", n);
//   if (n > 0)
//   {
//     Print(n - 1);
//   }
//   printf("- : %d\n", n);
// }
// int main(int argc, char const *argv[])
// {
//   Print(3);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// void Print(int n)
// {
//   printf("start : %d\n", n);
//   if (n > 0)
//   {
//     Print(n - 1);
//   }
//   printf("end : %d\n", n);
// }
// int main(int argc, char const *argv[])
// {
//   Print(3);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// void Print(int n)
// {
//   printf("start : %d\n", n);
//   if (n > 0)
//   {
//     Print(n-1);
//   }
//     printf("end : %d\n", n);
// }
// int main(int argc, char const *argv[])
// {
//   Print(3);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char const *argv[])
// {
//   printf("Hello\n");
//   return 0;
// }
