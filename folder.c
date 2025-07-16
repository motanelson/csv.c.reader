#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
//gcc -o folder folder.c -lm
int main(){
    char c[4096]="\0";
    char *cc=NULL;
    char *ccc=NULL;
    char *cccc=NULL;
    char *a[4096];
    int i=0;
    int n=0;
    int nn=0;

    printf("\033c\033[43;30m\ngive folders separete by space ?\n");
    fgets(c,4095,stdin);
    c[strlen(c)-1]=0;
    i=0;
    cc=c;
    ccc=c;
    cccc=c;
    n=0;
    while(c[i]!='\0'){
        if(c[i]=='\n')c[i]='\0';
        if(c[i]=='\r')c[i]='\0';
        if(c[i]==' '){
            ccc=c+i+1;
            c[i]='\0';
            a[n]=cc;
            cc=ccc;
            n++;
         }
         i++;
                
     }
     a[n]=cc;
     n++;
     for(nn=0;nn<n;nn++)mkdir (a[nn],0755);

    return 0;
}
