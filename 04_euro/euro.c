#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){

    //DECLARACION DE VARIABLES
    int i,j,resultado;

    resultado=10;

    char spain[6]="Spain\0";
    char croacia[8]="Croatia\0";
    char italy[6]="Italy\0";
    char albania[8]="Albania\0";

    //LOGICA
    if (argc==3){
        i=0;
        j=0;
        while((argv[1][i]!='\0') && (resultado!=-1)){
            if((argv[1][i]==spain[i])||(argv[1][i]==albania[i])){

            }else{
                resultado=-1;
            }
            i++;
        }
        while((argv[2][j]!='\0') && (resultado!=-1) && (argv[2][j]!=argv[1][j])){
                if(argv[2][j]==croacia[j]){
                    resultado=1;
                }else if(argv[2][j]==italy[j]){
                    resultado=1;
                }    
                else if(argv[2][j]==spain[j] ){
                        resultado=2; 
                }
                else{
                    resultado=-1;
                }
                j++;
        }
        

        if (resultado==0)
            printf("X\n");
        else if(resultado==1)
            printf("1\n");
        else if(resultado==2)
            printf("2\n");
        else 
            printf("Arguments Error\n");
    }else{
        printf("Arguments Error\n");
    }
    

    return (0);
}