
#include <stdio.h>

#define NUM 200

int main(int argc, char **argv)
{
    int data[NUM], num, i, res;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }
    sum_abs_(&data[0], &num,&res);
    printf("sum=%d\n", res );
    return 0;
}
