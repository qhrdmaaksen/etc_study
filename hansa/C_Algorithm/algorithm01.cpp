#include <stdio.h>
int Sum(int s, int e) // 인수로 넣어줘서 좀더 유연성있게 만들었다.
{ 
  int sum = 0 ;
  for (int i = s; i <= e; ++i)
  {
    sum = sum + i ;
  };
  return sum ;
}
int main()
{
    int sum = 0 ;
    sum = Sum(1,10); // 인수로 넣어줘서 좀더 유연성있게 만들었다.
    printf("Sum = %d\n", sum);
    printf("Sum = %d\n", Sum(5,10));
    printf("Sum = %d\n", Sum(10,20));
}
// #include <stdio.h>
// int Sum ()
// { 
//   int sum = 0 ;
//   for (int i = 0; i <= 10; ++i)
//   {
//     sum = sum + i ;
//   };
//   return sum ;
// }
// int main()
// {
//     int sum = 0 ;
//     sum = Sum();
//     printf("Sum = %d\n", sum);
//     printf("Sum = %d\n", Sum());
// }
// #include <stdio.h>
// int main()
// {
//   int sum = 0 ;
//   for (int i = 0; i <= 10; ++i)
//   {
//     sum = sum + i ;
//   };
//     printf("sum = %d\n", sum);
// }
// #include <stdio.h>
// int main()
// {
//   int n = 12 ; 
//   printf("%d\n", n);
//   getchar();
//   return 0 ;
// }