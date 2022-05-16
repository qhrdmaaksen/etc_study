#include <stdio.h>

struct student {
  int num; 
  float kor; 
  float eng; 
  float c; 
};
int main(int argc, char const *argv[])
{
  struct student score[4] = {
    {1,100,90,80},
    {2,90,90,80},
    {3,100,100,100},
    {4,100,100,100},
  };
  for (int i = 0; i < 3; i++)
  {
    printf("%d 번의 성적: %4.1f %4.1f %4.1f \n ", score[i].num, score[i].kor,score[i].eng, score[i].c);
  }
  
  return 0;
}
// #include <stdio.h>

// struct student {
//   int num; // 학번
//   char dept[20]; // 학과
//   char name[20]; // 이름
//   int grade; // 학년
// };
// int main(int argc, char const *argv[])
// {
//   struct student stInfo = {1, "sw", "kim", 2};
//   printf("num = %d\n", stInfo.num);
//   printf("dept = %s\n ", stInfo.dept);
//   printf("name = %s\n ", stInfo.name);
//   printf("grade = %d\n ", stInfo.grade);
//   return 0;
// }
