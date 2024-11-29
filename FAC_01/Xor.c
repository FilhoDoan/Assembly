 #include <stdio.h>

// 1 = falso e 2 = verdadeiro
/*

XOR
| A | B | S |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

*/ 

int main()
{

    int numero_de_operacoes;

    scanf("%d\n", &numero_de_operacoes);

    for (int i = 0; i < numero_de_operacoes; i++)
    {
        int x, y; 
        scanf("%d %d", &x, &y);
        if (x != y)
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
        
} 

