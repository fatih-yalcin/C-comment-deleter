// Author: Fatih Yalçın
// Computer Engineering License Student
// Ankara University
// June 11th 2021

#include <stdio.h>
#include <stdlib.h>

void slash()
{
    char temp;
    scanf("%c", &temp);
    if (temp == '/')
        while (1)
        {
            scanf("%c", &temp);
            if (temp == '\n')
            {
                printf("\n");
                break;
            }
        }
    else if (temp == '*') // /* */
    {
        while (1)
        {
            scanf("%c", &temp);
            if (temp == '*')
            {
                scanf("%c", &temp);
                if (temp == '/')
                    break;
            }
        }
    }
    else
    {
        printf("/%c", temp);
    }
}

void double_apostrophe()
{
    char temp;
    while (1)
    {
        scanf("%c", &temp);
        if (temp == '\\'){
            scanf("%c", &temp);
            printf("%c", temp);
            continue;
            }
        else if (temp == '"'){
            printf("%c", temp);
            break;
        }
        printf("%c", temp);
    }
}

void single_apostrophe()
{
    char temp;
    

    scanf("%c", &temp);
    if (temp == '\\')
    {
        scanf("%c", &temp);
        printf("\\%c'", temp);
        getchar();
    }
    else
    {
        printf("%c", temp);
        getchar();
        printf("'");
    }
    
}

void main()//(int argc, char** argv)
{
    //FILE* fp = fopen(argv[1], "r");
    
    char temp;

    while (scanf("%c", &temp) != EOF)
    {
        if (temp == '\'')
        {
            printf("'");
            single_apostrophe();
        }
        else if (temp == '"')
        {
            printf("%c", temp);
            double_apostrophe();
        }
        else if (temp == '/')
        {
            slash();
        }
        else
            printf("%c", temp);
    }

}
