// ---------------------------------------- total palindrom number--------------------------------
// #include<stdio.h>
// void main()
// {
//     int i,s,b,h,t,u,re;
//     for ( i =1111; i <1331; i++)
//     {
//     h=i/1000;
//     t=(i/100)%10;
//     s=(i/10)%10;
//     u=i%10;
//     re=(u*1000)+(s*100)+(t*10)+(h*1);
//     if(i==re)
//     {
//         printf("%d\n",i);
//     }

// }
// }
// --------------------------------- user input and  given number palindrom number--------------------------------------------
#include<stdio.h>
void main()
{
    int i,s,b,h,t,u,re,ini,con,choice=1;
    while(choice==1)
    {
    printf("enter initialization");
    scanf("%d",&ini);
    printf("enter condition");
    scanf("%d",&con);
    for ( i =ini; i <con; i++)
    {
    h=i/1000;
    t=(i/100)%10;
    s=(i/10)%10;
    u=i%10;
    re=(u*1000)+(s*100)+(t*10)+(h*1);
    if(i==re)
    {
        printf("%d\n",i);
    }
    }

    printf("enter choice 1 to continue ");
    scanf("%d",&choice);
}
}