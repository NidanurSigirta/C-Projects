#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dizi[100], size, i, j, temp;

  printf("LUTFEN DIZI ICIN ELEMAN SAYISINI GIRINIZ\n");
  scanf("%d", &size);

  printf("%d ELEMAN DEGERLERINI GIRINIZ\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &dizi[i]);

  for (i = 0 ; i< ( size - 1 ); i++)
  {
    for (j = 0 ; j < size - i - 1; j++)
    {
      if (dizi[j] > dizi[j+1])
      {
        temp        = dizi[j];
        dizi[j]   = dizi[j+1];
        dizi[j+1] = temp;
      }
    }
  }

  printf("ARTAN SIRAYA GORE LISTELEME:\n");

  for ( i = 0 ; i < size ; i++ )
     printf("%d\n", dizi[i]);

  return 0;
}
