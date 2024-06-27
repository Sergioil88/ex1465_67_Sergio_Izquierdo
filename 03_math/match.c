#include <unistd.h>

void print_char(char c){
    write(1,&c,1);
}

int main(int argc,char **argv){

    //DECLARACION DE VARIABLES
    int num,i,tamanoArgumento,quitarEspacios;

    //INICIALIZACION DE VARIABLES
    numArgc=1;
    num=atoi(argv[1]);

    //LOGICA
    if (argc==1){
        
    }else{
        write(1,"Error\n",6);
    }
    

    return (0);
}