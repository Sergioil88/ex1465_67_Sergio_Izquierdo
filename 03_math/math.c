#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){

    //DECLARACION DE VARIABLES
    int num,i;
    int resultado[10];
    char *par;
    //INICIALIZACION DE VARIABLES
    i=1;
    

    //LOGICA
    if (argc==2 && atoi(argv[1])>0){
            while(i<=10){
                num=atoi(argv[1]);
                resultado[i]=i*num;
                if (resultado[i]%2==0){
                    par="<Par>";
                }else{
                    par="<Impar>";
                }
            printf("%d x %d = %d %s\n",i,num,resultado[i],par);
            i++;
        }
        printf("\n");
        printf("Array de resultados:\n");
        i=1;
        while(i<10){
            printf("%d, ",resultado[i]);
            i++;
        }
        printf("%d\n",resultado[i]);
    }else{
        printf("Error\n");
    }
    

    return (0);
}