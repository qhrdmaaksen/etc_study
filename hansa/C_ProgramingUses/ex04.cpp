#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();

int main () {
  game();
  return 0 ;
}
void game () {
  srand((unsigned)time(NULL));
  int freq[6] = { 0 } ;
  int i, j = 0, k;
  for (;;) {
  j++;
  i = rand() % 6 + 1 ; 
  printf("i = %d \n ", i ) ;
  freq[i - 1]++;
  if (i == 6)
    break;
    }
  for ( k = 0; k < 6; k++){
    printf("%d = %d 번 \n", k + 1, freq[k]);
  }
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//   srand((unsigned)time(NULL));
//   int i, j = 0;

//   for (;;)
//   { // 무한 반복
//     j++;
//     i = rand() % 6 + 1;
//     printf("i = %d\n", i);
//     if (i == 6)
//       break;
//   }
//   printf(" 총 %d 회 만에 6 나왔음 \n", j);
//   return 0;

//   return 0;
// }
// #include <stdio.h>
// int prime ( int n ) {
//   int j = 0 ;
//   for (int i = 1; i <= n; i++)
//   {
//     if (n % i == 0 )
//     {
//       j++;
//     }
//     if (j == 2)
//     {
//       return 1;
//     } else {
//       return 0;
//     }
//   }
// }
// int main ()
// {
//   int n, tmp ;
//   printf("n = : \n");
//   scanf("%d", &n);
//   tmp = prime(n);
//   if (tmp == 1)
//   {
//     printf("%d = prime number \n");
//   }else {
//     printf("%d = not prime number \n", n);
//   }
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void get_rand(){
//   srand((unsigned)time(NULL));
//   for (int i = 1; i <= 5; i++)
//   {
//     printf("%d\n", rand() % 50 + 1);
//   }
// }
// int main ()
// {
//   get_rand();
//   return 0 ;
// }
// #include <stdio.h>

// void big (int n, int n2)
// {
//   if (n > n2)
//   {
//     printf("두 값 중 큰 값 : %d", n);
//   } else {
//     printf("두 값 중 큰 값 : %d", n2);
//   }

// }
// int main ()
// {
//   int n = 0 ;
//   int n2 = 0 ;
//   printf("두 값을 입력 해주세요 : \n");
//   scanf("%d%d", &n, &n2);
//   big (n, n2);
//   return 0 ;
// }
// #include <stdio.h>
// int div (int n1, int n2) {
//   return n1 / n2 ;
// }
// int mul (int n1, int n2){
//   return n1 * n2 ;
// }
// int sub(int n1, int n2)
// {
//   return n1-n2;
// }
// int add (int n1, int n2){
//   return n1 + n2 ;
// }
// int main()
// {
//   int n1 = 0 ;
//   int n2 = 0 ;
//   int choice = 0;
//   int sum = 0 ;
//   printf("사칙 연산을 수행할 두 수를 입력 : \n");
//   scanf("%d%d", &n1,&n2);
//   printf("어떤 연산을 수행하시겠습니까 : 1)add(), 2)sub, 3)mul, 4)div \n");
//   scanf("%d", &choice);
//   switch (choice){
//     case 1:
//       sum = add(n1,n2);
//       printf("add func : %d", sum);
//       break;
//     case 2:
//       sub(n1,n2);
//       sum = sub(n1,n2);
//       printf("sub func : %d", sum);
//       break;
//     case 3:
//       mul(n1,n2);
//       sum = mul(n1,n2);
//       printf("mul func : %d", sum);
//       break;
//     case 4:
//       div(n1,n2);
//       sum = div(n1,n2);
//       printf("div func : %d", sum);
//       break;
//   }
//   return 0;
// }
// #include <stdio.h>

// int fac (int a) {
//   if (a<=1)
//   {
//     return 1;
//   } else {
//     return fac(a-1)*a;
//   }
// }
// int main()
// {
//   int n = 0 ;
//   printf("n : \n");
//   scanf("%d", &n);
//   printf("%d\n", fac (n)); // 5*4*3*2*1 = 120

//   return 0;
// }
// #include <stdio.h>

// int sumN (int a) {
//   if (a<=1)
//   {
//     return 1;
//   } else {
//     return sumN(a-1)+a;
//   }
// }
// int main()
// {
//   int n = 0 ;
//   printf("n : \n");
//   scanf("%d", &n);
//   printf("%d\n", sumN (n));

//   return 0;
// }
// #include <stdio.h>

// void sumN()
// {
//   int n = 0;
//   int sum = 0;
//   printf("정수 n 을 입력 : \n");
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++)
//   {
//     sum = sum + i;
//   }
//   printf("1 ~ %d 까지의 합은 : %d ", n, sum);
// }
// int main()
// {
//   sumN();
//   return 0;
// }
// #include <stdio.h>

// void sumN(int n)
// {
//   int sum = 0 ;
//   for (int i = 1; i <= n; i++)
//   {
//     sum = sum + i;
//   }
//   printf("1 ~ %d 까지의 합은 : %d", n, sum);
// }
// int main()
// {
//   int n = 0;
//   printf("입력해줄 정수 N : \n");
//   scanf("%d", &n);
//   sumN(n);
//   return 0;
// }
// #include <stdio.h>

// void add_print(int i, int j);

// int main()
// {
//   int i, j;
//   printf("두개의 정수를 더해주세요 : \n");
//   scanf("%d%d", &i, &j);
//   add_print(i, j);
//   return 0;
// }

// void add_print(int i, int j)
// {
//   printf("더한 값 : %d\n", i + j);
// }
// #include <stdio.h>

// int add(int i, int j);

// int main()
// {
//   int i, j, sum;
//   printf("더하기 연산을 할 두개의 정수를 차례로 입력 : \n");
//   scanf("%d%d", &i, &j);
//   sum = add(i, j);
//   printf("두 수의 합은 : %d", sum);
//   return 0;
// }

// int add(int i, int j)
// {
//   return i + j;
// }
// #include <stdio.h>

// int createValue()
// {
//   int i;
//   printf("값을 입력하세요 :");
//   scanf("%d", &i);
//   return i;
// }
// int main()
// {
//   int i, j, k;
//   i = createValue();
//   j = createValue();
//   k = createValue();
//   printf("i = %d j = %d k = %d\n", i, j, k);
//   return 0;
// }