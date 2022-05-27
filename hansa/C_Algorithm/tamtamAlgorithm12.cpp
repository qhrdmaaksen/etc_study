#include <cstdio>
#include <cstdlib>
// 6 리터의 가방에 최대의 가치가 되도록 과일을 담으려면?
// 배 5L 2500, 바나나 3L 1500, 사과 2L 1500, 딸기 1L 2000

struct Fruit
{
  const char *name;
  int price;
  int size;
};
void PrintFruits(Fruit fruits[], int countFruits)
{
	for (int i = 0; i < countFruits; ++i)
		printf("%s, %d, %d\n", fruits[i].name, fruits[i].price, fruits[i].size);
}
int ChooseFruit(Fruit fruits[], int countFruits, int size)
{
	int maxIndex = -1;
	for (int maxIndex = 0; maxIndex < countFruits; ++maxIndex)
		if (fruits[maxIndex].size <= size)
			break;
	if (maxIndex == countFruits)
		return -1;

	for (int i = maxIndex + 1; i < countFruits; ++i)
		if (fruits[i].size <= size && fruits[maxIndex].price < fruits[i].price)
			maxIndex = i;

	return maxIndex;
}
int main()
{
	Fruit fruits[4] =
	{ { "배",2500,5 },{ "바나나",1500,3 },{ "사과",1500,2 },{ "딸기",2000,1 } };
	int backpackSize = 5;

	int idx = ChooseFruit(fruits, 4, backpackSize);
	if (idx >= 0)
		printf("%s, %d, %d\n",
			fruits[idx].name, fruits[idx].price, fruits[idx].size);

	//PrintFruits(fruits, 4);
  return 0;
}
// #include <cstdio>
// #include <cstdlib>
// // 6 리터의 가방에 최대의 가치가 되도록 과일을 담으려면?
// // 배 5L 2500, 바나나 3L 1500, 사과 2L 1500, 딸기 1L 2000

// struct Fruit
// {
//   const char *name;
//   int price;
//   int size;
// };
// void PrintFruits(Fruit fruits[], int countFruits)
// {
//   for (int i = 0; i < countFruits; i++)
//   {
//     printf("%s, %d, %d\n", fruits[i].name, fruits[i].price, fruits[i].size);
//   }
// }
// int ChooseFruits(Fruit fruits[], int countFruits)
// {
//   int maxIndex = 0;
//   for (int i = maxIndex + 1; i < countFruits; i++)
//   {
//     if (fruits[maxIndex].price < fruits[i].price)
//     {
//       maxIndex = i;
//     }
//   }
//   return maxIndex;
// }
// int main(int argc, char const *argv[])
// {
//   Fruit fruits[4] = {{"배", 2500, 5}, {"바나나", 1500, 3}, {"사과", 1500, 2}, {"딸기", 2000, 1}};

//   int backpackSize = 6;

//   int idx = ChooseFruits(fruits, 4);
//   if (idx >= 0)
//   {
//     printf("%s, %d, %d\n", fruits[idx].name, fruits[idx].price, fruits[idx].size);
//   }

//   //PrintFruits(fruits, 4);
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 6 리터의 가방에 최대의 가치가 되도록 과일을 담으려면?
// // 배 5L 2500, 바나나 3L 1500, 사과 2L 1500, 딸기 1L 2000

// struct Fruit
// {
//   const char* name ;
//   int price;
//   int size;
// };
// void PrintFruits(Fruit fruits[], int countFruits)
// {
//   for (int i = 0; i < countFruits; i++)
//   {
//     printf("%s, %d, %d\n", fruits[i].name,fruits[i].price,fruits[i].size);
//   }

// }
// int main(int argc, char const *argv[])
// {
//   Fruit fruits[4] = {{"배",2500,5},{"바나나",1500,3},{"사과",1500,2},{"딸기",2000,1}};
//   PrintFruits(fruits, 4);
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

//     for (count = 0; change / moneyType[i]; ++count)
//       change = change - moneyType[i];
//       countMoneyType[i] = count;
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int moneyType[5] = {500, 100, 50, 10, 1};
//   int countMoneyType[5] = {0};
//   int money = 0;

//   printf("입력 : ");
//   scanf("%d", &money);
//   int change = 1000 - money; // 1000 원에서 330 원의 음료를 뽑았다면

//   Refund(moneyType, change, countMoneyType);

//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d원 : %d\n", moneyType[i], countMoneyType[i]);
//   }

//   int cmpChange = 0;
//   for (int i = 0; i < 5; i++)
//   {
//     cmpChange += moneyType[i] * countMoneyType[i];
//   }
//     printf("%d = %d\n", change, cmpChange);

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
