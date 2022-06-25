#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
  char name[30]="NICE";
  char tmp[30]="nicE";
  printf("%d\n", strcmp(name,tmp));

  return 0;
}
