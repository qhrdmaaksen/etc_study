#include <cstdio>
#include <cstdlib>
// 1000 원을 입금하고 330 원의 음료를 구입하면 최소의 동전 개수를 반환
// 동전의 유형은 500 원, 100 원, 10 원, 1 원
void Refund(int moneyType[], int ch, int countMoneyType[])
{
  int change = ch;
  for (int i = 0; i < 5; i++)
  {
    int count = 0;

    for (count = 0; change / moneyType[i]; ++count)
      change = change - moneyType[i];
      countMoneyType[i] = count;
  }
}
int main(int argc, char const *argv[])
{
  int moneyType[5] = {500, 100, 50, 10, 1};
  int countMoneyType[5] = {0};
  int money = 0;

  printf("입력 : ");
  scanf("%d", &money);
  int change = 1000 - money; // 1000 원에서 330 원의 음료를 뽑았다면

  Refund(moneyType, change, countMoneyType);
  
  for (int i = 0; i < 5; i++)
  {
    printf("%d원 : %d\n", moneyType[i], countMoneyType[i]);
  }

  int cmpChange = 0;
  for (int i = 0; i < 5; i++)
  {
    cmpChange += moneyType[i] * countMoneyType[i];
  }
    printf("%d = %d\n", change, cmpChange);

  return 0;
}
// #include <cstdio>
// #include <cstdlib>
// // 1000 원을 입금하고 330 원의 음료를 구입하면 최소의 동전 개수를 반환
// // 동전의 유형은 500 원, 100 원, 10 원, 1 원
// void Refund(int moneyType[], int ch, int countMoneyType[])
// {
//   int change = ch;
//   for (int i = 0; i < 5; i++)
//   {
//     int count = 0;

//     for (count = 0; change / moneyType[i]; ++count)
//       change = change - moneyType[i];
//       countMoneyType[i] = count;
//   }
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d원 : %d\n", moneyType[i], countMoneyType[i]);
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int moneyType[5] = {500, 100, 50, 10, 1};
//   int countMoneyType[5] = {0};
//   int change = 670; // 1000 원에서 330 원의 음료를 뽑았다면
//   Refund(moneyType, change, countMoneyType);
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 1000 원을 입금하고 330 원의 음료를 구입하면 최소의 동전 개수를 반환
// // 동전의 유형은 500 원, 100 원, 10 원, 1 원
// void Refund(int moneyType[], int ch, int countMoneyType[])
// {
//   int change = ch;
//   for (int i = 0; i < 5; i++)
//   {
//     int count = 0;

//     while (change / moneyType[i])
//     {
//       ++count;
//       printf("%d원 : %d\n", moneyType[i], count);
//       change = change - moneyType[i];
//       printf("남은 %d원\n", change);
//     }
//     countMoneyType[i] = count;
//   }
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d원 : %d\n", moneyType[i], countMoneyType[i]);
//   }

// }
// int main(int argc, char const *argv[])
// {
//   int moneyType[5] = {500, 100, 50, 10, 1};
//   int countMoneyType[5] = {0};
//   int change = 670; // 1000 원에서 330 원의 음료를 뽑았다면
//   Refund(moneyType, change, countMoneyType);
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 1000 원을 입금하고 330 원의 음료를 구입하면 최소의 동전 개수를 반환
// // 동전의 유형은 500 원, 100 원, 10 원, 1 원
// void Refund(int moneyType[], int ch)
// {
//   int change = ch;
//   for (int i = 0; i < 5; i++)
//   {
//     int count = 0;

//     while (change / moneyType[i])
//     {
//       ++count;
//       printf("%d원 : %d\n", moneyType[i], count);
//       change = change - moneyType[i];
//       printf("남은 %d원\n", change);
//     }
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int moneyType[5] = {500, 100, 50, 10, 1};
//   int change = 670; // 1000 원에서 330 원의 음료를 뽑았다면
//   Refund(moneyType, change);
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 1000 원을 입금하고 330 원의 음료를 구입하면 최소의 동전 개수를 반환
// // 동전의 유형은 500 원, 100 원, 10 원, 1 원
// void Refund(int moneyType[], int ch)
// {
//   int change = ch;
//   int count = 0;

//   while (change / moneyType[0])
//   {
//     ++count;
//     printf("%d원 : %d\n", moneyType[0], count);
//     change = change - moneyType[0];
//     printf("남은 %d원\n", change);
//   }

//   count = 0;
//   while (change / moneyType[1])
//   {
//     ++count;
//     printf("%d원 : %d\n", moneyType[1], count);
//     change = change - moneyType[1];
//     printf("남은 : %d원\n", change);
//   }

//   count = 0;
//   while (change / moneyType[2])
//   {
//     ++count;
//     printf("%d원 : %d\n", moneyType[2], count);
//     change -= moneyType[2];
//     printf("남은 : %d원\n", change);
//   }
//   count = 0;
//   while (change / moneyType[3])
//   {
//     ++count;
//     printf("%d원 : %d\n", moneyType[3], count);
//     change -= moneyType[3];
//     printf("남은 : %d원\n", change);
//   }
//   count = 0;
//   while (change / moneyType[4])
//   {
//     ++count;
//     printf("%d원 : %d\n", moneyType[4], count);
//     change -= moneyType[4];
//     printf("남은 : %d원\n", change);
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int moneyType[5] = {500, 100, 50, 10, 1};
//   int change = 670; // 1000 원에서 330 원의 음료를 뽑았다면
//   Refund(moneyType, change);
//   return 0;
// }
