#include <stdio.h>

int main()
{
    int prince = 0;
    int n = 0;
    int number = 0;

    printf("请输入你的物品单价：\n");
    scanf("%d",&prince);
    printf("请输入物品数量：\n");
    scanf("%d",&n);

    number = prince*n;

    printf("-------------------\n");
    printf("你要支付的价格为：%d",number);

    return 0;
}
