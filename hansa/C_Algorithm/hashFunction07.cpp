#include <stdio.h>
#include <cstdlib>
#include <list>
using namespace std;

struct Hash
{
  list<int>* table;
  int tableSize;
  int (*pHashFunction)(int , int );   // 함수를 저장하는 포인터
} ;
int HashFunction(int key, int tableSize)
{
  int addr = key % tableSize; 
  return addr;
}
void PushHash(Hash *ph, int key)
{
  int addr = (ph->pHashFunction)(key, ph->tableSize);
  ph->table[addr].push_back(key);
}
bool FindHash(Hash *ph, int key)
{
  int addr = (ph->pHashFunction)(key, ph->tableSize);
  for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
    if (*iter == key)
      return true;
  return false;
}
void PopHash(Hash* ph, int key)
{
  int addr = (ph->pHashFunction)(key, ph->tableSize); // addr 찾아 제거
  for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
    if (*iter == key)
    {
      ph->table[addr].erase(iter);
      break;
    }
}
void PrintHash(Hash *ph)
{
  for (int i = 0; i < ph->tableSize; ++i)
  {
    printf("[%d]: ", i);
    for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
      printf("%d ", *iter);
    printf("\n");
  }
}
void InitHash(Hash* ph, int tableSize, int (*phf)(int,int)=0)
{
  if (phf == 0)
    ph->pHashFunction = HashFunction;
  else
    ph->pHashFunction = phf;
  ph->tableSize = tableSize;
  ph->table = new list<int>[tableSize];
}
void UninitHash(Hash *ph)
{
  delete[] ph->table;
}
////////////////////////////////////////////////////////////////
int MyHF(int key, int tableSize)
{
  return (key>>2)%tableSize;
}
int main(int argc, char const *argv[])
{

  Hash h;

  InitHash(&h, 10, MyHF);

  PushHash(&h, 10);
  PushHash(&h, 50);
  PushHash(&h, 60);
  PushHash(&h, 90);
  PushHash(&h, 32);
  PushHash(&h, 197);

  PrintHash(&h);
  PopHash(&h, 65);
  PrintHash(&h);

  if (FindHash(&h, 51))
  {
    printf("존재!\n");
  }
  else
  {
    printf("없음!\n");
  }

  UninitHash(&h);

  return 0;
}
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// struct Hash
// {
//   list<int>* table;
//   int tableSize;
// } ;
// int HashFunction(int key, int tableSize)
// {
//   int addr = key % tableSize; 
//   return addr;
// }
// void PushHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize);
//   ph->table[addr].push_back(key);
// }
// bool FindHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize);
//   for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//     if (*iter == key)
//       return true;
//   return false;
// }
// void PopHash(Hash* ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize); // addr 찾아 제거
//   for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//     if (*iter == key)
//     {
//       ph->table[addr].erase(iter);
//       break;
//     }
// }
// void PrintHash(Hash *ph)
// {
//   for (int i = 0; i < ph->tableSize; ++i)
//   {
//     printf("[%d]: ", i);
//     for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//       printf("%d ", *iter);
//     printf("\n");
//   }
// }
// void InitHash(Hash* ph, int tableSize)
// {
//   ph->tableSize = tableSize;
//   ph->table = new list<int>[tableSize];
// }
// void UninitHash(Hash *ph)
// {
//   delete[] ph->table;
// }
// int main(int argc, char const *argv[])
// {

//   Hash h;

//   InitHash(&h, 10);

//   PushHash(&h, 10);
//   PushHash(&h, 57);
//   PushHash(&h, 65);
//   PushHash(&h, 59);
//   PushHash(&h, 32);
//   PushHash(&h, 197);

//   PrintHash(&h);
//   PopHash(&h, 65);
//   PrintHash(&h);

//   if (FindHash(&h, 51))
//   {
//     printf("존재!\n");
//   }
//   else
//   {
//     printf("없음!\n");
//   }

