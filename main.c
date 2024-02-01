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
    int nulla;

    printf("\n\nBENVENUTI SU EASYRENTAL! \n\nQui potrete trovare a vostra disposizione moltissimi articoli cui avete bisogno, o di cui avrete avuto bisogno, anche solo una volta nella vostra vita. \n\nPerchè comprare un articolo quando puoi noleggiarlo? \n\nSfoglia pure il nostro catalogo completo per verificare la presenza delll'articolo da te cercato! \n\n\n\n");
    printf("Seleziona la categoria interessata:\n\n 1) Elettrodomestici\n 2) Articoli per la casa\n 3) Strumenti ed articoli musicali\n 4) Giardinaggio e articoli da giardino\n\n\n ");
    scanf("%d", &articoli);

    if (articoli == 1)
    {
        printf("\n\n\nStai cercando elettrodomestici relativi a:\n 1) Cucina\n 2) Pulizia\n 3) Lavanderia\n");
        scanf("%d", &elettrodomestici);
        if(elettrodomestici == 1)
        {
            printf("A disposizione tra gli elettrodomestici per la cucina abbiamo:\n 1)impastatrice\n 2)friggitrice\n 3)affettatrice\n 4)macchina per popocorn\n 5)gelatiera\n 6)macchina per lo zucchero filato\n 7)affumicatore\n 8)macchina sottovuoto\n 9)macchina per la pasta\n 10)essiccatore\n 11)yogurtiera\n");
            scanf("%d", &cucina );
        }
        else if(elettrodomestici == 2)
        {
            printf("scegli tra:\n 1)robot aspirapolvere \n 2)idropulitrice\n 3)lavapavimenti\n 4)spazzacamino\n 5)lucidatrice\n 6)aspiraliquidi\n 7)lavamoquette\n");
            scanf("%d", &pulizia);
        }
        else if(elettrodomestici == 3)
        {
            printf("scegli tra: 1)macchina da cucire\n 2)lavatrice\n 3)asciugatrice\n 4)stira asciuga pantaloni\n");
            scanf("%d", &lavanderia);
        }
    }
    else if (articoli == 2)
    {
        printf("articoli per la casa:\n scegli la tua categoria:\n 1)cucina\n 2)camera da letto\n 3)bagno\n 4)salone\n 5)lavanderia\n");
        scanf("%d", &casa);
        if (casa==1)
        {
            printf("scegli tra:\n 1)pentola a pressione\n 2)pentola grande\n 3)");
            scanf("%d",&cucinaart );
        }
    }
    else if (articoli == 3)
    {
        printf("strumenti ed articoli musicali:\n seleziona l'articolo:\n 1)chitarra\n 2)batteria\n 3)flauto\n 4)pianoforte\n 5)pianola\n 6)basso\n 7)sassofono\n 8)fisarmonica\n 9)violino\n 10)violoncello\n 11)giradischi\n 12)stereo\n");
        scanf("%d", &musica);
    }
    else if (articoli == 4)
    {
        printf("giardinaggio e articoli da giardino:\n seleziona i tuoi articoli:\n 1)zappa\n 2)");
        scanf("%d", &giardino);
    }
    return(0);
}
