// Programa pede ano de nascimento de diz se você é maior ou menor de idade.

int main()
{
int ano;

printf ("Em que ano você nasceu? \n");
scanf ("%d", &ano);

if (ano<2004){
    printf("Você é maior de idade!");
} else {
    printf("Você é menor de idade!");
}

}