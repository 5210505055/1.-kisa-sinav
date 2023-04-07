#include <stdio.h>
#include <stdlib.h>
void islem(int sayi_1,int sayi_2)
{
    int toplam=0;
    while(sayi_2 >0 && sayi_1>0 )
        {

            if (sayi_1 > sayi_2)
            {
                printf("%d - %d = ",sayi_1,sayi_2);
                sayi_1 = sayi_1 - sayi_2;
                printf("%d\n",sayi_1);
            }
            else
            {
                printf("%d - %d = ",sayi_2,sayi_1);
                sayi_2=sayi_2-sayi_1;
                printf("%d\n",sayi_2);
            }
            toplam++;
        }
        printf("\nToplam islem sayisi = %d",toplam);
}
int main()
{
    int sayi_1,sayi_2;
    printf("Birinci sayi girin : ");scanf("%d",&sayi_1);
    printf("Ikinci sayi girin : ");scanf("%d",&sayi_2);
    islem(sayi_1,sayi_2);
    return 0;
}
