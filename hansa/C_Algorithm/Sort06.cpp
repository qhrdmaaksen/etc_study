#include <cstdio>
#include <cstdlib>
// 삽입 정렬
void Swap(int &a, int &b)
{
  int t = a;
  a = b;
  b = t;
}
void Sort(int list[], int size)
{
  for (int idx = 1; idx < size; ++idx)
  {
  int value = list[idx];
  int i;
  for (i = idx - 1; i >= 0; --i)
  {
    if (value < list[i])
    {
      list[i + 1] = list[i];
    }
    else
    {
      break;
    }
  }
  list[i+1] = value;
  }
}
void PrintList(int list[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%5d ", list[i]);
  }
  printf("\n");
}
int main(int argc, char const *argv[])
{
  int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
  //int list[10] = {10, 30, 40, 70, 5, 80, 90, 60};
  PrintList(list, 8);
  Sort(list, 8);
  PrintList(list, 8);

  return 0;
}
// #include <cstdio>
// #include <cstdlib>
// // 삽입 정렬
// void Swap(int &a, int &b)
// {
//   int t = a;
//   a = b;
//   b = t;
// }
// void Sort(int list[], int size)
// {
//   for (int idx = 1; idx < size; ++idx)
//   {
//   int value = list[idx];
//   int i;
//   for (i = idx - 1; i >= 0; --i)
//   {
//     if (value < list[i])
//     {
//       list[i + 1] = list[i];
//     }
//     else
//     {
//       break;
//     }
//   }
//   list[i+1] = value;
//   }
// }
// void PrintList(int list[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%5d ", list[i]);
//   }
//   printf("\n");
// }
// int main(int argc, char const *argv[])
// {
//   // int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
//   int list[10] = {10, 30, 40, 70, 5, 80, 90, 60};
//   PrintList(list, 8);
//   Sort(list, 8);
//   PrintList(list, 8);

//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 삽입 정렬
// void Swap(int &a, int &b)
// {
//   int t = a;
//   a = b;
//   b = t;
// }
// void Sort(int list[], int size)
// {
//   int idx = 4;
//   int value = list[4];
//   int i;
//   for (i = idx - 1; i >= 0; --i)
//   {
//     if (value < list[i])
//     {
//       list[i + 1] = list[i];
//     }
//     else
//     {
//       break;
//     }
//   }
//   list[i+1] = value;
// }
// void PrintList(int list[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%5d ", list[i]);
//   }
//   printf("\n");
// }
// int main(int argc, char const *argv[])
// {
//   // int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
//   int list[10] = {10, 30, 40, 70, 5, 80, 90, 60};
//   PrintList(list, 8);
//   Sort(list, 8);
//   PrintList(list, 8);

//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 삽입 정렬
// void Swap(int &a, int &b)
// {
//   int t = a;
//   a = b;
//   b = t;
// }
// void Sort(int list[], int size)
// {
//   int idx = 4;
//   int value = list[4];
//   int i;
//   for (i = idx - 1; 1; --i)
//   {
//     if (value < list[i])
//     {
//       list[i + 1] = list[i];
//     }
//     else
//     {
//       break;
//     }
//   }
//   list[i+1] = value;
// }
// void PrintList(int list[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%5d ", list[i]);
//   }
//   printf("\n");
// }
// int main(int argc, char const *argv[])
// {
//   // int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
//   int list[10] = {10, 30, 40, 70, 35, 80, 90, 60};
//   PrintList(list, 8);
//   Sort(list, 8);
//   PrintList(list, 8);

//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 선택 정렬
// void Swap(int& a,int& b){
//   int t = a;
//   a = b;
//   b = t;
// }
// int Min(int list[],int fi, int ei)
// {
//   int min = fi;
//   for (int i = fi+1; i <= ei; i++)
//   {
//     if ( list[min] > list[i] )
//     {
//       min = i ;
//     }
//   }
//     return min ;
// }
// void Sort(int list[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     int min = Min(list, i, size-1);
//     Swap(list[i], list[min]);
//   }

// }
// void PrintList(int list[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%5d ", list[i]);
//   }
//   printf("\n");
// }
// int main(int argc, char const *argv[])
// {
//   int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};

//   PrintList(list, 8);
//   Sort(list,8);
//   PrintList(list, 8);

//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 선택 정렬
// void Swap(int& a,int& b){
//   int t = a;
//   a = b;
//   b = t;
// }
// int Min(int list[],int fi, int ei)
// {
//   int min = fi;
//   for (int i = fi+1; i <= ei; i++)
//   {
//     if ( list[min] > list[i] )
//     {
//       min = i ;
//     }
//   }
//     return min ;
// }
// void Sort(int list[], int size)
// {

// }
// void PrintList(int list[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%5d ", list[i]);
//   }
//   printf("\n");
// }
// int main(int argc, char const *argv[])
// {
//   int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};

//   PrintList(list, 8);

//   Sort(list,8);

//   PrintList(list, 8);
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 선택 정렬
// void Swap(int& a,int& b){
//   int t = a;
//   a = b;
//   b = t;
// }
// int Min(int list[],int fi, int ei)
// {
//   int min = fi;
//   for (int i = fi+1; i <= ei; i++)
//   {
//     if ( list[min] > list[i] )
//     {
//       min = i ;
//     }
//   }
//     return min ;
// }
// int main(int argc, char const *argv[])
// {
//   int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};

//   int idx = Min(list, 0, 7);

//   printf("[%d] : %d\n", idx, list[idx]);
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // 선택 정렬
// int Min(int list[], int size)
// {
//   int min = 0;
//   for (int i = 1; i < size; i++)
//   {
//     if ( list[min] > list[i] )
//     {
//       min = i ;
//     }
//   }
//     return min ;
// }
// int main(int argc, char const *argv[])
// {
//   int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
//   int idx = Min(list, 8);
//   if (idx >= 0)
//   {
//     printf("[%d] : %d\n", idx, list[idx]);
//   }
//   return 0;
// }
