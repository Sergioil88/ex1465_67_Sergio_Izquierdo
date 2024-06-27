#include <unistd.h>

void print_char(char c){
    write(1,&c,1);
}

int main(int argc,char **argv){

    //DECLARACION DE VARIABLES
    int numArgc,i,tamanoArgumento,quitarEspacios;

    //INICIALIZACION DE VARIABLES
    numArgc=1;
    quitarEspacios=1;

    //LOGICA
    if (argc>1){
        while(numArgc<=argc-1){
                if (numArgc%2!=0){
                    i=0;
                    while(argv[numArgc][i]!='\0'){
                        if(argv[numArgc][i]!=' ' || quitarEspacios==0){
                            print_char(argv[numArgc][i]);
                            quitarEspacios=0;
                        }
                        i++;
                    }
                    quitarEspacios=1;
                    write(1,"\n",1);
                }else{
                    tamanoArgumento=0;
                    while(argv[numArgc][tamanoArgumento]!='\0'){
                        tamanoArgumento++;
                    }
                    while(tamanoArgumento>=0){
                        if(argv[numArgc][tamanoArgumento]!=' '){
                            print_char(argv[numArgc][tamanoArgumento]);
                        }
                        tamanoArgumento--;
                    }
                    quitarEspacios=1;
                    write(1,"\n",1);
                }
                numArgc++;
            }
    }else{
        write(1,"\n",1);
    }
    

    return (0);
}