#include <stdio.h>

int main()
{
    int hour1 = 0,hour2 = 0,min1 = 0,min2 = 0;
    int minsum1 = 0,minsum2 = 0,minsum3 = 0;
    int hourres = 0,minres = 0;



    printf("������ʱ��1��Сʱ�����,�ÿո�ֿ�\n");
    scanf("%d %d",&hour1,&min1);

    printf("������ʱ��2��Сʱ�����,�ÿո�ֿ�\n");
    scanf("%d %d",&hour2,&min2);

    minsum1 = hour1*60 + min1;
    minsum2 = hour2*60 + min2;

    minsum3 = minsum2 - minsum1;

    hourres = minsum3 / 60;
    minres = minsum3 % 60;

    printf("---------------------------------------------------------------------------\n");
    printf("�����%dСʱ%d��",hourres,minres);

    return 0;



}
