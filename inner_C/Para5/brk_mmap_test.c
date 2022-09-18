//brk_mmap_test.c
#include<stdio.h>
#include<stdlib.h>

int global_val;

int main(void)
{
    int *p = NULL ;
    printf ("&global_val %p\n", &global_val);
    p = (int *)malloc(100);
    printf ("&mem_100 = %p\n",p );
    free(p);
    p = (int *)malloc(1024*256);
    printf("&mem_256K = %p\n", p );
    free(p);
    
    
    return 0;
}