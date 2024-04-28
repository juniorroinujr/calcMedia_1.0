#include "heading.h"

int exitOrNotMyProgram(char usrChoice[TAM])
{

    lenUsrChoice = strlen(usrChoice);

    for (i = 0; i < lenUsrChoice; i++)
    {

        if (i == 0)
        {

            if (usrChoice[i] != toEnter[i])
            {
                codeExitMyProgram = 60;
            }
        }
    }

    return codeExitMyProgram;
}