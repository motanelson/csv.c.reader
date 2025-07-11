#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char c[4096]="\0";
    int i=0;
    printf("\033c\033[43;30m\n\n");
    if (argc<2)return 1;
    printf("%s\n--------------------------------\n",argv[1]);
    FILE *f1;
    f1=fopen(argv[1],"r");
    i=0;
    if (f1==NULL) return 1;
    while(!feof(f1)){
        
        if(fgets(c,4095,f1)!=NULL){
            i=0;
            while(c[i]!='\0'){
                if(c[i]==',')c[i]=' ';
                i++;
            }
            system(c);
        }
        
    }
    fclose(f1);
    return 0;
}
