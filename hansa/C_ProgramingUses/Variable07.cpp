#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("hello");
  return 0;
}

// #include <stdio.h>
// // 지역변수 n 에 대해 재귀함수를 이용하여 n 의 팩토리얼과 피보나치 값을 구하시오
// int fac(int n)
// {
//   // 5! 5*4*3*2*1
//   if (n <= 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n * fac(n - 1);
//   }
// }
// int fibo(int n)
// { // 1,1,2,3,5,8,13,21
//   if ( n==1 || n==2)
//   {
//     return 1 ;
//   } else {
//     return fibo(n-1)+fibo(n-2);
//   }
  
// }
// int main(int argc, char const *argv[])
// {
//   int n = 20, i;
//   for (i = 1; i <= n; i++)
//   {
//     printf("% d! 은 %d 입니다. \n", i, fac(i));
//   }
//   for ( i = 1; i <= n; i++)
//   {
//     printf("%d 의 피보나치 값은 %d 입니다. \n", i, fibo(i));
//   }
//   return 0;
// }
