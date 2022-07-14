// Programa calcula média e diz se aluno foi aprovado ou reprovado.

int main(){
    float nota1, nota2, soma, media;
    
    printf ("Digite a primeira nota:\n");
    scanf ("%2f", &nota1);
    printf ("Digite a segunda nota:\n");
    scanf ("%2f", &nota2);
    
    soma=nota1+nota2;
    media=soma/2;
    
    if (media>7){
        printf ("Aluno aprovado!");
    } else {
        printf ("Aluno reprovado!");
    } return 0;
}