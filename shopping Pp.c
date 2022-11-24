#include<stdio.h>
#include<stdio.h>

int main()

{
    float item =food,soap,suger,sum;
     food=150;
        printf("enter number of food:");
        scanf("%d",&item);
        food=item*food;

        soap=100;
        printf("enter number of soap");
        scanf("%d",&item);
        soap=item*soap;

        suger=200;
        printf("enter number of sugar");
        scanf("%d",&item);
        suger=item*suger;
        printf("supermarket\n");
        printf("item\t\tprice\n");
        printf("food\t%d\nsoapt%d\nsugar\t%d\n",food,soap,sugar);
        sum=food+soap+sugar;
        printf("the total bill amount is:,%d",sum);
        scanf("%d",&sum);

        return 0;
}

