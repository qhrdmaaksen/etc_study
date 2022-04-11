#include <stdio.h>
#define N 5 // 학생 번호
int main(int argc, char const *argv[])
{
  int num[N] = {0};
  int sum = 0;
  float avg;

  for (int i = 0; i < N; i++)
  {
    printf("%d 번째 학생의 봉사시간 = ", i + 1);
    scanf("%d", &num[i]);
    sum = sum + num[i];
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= num[i]; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("봉사시간 합 = %d 평균 = %f\n", sum, sum / (float)N);

  return 0;
}

// #include <stdio.h>
// #define N 2
// #define S 3

// int main(int argc, char const *argv[])
// {
//   int num[N][S] = {0};
//   int sum[N] = {0};
//   int sum2[S] = {0};

//   for (int i = 0; i < N; i++)
//   {
//     for (int j = 0; j < S; j++)
//     {
//       printf("%d 반의 %d 번째 성적 = ", i + 1, j + 1);
//       scanf("%d", &num[i][j]);
//       sum[i] = sum[i] + num[i][j];
//     }
//   }

//   for (int i = 0; i < S; i++)
//   {
//     for (int j = 0; j < N; j++)
//     {
//       sum2[i] += num[j][i];
//     }
//   }

//   for (int i = 0; i < N; i++)
//   {
//     printf("%d 반 성적의 합 = %d  평균 = %f\n", i + 1, sum[i], sum[i] / (float)S);
//   }
//   for (int i = 0; i < S; i++)
//   {
//     printf("%d 번째 과먹의 성적의 합 = %d 평균 = %f\n", i + 1, sum2[i], sum2[i] / (float)N);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int num[][2] = { 1, 2, 3, 4, 5, 6, 7, 8};
//   int size ;
//   size = sizeof(num) / sizeof(num[0]);
//   for (int i = 0; i < size; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       printf("num[%d][%d] = %d\n", i, j, num[i][j]);
//     }
//   }

//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int num[2][2] = {{1,2}, {3,4}};
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       printf("num[%d][%d]=%d\n", i, j, num[i][j]);
//     }
//   }

//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int a[] = {1,2,3,4};
//   int size;
//   size = sizeof(a) / sizeof(a[0]);
//   printf("%d", size);
//   return 0;
// }
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//   int num1[2][2] = {{1,0}, {100,200}};
//   int num2[2][2] = {1,2,3};

//   int num3[2][2] = {0,0};
//   int num4[2][2] = {1,2};

//   int num5[][2] = {1,2,3,4,5,6};

//   int size;

//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       printf("num1[%d][%d] 출력 값 = %d\n", i, j, num1[i][j]);
//       printf("num2[%d][%d] 출력 값 = %d\n", i, j, num2[i][j]);
//       printf("num3[%d][%d] 출력 값 = %d\n", i, j, num3[i][j]);
//       printf("num4[%d][%d] 출력 값 = %d\n", i, j, num4[i][j]);
//     }
//   }
//   size = sizeof(num5)/sizeof(num5[0]);
//   for (int i = 0; i < size; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       printf("num5[%d][%d] 출력 값 = %d\n", i, j, num5[i][j]);
//     }
//   }
//   return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int gugu[9][9], i, j;
//   int n;

//   printf("몇단까지 출력할까요 : ");
//   scanf("%d", &n);
//   for (i = 0; i < n - 1; i++)
//   {
//     printf("%d 단   \n", i + 2);
//     for (j = 0; j < 9; j++)
//     {
//       gugu[i][j] = (i + 2) * (j + 1);
//       printf("%d * %d = %d\t", i + 2, j + 1, gugu[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int score[2][3] = {{97, 100, 88}, {100, 99, 100}};
//   int i, j, sum[2] = {0}, avg[2] = {0};

//   for (i = 0; i < 2; i++)
//   {
//     for (j = 0; j < 3; j++)
//     {
//       printf("%d 번 학생의 %d 번째 성적 입력 : %d\n", i + 1, j + 1, score[i][j]);
//       sum[i] = sum[i] + score[i][j];
//       avg[i] = sum[i] / 3;
//     }
//     printf("%d 번 학생의 총점 : %d, 평균 : %d\n", i + 1, sum[i], avg[i]);
//   }
//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int score[2][3]={{97,100,88},{100,99,100}};
//   int i, j, sum[2]={0},avg[2]={0};
//   printf("1 번 학생의 1 번째 성적 입력 : %d\n", score[0][0]);
//   printf("1 번 학생의 2 번째 성적 입력 : %d\n", score[0][1]);
//   printf("1 번 학생의 3 번째 성적 입력 : %d\n", score[0][2]);
//   printf("2 번 학생의 1 번째 성적 입력 : %d\n", score[1][0]);
//   printf("2 번 학생의 2 번째 성적 입력 : %d\n", score[1][1]);
//   printf("2 번 학생의 3 번째 성적 입력 : %d\n", score[1][2]);
//   sum[1]= score[0][0] + score[0][1] + score[0][2];
//   sum[2]= score[1][0] + score[1][1] + score[1][2];
//   avg[1]= sum[1] / 3;
//   avg[2]= sum[2] / 3;
//   printf("1 번 학생의 총점 : %d, 평균 : %d\n",sum[1], avg[1]);
//   printf("2 번 학생의 총점 : %d, 평균 : %d\n",sum[2], avg[2]);
//   return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int i, j, sum1=0, sum2=0;
//   int score[3][2]={{200,100},{180,90},{150,75}};
//   for (int i = 0; i < 3; i++)
//   {
//     sum1 = sum1+score[i][0];
//     sum2 = sum2+score[i][1];
//   }
//   printf("총점의 평균은 %f\n", sum1/3.0);
//   printf("평균의 평균은 %f\n", sum2/3.0);

//   return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//   int score[3][2]={{200,100},{180,90},{150,75}};
//   for (int i = 0; i < 3; i++)
//   {
//     printf("%d번 학생의 총점과 평균: ", i+1);
//     for (int j = 0; j < 2; j++)
//     {
//       printf("score[%d][%d]=%d\t",i,j,score[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//   int a[5][3] = {{1,2,3},{1,0,0},{0,0,0},{0,0,0},{0,0,0}};

//   for (int i = 0; i < 5; i++){

//     for (int j = 0; j < 3; j++)
//       printf("a[%d][%d]=%d\t",i,j,a[i][j]);
//       printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   int a[3] = {1, 2, 3};
//   int b[3] = {1};
//   int c[3];
//   int d[3] = {0};
//   int e[3] = {0, 0};

//   for (int i = 0; i < 3; i++)
//   {
//     printf("a[3] = %d\n", a[i]);
//   }
//   for (int j = 0; j < 3; j++)
//   {
//     printf("b[3] = %d\n", b[j]);
//   }
//   for (int k = 0; k < 3; k++)
//   {
//     printf("c[3] = %d\n", c[k]);
//   }
//   for (int l = 0; l < 3; l++)
//   {
//     printf("d[3] = %d\n", d[l]);
//   }
//   for (int m = 0; m < 3; m++)
//   {
//     printf("e[3] = %d\n", e[m]);
//   }

//   return 0;
// }
// #include <stdio.h>
// #define N 6

// int main(int argc, char const *argv[])
// {
//   float height[N] = {0};
//   for (int i = 0; i < N; i++)
//   {
//     printf("%f\n", height[i]);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//   float height[6] = {0};
//   printf("%f\n", height[0]);
//   printf("%f\n", height[1]);
//   printf("%f\n", height[2]);
//   printf("%f\n", height[3]);
//   printf("%f\n", height[4]);
//   printf("%f\n", height[5]);
//   return 0;
// }
