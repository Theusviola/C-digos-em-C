// Programa pede suas notas e calcula média.

int main(){
    float nota1, nota2, soma, media;
    
    printf ("Digite a nota do primeiro bimestre:\n");
    scanf ("%2f", &nota1);
    printf ("Digite a nota do segundo bimestre:\n");
    scanf ("%2f", &nota2);
    
    soma=nota1+nota2;
    media=soma/2;
    
    printf ("Sua média é: %2f", media);
}