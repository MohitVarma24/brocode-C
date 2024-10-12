#include<stdio.h>
int main()
{
    int math,phy,mp;
    printf("enter math marks\n");
    scanf("%d",&math);

    mp=math+phy;

    if(math>=65)
    {
        printf("enter your physics marks\n");
        scanf("%d",&phy);
        if(phy>=55)
        printf("you are eligible");
        if(mp>=140)
        printf("you are eligible\n");
        
        else
            printf("You arent eligible\n");
        }
    else
    {
        printf("you are not eligible");
    }
        return 0;
}