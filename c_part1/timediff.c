#include <stdio.h>

int main()
{
    int hour1 = 0,hour2 = 0,min1 = 0,min2 = 0;
    int minsum1 = 0,minsum2 = 0,minsum3 = 0;
    int hourres = 0,minres = 0;



    printf("请输入时间1的小时与分钟,用空格分开\n");
    scanf("%d %d",&hour1,&min1);

    printf("请输入时间2的小时与分钟,用空格分开\n");
    scanf("%d %d",&hour2,&min2);

    minsum1 = hour1*60 + min1;
    minsum2 = hour2*60 + min2;

    minsum3 = minsum2 - minsum1;

    hourres = minsum3 / 60;
    minres = minsum3 % 60;

    printf("---------------------------------------------------------------------------\n");
    printf("相差了%d小时%d分",hourres,minres);

    return 0;



}
