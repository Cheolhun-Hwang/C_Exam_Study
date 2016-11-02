#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    srand((unsigned)time(NULL));
    int sr = rand()% 6 + 1 ;
    sleep(2);
    printf("%d\n", sr);

    

    return 0;
}