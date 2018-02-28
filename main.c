#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int arg, char **argv)
{
    char *a;
    a = (char *)calloc(20, sizeof(char));
    printf("World is %s\n",a);
    strcpy(a,"Hello");
    printf("World is %s\n",a);
    free(a);
    a = NULL;

}

