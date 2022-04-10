#include <stdio.h>
#include <stdlib.h>

void Fibonacci(int n, int& result)
{
  if (n ==1)
  {
    result = 1;
  } else if (n ==2) {
    result = 2;
  } else {
    int f1, f2;
    Fibonacci(n-1, f1);
    Fibonacci(n-2, f2);

    result = f1+f2;
  }
}
int main(int argc, char const *argv[])
{
  int fibo;
  Fibonacci(5, fibo);
  printf("%d\n", fibo);
  return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// int Fibonacci(int n)
// {
//   if (n ==1)
//   {
//     return 1;
//   } else if (n ==2) {
//     return 2;
//   } else {
//     return Fibonacci(n-1) + Fibonacci(n-2);
//   }
// }
// int main(int argc, char const *argv[])
// {
//   printf("%d\n", Fibonacci(5));
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int Factorial(int n, int &result)
// {
//   if (n == 1)
//   {
//     result = 1;
//   }
//   else
//   {
//     Factorial(n - 1, result);
//     result = n * result;
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int fact = 0;
//   Factorial(5, fact);
//   printf("%d\n", fact);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int Factorial(int n, int &result)
// {
//   if (n == 1)
//   {
//     result = 1;
//   }
//   else
//   {
//     int nFact;
//     Factorial(n - 1, nFact);
//     result = n * nFact;
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int fact = 0;
//   Factorial(5, fact);
//   printf("%d\n", fact);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int Factorial(int n, int& result)
// {
//   result = 100;
// }
// int main(int argc, char const *argv[])
// {
//   int fact = 0;
//   Factorial(5, fact);
//   printf("%d\n", fact);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int Factorial(int n)
// {
//   if (n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n * Factorial(n - 1);
//   }
// }
// int main(int argc, char const *argv[])
// {
//   printf("%d\n", Factorial(5));
//   return 0;
// }
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
