#include <stdio.h>

int main()
{
    int temp = 0;
    printf("请输入要定义的常量值：\n");

    scanf("%d",&temp);
    const int anser = temp;
    printf("----------------------------------------------------------\n");

    printf("您定义的常量为%d",anser);

}
