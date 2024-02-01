#include <stdio.h>

void fase1()  
{
    int quant_art, dove_sped;
    float costo_art, costoart_tot, tot_articoli, iva, sped_it, sped_ww, tot_it, tot_ww;
    iva = costo_art * 0.22;
    sped_it = 10;
    sped_ww = 25;
    costoart_tot = costo_art * tot_articoli;
    tot_it = quant_art + iva + sped_it;
    tot_ww = quant_art + iva + sped_ww;

    printf("Dove desideri spedire il tuo ordine: \n1) Italia \n2) Europa \n3) Resto del Mondo");
    scanf("%d", &dove_sped);
        if (dove_sped == 1)
        {
            printf("Il totale del tuo ordine è:\n€ %f \n€ %f (IVA 22\%)€ %f (Spedizione 24/48 ore) \n");
        }
        else if (dove_sped == 2)
        {
            /* code */
        }
        else if (dove_sped == 3)
        {
            /* code */
        }
        else printf("\nInserire un numero tra 1, 2 e 3.\n");
        
    printf("\n\n");
    printf("\nIl totale del tuo carrello è:\n€ %f\n");

}