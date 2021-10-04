//Jaderley Fonseca Marins Junior 21.1.4058 BCC201-43

#include<stdio.h>

int main()
{
    int A, B, C, maior, menor, meio;
//Mensagem para digitar os numeros
    printf("Digite os 3 numeros\n");
    scanf("%d%d%d", &A, &B, &C);
    
    //Achando o menor
    if(A <= B && A <= C)
    {
        menor = A;
    }
    if(B <= A && B <= C)
    {
        menor = B;
    }
    if(C <= A && C <= B)
    {
        menor = C;
    }
    //Achando o maior
    if(A >= B && A >= C)
    {
        maior = A;
    }
    if(B >= A && B >= C)
    {
        maior = B;
    }
    if(C >= A && C >= B)
    {
        maior = C;
    }
    //Achando o do meio
    if(A >= B && A >= C)
       if(C <= B)
       { 
           meio = B;
       }
       if(B <= C)
       { 
           meio = C;
       }
    if(B >= A && B >= C)
       if(C <= A)
       { 
           meio = A;
       }
       if(A <= C)
       { 
           meio = C;
       }
    if(C >= A && C >= B)
       if(A <= B)
       { 
           meio = B;
       }
       if(B <= A)
       { 
           meio = A;
       }
//Dando o resultado
    printf("Menor = %d\n Meio = %d\n Maior = %d\n", menor, meio, maior);
    return 0;

    
   

}