#include <stdio.h>
#include <stdlib.h>

double coutdetransactionfonction(float valeurtotale)
{
    float coutDeTransac;

    if (valeurtotale > 5000.01)
    {
        coutDeTransac = 24.95;
    }
    else if (valeurtotale > 2500.01 && valeurtotale < 5000)
    {
        coutDeTransac = 14.95;
    }
    else if (valeurtotale < 2500)
    {
          coutDeTransac = 7.5;
    }

    return coutDeTransac;
}

int main()
{
	float BEP;
	float nbrAction;
	float cours;
	float valTotIni;
	float valTotAct;
	float coutDeTransaction;
	float coutALAchat;
	float coutALAVente;
	float frais;

    frais = 0.0027;

	printf("Quel est le BEP ?");
	scanf("%f", &BEP);
	printf("Quel est votre nombre d'action ?");
	scanf("%f", &nbrAction);
	printf("Quel est le cours ?");
	scanf("%f", &cours);
	valTotIni = BEP * nbrAction;
	valTotAct = cours * nbrAction;

    coutDeTransaction = coutdetransactionfonction(valTotIni);

    coutALAchat = valTotIni + ((BEP * nbrAction) * frais) + coutDeTransaction;

    printf("Valeur initiale : %f \t valeur actuelle : %f, cout de transaction %f \n",valTotIni, valTotAct, coutDeTransaction);

    coutDeTransaction = coutdetransactionfonction(valTotAct);

	coutALAVente = valTotAct - ((cours * nbrAction) * frais) - coutDeTransaction;

	//printf("Valeur initiale : %f \t valeur actuelle : %f, cout de transaction %f \n",valTotIni, valTotAct, coutDeTransaction);
	printf("Cout a l'achat : %f \t Cout a la vente : %f , cout de transaction %f", coutALAchat, coutALAVente, coutDeTransaction);

}
