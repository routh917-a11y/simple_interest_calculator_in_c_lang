#include<stdio.h>
int main()
{
    float p,r,si,sum;
    int t;
    printf("welcome to the simple intrest calculator >.< ");
    printf("\n\nwhat is ur principal amount(p):");
    scanf("%f",&p);
    printf("what is ur rate of intrest(r):");
    scanf("%f",&r);
    printf("what is ur time in year(t):");
    scanf("%d",&t);

    // working formula of si >,<
    si=(p*r*t)/100;
    
    printf("here is ur intrest money for the %d years = %.2f",t,si);
    sum = p+si;
    printf("\nhere is ur total money  = %.2f",sum);
    return 0;
}
