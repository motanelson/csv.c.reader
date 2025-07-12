#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char c[4096]="\0";
    char *cc=NULL;
    char *ccc=NULL;
    char *cccc=NULL;
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
            cc=c;
            ccc=c;
            cccc=c;
            while(c[i]!='\0'){
                if(c[i]==','){
                   ccc=c+i+1;
                   c[i]='\0';
                   printf ("%s\n",cc); 
                   cc=ccc;
                 }
                i++;
            }
            printf ("%s\n",cc);
        }
        
    }
    fclose(f1);
    return 0;
}
