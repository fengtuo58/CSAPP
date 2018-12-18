#include <stdio.h>

int main()
{
  struct prob{
    int *p;
    typedef struct ty {
      int x;
      int y;
    } TYPE;
    struct prob *next;
  };
  printf("%lu, ", sizeof(struct prob));
  return(0);
}
