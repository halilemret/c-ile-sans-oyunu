#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rastgele;
    int tahmin;
    int hak = 5;
    srand(time(NULL));
    rastgele=rand()%100;
    printf("Aklimdan 0-100 arasinda bir sayi tuttum. tahmin edebilir misin? :)\nKalan hakkiniz: %d\nTahmininiz:",hak);
    while(hak !=0)
    {
        scanf("%d",&tahmin);
        if (tahmin > rastgele)
            {
                printf("biraz asagilara in\nKalan hakkiniz: %d\nTahmininiz:",hak-1);
            }
            else if (tahmin < rastgele)
            {
                printf("biraz yukarilara cik.\nKalan hakkiniz: %d\nTahmininiz:",hak-1);
            }
            else
            {
                printf("Dogru cevap!");
                break;
            }


        hak--;
    }

    if (hak == 0)
    {
        printf("\n");
        printf("hakkiniz bitti. dogru cevap: %d", rastgele);
    }
    return 0;
    getch();
}
