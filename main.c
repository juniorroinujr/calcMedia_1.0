#include "heading.h"

int main(int argc, char *argv[]){

    while(codeExitMyProgram != 60){

        count++;
        system("clear");
        viewScreenMyProgram();

        puts("\nEntrar ou Sair [s/n]: ");
        fgets(usrChoice, 10, stdin);

        codeExitMyProgram = exitOrNotMyProgram(usrChoice);

        if(codeExitMyProgram == 60){
            system("cowsay -f ghostbusters 'Volte sempre!'");
            break;
        }
        

    }
    
    return 0;
}