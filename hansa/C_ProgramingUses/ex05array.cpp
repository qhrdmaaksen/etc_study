#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j, sum1=0, sum2=0;
  int score[3][2]={{200,100},{180,90},{150,75}};
  for (int i = 0; i < 3; i++)
  {
    sum1 = sum1+score[i][0];
    sum2 = sum2+score[i][1];
  }
  printf("총점의 평균은 %f\n", sum1/3.0);
  printf("평균의 평균은 %f\n", sum2/3.0);
  
  return 0;
}

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
