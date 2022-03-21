#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int capacity; //집합의 최대 크기
  int size;     //원소의 개수
  int *buf;     //집합 배열의 주소
} Set;

// 집합 초기화
int Initialize(Set *s, int cap);
// 집합 원소 확인
int IsMember(const Set *s, int data);
// 원소 추가
void Add(Set *s, int data);
// 원소 삭제
void Remove(Set *s, int data);
// 집합의 저장 가능 최대 원소의 개수
int Capacity(const Set *s);
// 원소의 개수
int Size(const Set *s);
// 집합 s2를 s1으로 대입
void Assign(Set *s1, const Set *s2);
// 집합 s1, s2가 같은지 확인
int Equal(const Set *s1, const Set *s2);
// 집합 s2, s3의 합집합을 s1에 대입
Set *Union(Set *s1, const Set *s2, const Set *s3);
// 집합 s2, s3의 교집합을 s1에 대입
Set *Intersection(Set *s1, const Set *s2, const Set *s3);
// 집합 s2-s3의 차집합을 s1에 대입
Set *Difference(Set *s1, const Set *s2, const Set *s3);
// 집합 s의 모든 원소를 ​​출력
void Print(const Set *s);
// 집합을 메모리에서 제거
void Terminate(Set *s);
//////////////////////////////////
int Initialize(Set *s, int cap)
{
  s->capacity = cap;
  s->size = 0;
  s->buf = (int *)malloc(sizeof(int) * cap);

  return 0; //성공: 0, 실패 : -1;
}
void Terminate(Set *s)
{
  free(s->buf);
  s->capacity = s->size = 0;
}
void Add(Set *s, int data)
{
  //이미 data 저장되어있는지
  if (IsMember(s, data) != -1)
  {
    return;
  }

  if (s->size < s->capacity)
  {
    s->buf[s->size++] = data;
  }
}
void Print(const Set *s)
{
  printf("size : %d", s->size);
  printf("     {");
  for (int i = 0; i < s->size; i++)
  {
    printf("%d ", s->buf[i]);
  }
  printf("}\n");
}
int IsMember(const Set *s, int data)
{
  for (int i = 0; i < s->size; i++)
  {
    if (data == s->buf[i])
    {
      return i;
    }
  }

  return -1; //데이터 원소가 존재않다면 멤버가아니다(-1반환)
}
void Remove(Set *s, int data)
{
  int index;
  if (index = IsMember(s, data) != -1) //데이터가 존재한다면
  {
    s->buf[index] = s->buf[--s->size]; //인덱스가 삭제되면 제일 끝의 인덱스 삭제된 인덱스 자리로 대입되며 사이즈1감소
  }
}
int Capacity(const Set *s)
{
  return s->capacity;
}
int Size(const Set *s)
{
  return s->size;
}
void Assign(Set *s1, const Set *s2)
{
  int max = s1->capacity < s2->size ? s1->capacity : s2->size;
  for (int i = 0; i < max; i++)
  {
    s1->buf[i] = s2->buf[i];
  }
  s1->size = max;
}
// s1과 s2가 같다면
int Equal(const Set *s1, const Set *s2)
{
  for (int i = 0; i < s1->size; i++)
  {
    int j;
    for (j = 0; j < s2->size; j++)
    {
      if (s1->buf[i] == s2->buf[j])
      {
        break;
      }
      if (j == s2->size) // j for 문이 s2의 원소 만큼 돌았다면
      {
        return 0;
      }
    }
    return 1;
  }
}
Set *Union(Set *s1, const Set *s2, const Set *s3) // 집합 s2, s3의 합집합을 s1에 대입
{
  Assign(s1, s2);
  for (int i = 0; i < s3->size; i++)
  {
    Add(s1, s3->buf[i]);
  }

  return s1;
}
Set *Intersection(Set *s1, const Set *s2, const Set *s3) // 집합 s2, s3의 교집합을 s1에 대입
{
  s1->size = 0;
  for (int i = 0; i < s2->size; i++)
  {
    for (int j = 0; j < s3->size; j++)
    {
      if (s2->buf[i] == s3->buf[j])
      {
        Add(s1, s2->buf[i]);
      }
    }
  }

  return s1;
}
// 집합 s2-s3의 차집합을 s1에 대입
Set* Difference(Set* s1, const Set* s2, const Set* s3)
{
	s1->size = 0;
	for (int i = 0; i < s2->size; ++i)
	{
		int j;
		for ( j = 0; j < s3->size; ++j)
		{
			if (s2->buf[i] == s3->buf[j])
				break;
		}
		if (j == s3->size)
			Add(s1, s2->buf[i]);
	}
	return s1;
}
int main()
{
  Set A;
  Set B;
  Set C;

  Initialize(&A, 10);
  Initialize(&B, 10);
  Initialize(&C, 10);// 집합 초기화

  Add(&A, 1);
  Add(&A, 3);
  Add(&A, 5);

  Add(&B, 1);
  Add(&B, 4);
  Add(&B, 6);

  Difference(&C,&A,&B);// 집합 s2-s3의 차집합을 s1에 대입
  //Intersection(&C,&A,&B);// 집합 s2, s3의 교집합을 s1에 대입
  // Remove(&A, 1);//원소 제거
  //Union(&C,&A,&B);// 집합 s2, s3의 합집합을 s1에 대입
  // Assign(&A, &B);// 집합 s2를 s1으로 대입
  // Equal(&A, &B);//같은지확인

  Print(&A);
  Print(&B);
  Print(&C);

  Terminate(&A);// 집합을 메모리에서 제거
  Terminate(&B);
  Terminate(&C);

  return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//   int capacity; //집합의 최대 크기
//   int size;     //원소의 개수
//   int *buf;     //집합 배열의 주소
// } Set;

// // 집합 초기화
// int Initialize(Set *s, int cap);
// // 집합 원소 확인
// int IsMember(const Set *s, int data);
// // 원소 추가
// void Add(Set *s, int data);
// // 원소 삭제
// void Remove(Set *s, int data);
// // 집합의 저장 가능 최대 원소의 개수
// int Capacity(const Set *s);
// // 원소의 개수
// int Size(const Set *s);
// // 집합 s2를 s1으로 대입
// void Assign(Set *s1, const Set *s2);
// // 집합 s1, s2가 같은지 확인
// int Equal(const Set *s1, const Set *s2);
// // 집합 s2, s3의 합집합을 s1에 대입
// Set *Union(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2, s3의 교집합을 s1에 대입
// Set *Intersection(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2-s3의 차집합을 s1에 대입
// Set *Difference(Set *s1, const Set *s2, const Set *s3);
// // 집합 s의 모든 원소를 ​​출력
// void Print(const Set *s);
// // 집합을 메모리에서 제거
// void Terminate(Set *s);
// //////////////////////////////////
// int Initialize(Set *s, int cap)
// {
//   s->capacity = cap;
//   s->size = 0;
//   s->buf = (int *)malloc(sizeof(int) * cap);

//   return 0; //성공: 0, 실패 : -1;
// }
// void Terminate(Set *s)
// {
//   free(s->buf);
//   s->capacity = s->size = 0;
// }
// void Add(Set *s, int data)
// {
//   //이미 data 저장되어있는지
//   if (IsMember(s, data) != -1)
//   {
//     return;
//   }

//   if (s->size < s->capacity)
//   {
//     s->buf[s->size++] = data;
//   }
// }
// void Print(const Set *s)
// {
//   printf("size : %d", s->size);
//   printf("     {");
//   for (int i = 0; i < s->size; i++)
//   {
//     printf("%d ", s->buf[i]);
//   }
//   printf("}\n");
// }
// int IsMember(const Set *s, int data)
// {
//   for (int i = 0; i < s->size; i++)
//   {
//     if (data == s->buf[i])
//     {
//       return i;
//     }
//   }

//   return -1; //데이터 원소가 존재않다면 멤버가아니다(-1반환)
// }
// void Remove(Set *s, int data)
// {
//   int index;
//   if (index = IsMember(s, data) != -1) //데이터가 존재한다면
//   {
//     s->buf[index] = s->buf[--s->size]; //인덱스가 삭제되면 제일 끝의 인덱스 삭제된 인덱스 자리로 대입되며 사이즈1감소
//   }
// }
// int Capacity(const Set *s)
// {
//   return s->capacity;
// }
// int Size(const Set *s)
// {
//   return s->size;
// }
// void Assign(Set *s1, const Set *s2)
// {
//   int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//   for (int i = 0; i < max; i++)
//   {
//     s1->buf[i] = s2->buf[i];
//   }
//   s1->size = s2->size;
// }
// //s1과 s2가 같다면
// int Equal(const Set *s1, const Set *s2)
// {
//   for (int i = 0; i < s1->size; i++)
//   {
//     int j;
//     for (j = 0; j< s2->size; j++)
//     {
//       if (s1->buf[i] == s2->buf[j])
//       {
//         break;
//       }
//       if (j == s2->size)//j for 문이 s2의 원소 만큼 돌았다면
//       {
//         return 0;
//       }

//     }
//     return 1;
//   }

// }
// int main()
// {
//   Set A;
//   Set B;

//   Initialize(&A, 10);
//   Initialize(&B, 10);

//   Add(&A, 1);
//   Add(&A, 3);
//   Add(&A, 5);

//   Add(&B, 1);
//   Add(&B, 4);
//   Add(&B, 6);

//   //Remove(&A, 1);

//   Assign(&A,&B);
//   Equal(&A,&B);
//   Print(&A);
//   Print(&B);
//   Terminate(&A);
//   Terminate(&B);

//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//   int capacity; //집합의 최대 크기
//   int size;     //원소의 개수
//   int *buf;     //집합 배열의 주소
// } Set;

// // 집합 초기화
// int Initialize(Set *s, int cap);
// // 집합 원소 확인
// int IsMember(const Set *s, int data);
// // 원소 추가
// void Add(Set *s, int data);
// // 원소 삭제
// void Remove(Set *s, int data);
// // 집합의 저장 가능 최대 원소의 개수
// int Capacity(const Set *s);
// // 원소의 개수
// int Size(const Set *s);
// // 집합 s2를 s1으로 대입
// void Assign(Set *s1, const Set *s2);
// // 집합 s1, s2가 같은지 확인
// int Equal(const Set *s1, const Set *s2);
// // 집합 s2, s3의 합집합을 s1에 대입
// Set *Union(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2, s3의 교집합을 s1에 대입
// Set *Intersection(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2-s3의 차집합을 s1에 대입
// Set *Difference(Set *s1, const Set *s2, const Set *s3);
// // 집합 s의 모든 원소를 ​​출력
// void Print(const Set *s);
// // 집합을 메모리에서 제거
// void Terminate(Set *s);
// //////////////////////////////////
// int Initialize(Set *s, int cap)
// {
//   s->capacity = cap;
//   s->size = 0;
//   s->buf = (int *)malloc(sizeof(int) * cap);

//   return 0; //성공: 0, 실패 : -1;
// }
// void Terminate(Set *s)
// {
//   free(s->buf);
//   s->capacity = s->size = 0;
// }
// void Add(Set *s, int data)
// {
//   //이미 data 저장되어있는지
//   if (IsMember(s, data) != -1)
//   {
//     return;
//   }

//   if (s->size < s->capacity)
//   {
//     s->buf[s->size++] = data;
//   }
// }
// void Print(const Set *s)
// {
//   printf("size : %d", s->size);
//   printf("     {");
//   for (int i = 0; i < s->size; i++)
//   {
//     printf("%d ", s->buf[i]);
//   }
//   printf("}\n");
// }
// int IsMember(const Set *s, int data)
// {
//   for (int i = 0; i < s->size; i++)
//   {
//     if (data == s->buf[i])
//     {
//       return i;
//     }
//   }

//   return -1; //데이터 원소가 존재않다면 멤버가아니다(-1반환)
// }
// void Remove(Set *s, int data)
// {
//   int index;
//   if (index = IsMember(s, data) != -1) //데이터가 존재한다면
//   {
//     s->buf[index] = s->buf[--s->size]; //인덱스가 삭제되면 제일 끝의 인덱스 삭제된 인덱스 자리로 대입되며 사이즈1감소
//   }
// }
// int Capacity(const Set *s)
// {
//   return s->capacity;
// }
// int Size(const Set *s)
// {
//   return s->size;
// }
// void Assign(Set *s1, const Set *s2)
// {
//   int max = s1->capacity < s2->size ? s1->capacity : s2->size;
//   for (int i = 0; i < max; i++)
//   {
//     s1->buf[i] = s2->buf[i];
//   }
//   s1->size = s2->size;
// }
// int main()
// {
//   Set A;
//   Initialize(&A, 10);
//   Add(&A, 1);
//   Add(&A, 3);
//   Add(&A, 5);
//   Remove(&A, 1);
//   Print(&A);
//   Terminate(&A);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//   int capacity; //집합의 최대 크기
//   int size;     //원소의 개수
//   int *buf;     //집합 배열의 주소
// } Set;

// // 집합 초기화
// int Initialize(Set *s, int cap);
// // 집합 원소 확인
// int IsMember(const Set *s, int data);
// // 원소 추가
// void Add(Set *s, int data);
// // 원소 삭제
// void Remove(Set *s, int data);
// // 집합의 저장 가능 최대 원소의 개수
// int Capacity(const Set *s);
// // 원소의 개수
// int Size(const Set *s);
// // 집합 s2를 s1으로 대입
// void Assign(Set *s1, const Set *s2);
// // 집합 s1, s2가 같은지 확인
// int Equal(const Set *s1, const Set *s2);
// // 집합 s2, s3의 합집합을 s1에 대입
// Set *Union(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2, s3의 교집합을 s1에 대입
// Set *Intersection(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2-s3의 차집합을 s1에 대입
// Set *Difference(Set *s1, const Set *s2, const Set *s3);
// // 집합 s의 모든 원소를 ​​출력
// void Print(const Set *s);
// // 집합을 메모리에서 제거
// void Terminate(Set *s);
// //////////////////////////////////
// int Initialize(Set *s, int cap)
// {
//   s->capacity = cap;
//   s->size = 0;
//   s->buf = (int *)malloc(sizeof(int) * cap);

//   return 0; //성공: 0, 실패 : -1;
// }
// void Terminate(Set *s)
// {
//   free(s->buf);
//   s->capacity = s->size = 0;
// }
// void Add(Set *s, int data)
// {
//   //이미 data 저장되어있는지
//   if (IsMember(s, data) != -1)
//   {
//     return;
//   }

//   if (s->size < s->capacity)
//   {
//     s->buf[s->size++] = data;
//   }
// }
// void Print(const Set *s)
// {
//   printf("size : %d", s->size);
//   printf("     {");
//   for (int i = 0; i < s->size; i++)
//   {
//     printf("%d ", s->buf[i]);
//   }
//   printf("}\n");
// }
// int IsMember(const Set *s, int data)
// {
//   for (int i = 0; i < s->size; i++)
//   {
//     if (data == s->buf[i])
//     {
//       return i;
//     }
//   }

//   return -1; //데이터 원소가 존재않다면 멤버가아니다(-1반환)
// }
// void Remove(Set *s, int data)
// {
//   int index;
//   if (index = IsMember(s, data) != -1)//데이터가 존재한다면
//   {
//     s->buf[index] = s->buf[--s->size];//인덱스가 삭제되면 제일 끝의 인덱스 삭제된 인덱스 자리로 대입되며 사이즈1감소
//   }
// }
// int main()
// {
//   Set A;
//   Initialize(&A, 10);
//   Add(&A, 1);
//   Add(&A, 3);
//   Add(&A, 5);
//   Remove(&A, 1);
//   Print(&A);
//   Terminate(&A);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//   int capacity; //집합의 최대 크기
//   int size;     //원소의 개수
//   int *buf;     //집합 배열의 주소
// } Set;

// // 집합 초기화
// int Initialize(Set *s, int cap);
// // 집합 원소 확인
// int IsMember(const Set *s, int data);
// // 원소 추가
// void Add(Set *s, int data);
// // 원소 삭제
// void Remove(Set *s, int data);
// // 집합의 저장 가능 최대 원소의 개수
// int Capacity(const Set *s);
// // 원소의 개수
// int Size(const Set *s);
// // 집합 s2를 s1으로 대입
// void Assign(Set *s1, const Set *s2);
// // 집합 s1, s2가 같은지 확인
// int Equal(const Set *s1, const Set *s2);
// // 집합 s2, s3의 합집합을 s1에 대입
// Set *Union(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2, s3의 교집합을 s1에 대입
// Set *Intersection(Set *s1, const Set *s2, const Set *s3);
// // 집합 s2-s3의 차집합을 s1에 대입
// Set *Difference(Set *s1, const Set *s2, const Set *s3);
// // 집합 s의 모든 원소를 ​​출력
// void Print(const Set *s);
// // 집합을 메모리에서 제거
// void Terminate(Set *s);
// //////////////////////////////////
// int Initialize(Set *s, int cap)
// {
//   s->capacity = cap;
//   s->size = 0;
//   s->buf = (int *)malloc(sizeof(int) * cap);

//   return 0; //성공: 0, 실패 : -1;
// }
// void Terminate(Set *s)
// {
//   free(s->buf);
//   s->capacity = s->size = 0;
// }
// void Add(Set *s, int data)
// {
//   //이미 data 저장되어있는지
//   if (IsMember(s, data) != -1)
//   {
//     return ;
//   }

//   if (s->size < s->capacity)
//   {
//     s->buf[s->size++] = data;
//   }
// }
// void Print(const Set *s)
// {
//   printf("size : %d", s->size);
//   printf("     {");
//   for (int i = 0; i < s->size; i++)
//   {
//     printf("%d ", s->buf[i]);
//   }
//   printf("}\n");
// }
// int IsMember(const Set *s, int data)
// {
//   for (int i = 0; i < s->size; i++)
//   {
//     if (data == s->buf[i])
//     {
//       return i;
//     }
//   }

//   return -1; //데이터 원소가 존재않다면 멤버가아니다(-1반환)
// }
// int main()
// {
//   Set A;
//   Initialize(&A, 10);
//   Add(&A, 1);
//   Add(&A, 3);
//   Add(&A, 5);
//   Print(&A);
//   Terminate(&A);
//   return 0;
// }