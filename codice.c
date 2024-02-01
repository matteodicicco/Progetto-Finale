#include <stdio.h>

void fase1()  
{
    int quant_art, dove_sped, var;
    float costo_art, costoart_tot, tot_articoli, iva, sped_it, sped_ww, tot_it, tot_ww;
    iva = costo_art * 0.22;
    sped_it = 10;
    sped_ww = 25;
    costoart_tot = costo_art * tot_articoli;
    tot_it = quant_art + iva + sped_it;
    tot_ww = quant_art + iva + sped_ww;

    while (var == 0)
    {
        printf("Dove desideri spedire il tuo ordine: \n1) Italia \n2) Europa \n3) Resto del Mondo");
        scanf("%d", &dove_sped);
        if (dove_sped == 1)
        {
            printf("\n\nIl totale del tuo ordine è:\n\n€ %f \n\n€ %f (IVA 22\%) \n\n€ %f (Spedizione 24/48 ore) \n/nPer un totale di € %f \n\n", costoart_tot, iva, sped_it, tot_it);
            var = 1;
        }
        else if (dove_sped == 2)
        {
            printf("\n\nIl totale del tuo ordine è:\n\n€ %f \n\n€ %f (IVA 22\%) \n\n€ %f (Spedizione 24/48 ore) \n/nPer un totale di € %f \n\n", costoart_tot, iva, sped_ww, tot_ww);
            var = 1;
        }
        else if (dove_sped == 3)
        {
            printf("\n\nIl totale del tuo ordine è:\n\n€ %f \n\n€ %f (IVA 22\%) \n\n€ %f (Spedizione 24/48 ore) \n/nPer un totale di € %f \n\n", costoart_tot, iva, sped_ww, tot_ww);
            var = 1;
        }
        else printf("\n\nInserire un numero tra 1, 2 e 3.\n\n");
    }

}