#include <cstdio>
#include <cstdlib>
// heap memory use
template<typename T>
class Array
{
private:
  T* arr;
  int size;
  int capacity;

public:
  void Add(const T& data)
  {
    arr[size++] = data;
  }
  int Size()const
  {
    return size;
  }
  const T& At(int idx)const
  {
    return arr[idx];
  }
  void Remove(int idx)
  {
    for (int i = idx; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
      --size;
    }
  }
  Array(int cap) // 생성자
  {
    size = 0;
    capacity = cap;
    arr = new T[cap]; // 할당메모리
  }
  ~Array() // 소멸자
  {
    delete[] arr; // 제거메모리
  }
};
int main()
{
  Array<double> arr(100);

  // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
  arr.Add(1.1);
  arr.Add(2.34);
  arr.Add(3.5678);

  arr.Remove(1);

  for (int i = 0; i < arr.Size(); i++)
  {
    printf("%g\n", arr.At(i));
  }
  system("pause");
  return 0;
}
// #include <cstdio>
// #include <cstdlib>
// // heap memory use
// class Array
// {
// private:
//   int *arr;
//   int size;
//   int capacity;

// public:
//   void AddArray(int data)
//   {
//     arr[size++] = data;
//   }
//   int SizeArray()
//   {
//     return size;
//   }
//   int AtArray(int idx)
//   {
//     return arr[idx];
//   }
//   void RemoveArray(int idx)
//   {
//     for (int i = idx; i < size - 1; i++)
//     {
//       arr[i] = arr[i + 1];
//       --size;
//     }
//   }
//   Array(int cap) // 생성자
//   {
//     size = 0;
//     capacity = cap;
//     arr = new int[cap]; // 할당메모리
//     printf("Array()\n");
//   }
//   ~Array() // 소멸자
//   {
//     delete[] arr; // 제거메모리
//     printf("~Array()\n");
//   }
// };
// int main()
// {
//   {
//     Array arr(100);

//     // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//     arr.AddArray(10);
//     arr.AddArray(20);
//     arr.AddArray(30);

//     arr.RemoveArray(1);

//     for (int i = 0; i < arr.SizeArray(); i++)
//     {
//       printf("%d\n", arr.AtArray(i));
//     }
//   }
//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // heap memory use
// struct Array
// {
//   int *arr;
//   int size;
//   int capacity;
//   void AddArray(int data)
//   {
//     arr[size++] = data;
//   }
//   int SizeArray()
//   {
//     return size;
//   }
//   int AtArray(int idx)
//   {
//     return arr[idx];
//   }
//   void RemoveArray(int idx)
//   {
//     for (int i = idx; i < size - 1; i++)
//     {
//       arr[i] = arr[i + 1];
//       --size;
//     }
//   }
//   void InitArray(int cap)
//   {
//     size = 0;
//     capacity = cap;
//     arr = new int[cap]; // 할당메모리
//   }
//   void UninitArray()
//   {
//     delete[] arr; // 제거메모리
//   }
// };
// int main()
// {
//   Array arr;

//   arr.InitArray(100);
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   arr.AddArray(10);
//   arr.AddArray(20);
//   arr.AddArray(30);

//   arr.RemoveArray(1);

//   for (int i = 0; i < arr.SizeArray(); i++)
//   {
//     printf("%d\n", arr.AtArray(i));
//   }

//   arr.UninitArray();
//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // heap memory use
// struct Array
// {
//   int *arr;
//   int size;
//   int capacity;
// };
// void AddArray(Array &ar, int data)
// {
//   ar.arr[ar.size++] = data;
// }
// int SizeArray(Array &ar)
// {
//   return ar.size;
// }
// int AtArray(Array &ar, int idx)
// {
//   return ar.arr[idx];
// }
// void RemoveArray(Array& ar, int idx)
// {
//   for (int i = idx; i < ar.size -1; i++)
//   {
//     ar.arr[i] = ar.arr[i+1];
//     --ar.size;
//   }

// }
// void InitArray(Array &ar, int cap)
// {
//   ar.size = 0;
//   ar.capacity = cap;
//   ar.arr = new int[cap]; // 할당메모리
// }
// void UninitArray(Array &ar)
// {
//   delete[] ar.arr; // 제거메모리
// }
// int main()
// {
//   Array arr;

//   InitArray(arr, 100);
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, 10);
//   AddArray(arr, 20);
//   AddArray(arr, 30);

//   RemoveArray(arr, 1);

//   for (int i = 0; i < SizeArray(arr); i++)
//   {
//     printf("%d\n", AtArray(arr, i));
//   }

//   UninitArray(arr);
//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// // heap memory use
// struct Array
// {
//   int *arr;
//   int size;
// };
// void AddArray(Array &ar, int data)
// {
//   ar.arr[ar.size++] = data;
// }
// int SizeArray(Array &ar)
// {
//   return ar.size;
// }
// int AtArray(Array &ar, int idx)
// {
//   return ar.arr[idx];
// }
// void RemoveArray(Array& ar, int idx)
// {
//   for (int i = idx; i < ar.size -1; i++)
//   {
//     ar.arr[i] = ar.arr[i+1];
//     --ar.size;
//   }

// }
// void InitArray(Array &ar, int cap)
// {
//   ar.size = 0;
//   ar.arr = new int[cap]; // 할당메모리
// }
// void UninitArray(Array &ar)
// {
//   delete[] ar.arr; // 제거메모리
// }
// int main()
// {
//   Array arr;

