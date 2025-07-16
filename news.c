#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//gcc -o news news.c -lm
int main(){
    char names[4096];
    FILE *f1;
    printf("\033c\033[43;30m\ngive a new file name ?\n");
    fgets(names,4095,stdin);
    names[strlen(names)-1]=0;
    f1=fopen(names,"w");
    fclose(f1);
    return 0;
}