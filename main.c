#include <stdio.h>

int main()
{
    int articoli;
    int sport;
    int elettrodomestici;
    int casa;
    int musica;
    int giardino;
    int cucina;
    int pulizia;
    int lavanderia;
    int cucinaart;

    printf("Benvenuti su EasyRental, qui troverai a tua disposizione tutto ciò di cui hai bisogno solo una volta .. perchè comprare un articolo quando puoi noleggiarne uno?\n");
    printf("cosa vorresti noleggiare?\n");
    printf("seleziona la categoria:\n 1)?\n 2)elettrodomestici\n 3)articoli per la casa\n 4)strumenti ed articoli musicali\n 5)giardinaggio e articoli da giardino\n ");
    scanf("%d", &articoli);

    if (articoli == 2)
    {
        printf("articoli elettrodomestici;\n scegli la tua categoria:\n 1)cucina\n 2)pulizia\n 3)lavanderia\n");
        scanf("%d", &elettrodomestici);
        if(elettrodomestici == 1)
        {
            printf("scegli tra:\n 1)impastatrice\n 2)friggitrice\n 3)affettatrice\n 4)macchina per popocorn\n 5)gelatiera\n 6)macchina per lo zucchero filato\n 7)affumicatore\n 8)macchina sottovuoto\n 9)macchina per la pasta\n 10)essiccatore\n 11)yogurtiera\n");
            scanf("%d", &cucina );
        }
        else if(elettrodomestici == 2)
        {
            printf("scegli tra:\n 1)robot aspirapolvere \n 2)idropulitrice\n 3)lavapavimenti\n 4)spazzacamino\n 5)lucidatrice\n 6)aspiraliquidi\n 7)lavamoquette\n");
            scanf("%d", &pulizia);
        }
        else if
        {
            printf("scegli tra: 1)macchina da cucire\n 2)lavatrice\n 3)asciugatrice\n 4)stira asciuga pantaloni\n");
            scanf("%d", &lavanderia);
        }
    }
    else if (articoli == 3)
    {
        printf("articoli per la casa:\n scegli la tua categoria:\n 1)cucina\n 2)camera da letto\n 3)bagno\n 4)salone\n 5)lavanderia\n");
        scanf("%d", &casa);
        if (casa==1)
        {
            printf("scegli tra:\n 1)pentola a pressione\n 2)pentola grande\n 3)");
            scanf("%d",&cucinaart );
        }
    }
    else if (articoli == 4)
    {
        printf("strumenti ed articoli musicali:\n seleziona l'articolo:\n 1)chitarra\n 2)batteria\n 3)flauto\n 4)pianoforte\n 5)pianola\n 6)basso\n 7)sassofono\n 8)fisarmonica\n 9)violino\n 10)violoncello\n 11)giradischi\n 12)stereo\n");
        scanf("%d", &musica);
    }
    else if (articoli == 5)
    {
        printf("giardinaggio e articoli da giardino:\n seleziona i tuoi articoli:\n 1)zappa\n 2)");
        scanf("%d", &giardino);
    }
    return(0);
}