//   UninitHash(&h);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   list<int> lt; // lt 객체

//   lt.push_back(10); //lt 객체 뒷쪽에 10 추가
//   lt.push_front(100); // 앞에 100 추가
//   lt.push_back(20);
//   lt.push_back(30);

//   list<int>::iterator iter = lt.begin();
//   ++iter;
//   ++iter;
//   lt.erase(iter);

//   list<int>::iterator endIter = lt.end(); // 끝번째를 가리키는 이터

//   // iter 에 첫번째 주소가 들어있으며 그 주소가
//   for ( list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//   printf("%d\n", *iter);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// struct Hash
// {
//   list<int>* table;
//   int tableSize;
// } ;
// int HashFunction(int key, int tableSize)
// {
//   int addr = key % tableSize; 
//   return addr;
// }
// void PushHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize);
//   ph->table[addr].push_back(key);
// }
// bool FindHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize);
//   for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//     if (*iter == key)
//       return true;
//   return false;
// }
// void PopHash(Hash* ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize); // addr 찾아 제거
// }
// void PrintHash(Hash *ph)
// {
//   for (int i = 0; i < ph->tableSize; ++i)
//   {
//     printf("[%d]: ", i);
//     for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//       printf("%d ", *iter);
//     printf("\n");
//   }
// }
// void InitHash(Hash* ph, int tableSize)
// {
//   ph->tableSize = tableSize;
//   ph->table = new list<int>[tableSize];
// }
// void UninitHash(Hash *ph)
// {
//   delete[] ph->table;
// }
// int main(int argc, char const *argv[])
// {

//   Hash h;

//   InitHash(&h, 10);

//   PushHash(&h, 10);
//   PushHash(&h, 57);
//   PushHash(&h, 65);
//   PushHash(&h, 59);
//   PushHash(&h, 32);
//   PushHash(&h, 197);

//   PrintHash(&h);
  
//   PopHash(&h, 65);

//   if (FindHash(&h, 51))
//   {
//     printf("존재!\n");
//   }
//   else
//   {
//     printf("없음!\n");
//   }

//   UninitHash(&h);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// struct Hash
// {
//   list<int>* table;
//   int tableSize;
// } ;
// int HashFunction(int key, int tableSize)
// {
//   int addr = key % tableSize; 
//   return addr;
// }
// void PushHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize);
//   ph->table[addr].push_back(key);
// }
// bool FindHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key, ph->tableSize);
//   for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//     if (*iter == key)
//       return true;
//   return false;
// }
// void PrintHash(Hash *ph)
// {
//   for (int i = 0; i < ph->tableSize; ++i)
//   {
//     printf("[%d]: ", i);
//     for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//       printf("%d ", *iter);
//     printf("\n");
//   }
// }
// void InitHash(Hash* ph, int tableSize)
// {
//   ph->tableSize = tableSize;
//   ph->table = new list<int>[tableSize];
// }
// void UninitHash(Hash *ph)
// {
//   delete[] ph->table;
// }
// int main(int argc, char const *argv[])
// {

//   Hash h;

//   InitHash(&h, 100);

//   PushHash(&h, 10);
//   PushHash(&h, 57);
//   PushHash(&h, 65);
//   PushHash(&h, 59);
//   PushHash(&h, 32);
//   PushHash(&h, 197);

//   PrintHash(&h);

//   if (FindHash(&h, 51))
//   {
//     printf("존재!\n");
//   }
//   else
//   {
//     printf("없음!\n");
//   }

