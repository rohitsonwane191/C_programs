#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    // {

    //     printf(" character is vowel");
    // }
    // else
    // printf(" not vowel");
switch(ch)
{
    case 'a'||'e'||'i'||'0'||'u':printf("charactor is wovel");
    break;
    default:printf("consonenet");
}
}