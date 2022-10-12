#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int nota1, nota2, media;
    
    printf("\n\t<<<<<<MÉDIA DE DUAS NOTAS>>>>>>");
    printf("\nDigite a primeira nota: ");
    scanf("%d",&nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%d",&nota2);
    media = (nota1 + nota2) / 2;
    printf("\nA média das duas notas é: %d",media);
    return 0;

}
