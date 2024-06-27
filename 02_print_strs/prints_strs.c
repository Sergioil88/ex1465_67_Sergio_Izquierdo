#include <unistd.h>

void print_char(char c){
    write(1,&c,1);
}

int main(int argc,char **argv){

    //DECLARACION DE VARIABLES
    int numArgc,i,tamanoArgumento;

    //INICIALIZACION DE VARIABLES
    numArgc=argc-1;

    //LOGICA
    while(numArgc>0){
        if (numArgc%2!=0){
            i=0;
            while(argv[numArgc][i]!='\0'){
                print_char(argv[numArgc][i]);
                i++;
            }
            write(1," ",1);
        }else{
            tamanoArgumento=0;
            while(argv[numArgc][tamanoArgumento]!='\0'){
                tamanoArgumento++;
            }
            while(tamanoArgumento>=0){
                print_char(argv[numArgc][tamanoArgumento]);
                tamanoArgumento--;
            }
        }
        numArgc--;
    }

    return (0);
}