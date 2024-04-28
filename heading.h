//LIBS
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


//CONSTS
#define DESIGN "⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒⇒"
#define TITLE  "⇒⇒⇒⇒⇒⇒⇒⇒Bem-vindo ao meu Programa⇒⇒⇒⇒⇒⇒⇒⇒⇒"
#define TAM 100

//VARS
static int count = 0;
static int codeExitMyProgram = 0;
static float n1, n2, n3, media;
static char usrChoice[TAM];
static int lenUsrChoice = 0;
static int i = 0;
static char toEnter[TAM] = "sim";


//FUNCTIONS PROTOTYPES
int viewScreenMyProgram();
int exitOrNotMyProgram(char usrChoice[TAM]);