//   InitArray(arr, 100);
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, 10);
//   AddArray(arr, 20);
//   AddArray(arr, 30);

//   RemoveArray(arr, 1);

//   for (int i = 0; i < SizeArray(arr); i++)
//   {
//     printf("%d\n", AtArray(arr, i));
//   }

//   UninitArray(arr);
//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// struct Array
// {
//   int* arr;
//   int size;
// };
// void AddArray(Array& ar, int data)
// {
//   ar.arr[ar.size++] = data;
// }
// int SizeArray(Array& ar)
// {
//   return ar.size;
// }
// int AtArray(Array& ar, int idx)
// {
//   return ar.arr[idx];
// }
// void InitArray(Array& ar, int cap)
// {
//   ar.size = 0;
//   ar.arr = new int[cap]; // 할당메모리
// }
// void UninitArray(Array& ar)
// {
//   delete[] ar.arr; // 제거메모리
// }
// int main()
// {
//   Array arr;

//   InitArray(arr, 100);
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, 10);
//   AddArray(arr, 20);
//   AddArray(arr, 30);

// for (int i = 0; i < SizeArray(arr); i++)
// {
//   printf("%d\n", AtArray(arr, i));
// }

//   UninitArray(arr);
//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// struct Array
// {
//   int* arr;
//   int size;
// };
// void AddArray(Array& ar, int data)
// {
//   ar.arr[ar.size++] = data;
// }
// void PrintArray(Array& ar)
// {
//   for (int i = 0; i < ar.size; i++) // size = 배열이 들어간만큼 증가된 상태
//   {
//     printf("%d\n", ar.arr[i]); // size 의 숫자 만큼 배열의 메모리 내용 출력
//   }
// }
// void InitArray(Array& ar, int cap)
// {
//   ar.size = 0;
//   ar.arr = new int[cap]; // 할당메모리
// }
// void UninitArray(Array& ar)
// {
//   delete[] ar.arr; // 제거메모리
// }
// int main()
// {
//   Array arr;

//   InitArray(arr, 100);
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, 10);
//   AddArray(arr, 20);
//   AddArray(arr, 30);

//   PrintArray(arr);
//   UninitArray(arr);

//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// struct Array
// {
//   int arr[5] = {0};
//   int size = 0 ;
// };
// void AddArray(Array& ar, int data)
// {
//   ar.arr[ar.size++] = data;
// }
// void PrintArray(Array& ar)
// {
//   for (int i = 0; i < ar.size; i++) // size = 배열이 들어간만큼 증가된 상태
//   {
//     printf("%d\n", ar.arr[i]); // size 의 숫자 만큼 배열의 메모리 내용 출력
//   }
// }
// void InitArray(Array& arr)
// {
//   arr.size = 0;
// }
// void UninitArray(Array& arr)
// {

// }
// int main()
// {
//   Array arr;
//   InitArray(arr);
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, 10);
//   AddArray(arr, 20);
//   AddArray(arr, 30);

//   PrintArray(arr);
//   UninitArray(arr);

//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// struct Array
// {
//   int arr[5] = {0};
//   int size = 0 ;
// };
// void AddArray(Array& ar, int data)
// {
//   ar.arr[ar.size++] = data;
// }
// void PrintArray(Array& ar)
// {
//   for (int i = 0; i < ar.size; i++) // size = 배열이 들어간만큼 증가된 상태
//   {
//     printf("%d\n", ar.arr[i]); // size 의 숫자 만큼 배열의 메모리 내용 출력
//   }
// }
// int main()
// {
//   Array arr = {0};

//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, 10);
//   AddArray(arr, 20);
//   AddArray(arr, 30);

//   PrintArray(arr);

//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// void AddArray(int* arr, int& size, int data)
// {
//   arr[size++] = data;
// }
// void PrintArray(int* arr, int size)
// {
//   for (int i = 0; i < size; i++) // size = 배열이 들어간만큼 증가된 상태
//   {
//     printf("%d\n", arr[i]); // size 의 숫자 만큼 배열의 메모리 내용 출력
//   }
// }
// int main()
// {

//   int arr[5] = {0};
//   int size = 0 ;
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   AddArray(arr, size, 10);
//   AddArray(arr, size, 20);
//   AddArray(arr, size, 30);

//   PrintArray(arr, size);

//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// int main()
// {

//   int arr[5] = {0};
//   int size = 0 ;
//   // 리스트 형식으로 순차적으로 배열을 나열할수있게하는 로직
//   arr[size++] = 10; // arr 배열 0 번째에 10을 넣으면 size 는 +1 증가
//   arr[size++] = 20;
//   arr[size++] = 30;

//   for (int i = 0; i < size; i++) // size = 배열이 들어간만큼 증가된 상태
//   {
//     printf("%d\n", arr[i]); // size 의 숫자 만큼 배열의 메모리 내용 출력
//   }

//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// //heap memory use
// int main()
// {
//   int* arr = new int[5];

//   for (int i = 0; i < 5; i++)
//     arr[i] = 10 * ( i + 1);
//   for (int i = 0; i < 5; i++)
//     printf("%d\n", arr[i]);

//   delete[] arr;

//   system("pause");
//   return 0;
// }
// #include <cstdio>
// #include <cstdlib>
// stack memory use
// void ArrayTest()
// {
//   int arr[5] = {10, 20, 30, 40, 50};
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\n", arr[i]);
//   }
// }
// int main()
// {
//   ArrayTest();
//   system("pause");

//   return 0;
// }