//   UninitHash(&h);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// struct Hash
// {
//   list<int> table[10];
// } ;
// int HashFunction(int key)
// {
//   int addr = key % 10; // 0~9까지 임의로 결정 함수를 잘작성, 효율적인 해쉬구조
//   return addr;
// }
// void PushHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key);
//   ph->table[addr].push_back(key);
// }
// bool FindHash(Hash *ph, int key)
// {
//   int addr = HashFunction(key);
//   for (list<int>::iterator iter = ph->table[addr].begin(); iter != ph->table[addr].end(); ++iter)
//     if (*iter == key)
//       return true;
//   return false;
// }
// void PrintHash(Hash *ph)
// {
//   for (int i = 0; i < 10; ++i)
//   {
//     printf("[%d]: ", i);
//     for (list<int>::iterator iter = ph->table[i].begin(); iter != ph->table[i].end(); ++iter)
//       printf("%d ", *iter);
//     printf("\n");
//   }
// }
// int main(int argc, char const *argv[])
// {

//   Hash h;

//   PushHash(&h, 10);
//   PushHash(&h, 57);
//   PushHash(&h, 65);
//   PushHash(&h, 59);
//   PushHash(&h, 32);
//   PushHash(&h, 197);

//   PrintHash(&h);

//   if (FindHash(&h, 51))
//   {
//     printf("존재!\n");
//   }
//   else
//   {
//     printf("없음!\n");
//   }

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// list<int> table[10];
// int HashFunction(int key)
// {
//   int addr = key % 10; // 0~9까지 임의로 결정 함수를 잘작성, 효율적인 해쉬구조
//   return addr;
// }
// void PushHash(int key)
// {
//   int addr = HashFunction(key);
//   table[addr].push_back(key);
// }
// bool FindHash(int key)
// {
//   int addr = HashFunction(key);
//   for (list<int>::iterator iter = table[addr].begin(); iter != table[addr].end(); ++iter)
//     if (*iter == key)
//       return true;
//   return false;
// }
// void PrintHash()
// {
//   for (int i = 0; i < 10; ++i)
//   {
//     printf("[%d]: ", i);
//     for (list<int>::iterator iter = table[i].begin(); iter != table[i].end(); ++iter)
//       printf("%d ", *iter);
//     printf("\n");
//   }
// }
// int main(int argc, char const *argv[])
// {
//   PushHash(10);
//   PushHash(57);
//   PushHash(65);
//   PushHash(59);
//   PushHash(32);
//   PushHash(197);

//   PrintHash();

//   if (FindHash(51))
//   {
//     printf("존재!\n");
//   }
//   else
//   {
//     printf("없음!\n");
//   }

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   list<int> lt; // lt 객체

//   lt.push_back(10); //lt 객체 뒷쪽에 10 추가
//   lt.push_front(100); // 앞에 100 추가
//   lt.push_back(20);
//   lt.push_back(30);

//   list<int>::iterator iter = lt.begin(); // 첫번째를 가리키는 이터
//   list<int>::iterator endIter = lt.end(); // 끝번째를 가리키는 이터

//   // iter 에 첫번째 주소가 들어있으며 그 주소가
//   for ( list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//   printf("%d\n", *iter);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   list<int> lt; // lt 객체

//   lt.push_back(10); //lt 객체에 10 추가
//   lt.push_back(20);
//   lt.push_back(30);

//   list<int>::iterator iter = lt.begin(); // 첫번째를 가리키는 이터
//   list<int>::iterator endIter = lt.end(); // 끝번째를 가리키는 이터
//   for ( ; iter != endIter ; ++iter) // 첫번째부터 endIter 가 같지않을때까지 ++
//   printf("%d\n", *iter);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>
// #include <list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   list<int> lt; // lt 객체

//   lt.push_back(10); //lt 객체에 10 추가
//   lt.push_back(20);
//   lt.push_back(30);

//   list<int>::iterator iter = lt.begin();
//   printf("%d\n", *iter);
//   ++iter;
//   printf("%d\n", *iter);
//   ++iter;
//   printf("%d\n", *iter);

//   return 0;
// }
// #include <stdio.h>
// #include <cstdlib>

// int main(int argc, char const *argv[])
// {

//   return 0;
// }
