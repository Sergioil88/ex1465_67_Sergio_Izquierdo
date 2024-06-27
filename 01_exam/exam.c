#include <unistd.h>

int main(int argc,char **argv){

    //DECLARACION DE VARIABLES
    int numArgc,i,digito;

    //INICIALIZACION DE VARIABLES
    numArgc=argc-1;
    digito=0;
    i=0;

    while(numArgc>0){
        while(argv[numArgc][i]!='\0'){
            if (argv[numArgc][i] >= 48 && argv[numArgc][i] <= 57){
                digito=1;
            }
            i++;
        }
        i=0;
        numArgc--;
    }

    if(numArgc==1 || digito==1 || digito==0){
        write(1,"exam\n",6);
    }

    return (0);
}