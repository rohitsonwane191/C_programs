 #include<stdio.h>
#define pi 3.14
void main()
{int redius;
char character;
float area,side,hight,width;
printf("enter character");
scanf("%c",&character);
switch (character)
{
case 's': printf("enter the side");
scanf("%d",&side);
area=side*side;
printf("%f",area);
    break;
default:
    break;
    case 'c': printf("enter the redius");
scanf("%d",&redius);
area=pi*redius*redius;
printf("%f",area);
    break;
case 'r': printf("enter the higth and width");
scanf("%f%f",&hight,&width);
area=hight*width;
printf("%f",area);
    break;
}    
}