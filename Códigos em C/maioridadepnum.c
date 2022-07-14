//Programa pede idade e diz se você é maior ou menor de idade.

int main()
{
int idade;

printf ("Coloque sua idade: \n");
scanf ("%d", &idade);

if (idade>18){
    printf("Você é maior de idade!");
} else {
    printf("Você é menor de idade!");
}

}