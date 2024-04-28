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

int collectData(int count)
{
    sprintf(nameRelatory, "relatorio_aluno_%d.txt", count);
    char relatory[TAM];
    printf("Digite o nome do aluno: ");
    fgets(studentName, 50, stdin);

    printf("Digite a nota 01: ");
    scanf("%f", &n1);
    while (getchar() != '\n');  // Limpa buffer

    printf("Digite a nota 02: ");
    scanf("%f", &n2);
    while (getchar() != '\n');  // Limpa buffer

    printf("Digite a nota 03: ");
    scanf("%f", &n3);
    while (getchar() != '\n');  // Limpa buffer

    media = (n1 + n2 + n3)/3;

    sprintf(relatory, "A nota 01: %.2f\nA nota 02: %.2f\nA nota 03: %.2f\nMedia do aluno foi: %.2f", n1, n2, n3, media);
    strcat(studentName, relatory);
    strcpy(relatory, studentName);

    FILE *student = fopen(nameRelatory, "w");
    fprintf(student, "%s", relatory);

    fclose(student);


}