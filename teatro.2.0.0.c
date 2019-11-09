#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//FUNCTIONS 
int getDiaSemana();

//CONSTANTS
int  DIA_SEMANA;

void main() {
	char opc;
	DIA_SEMANA = getDiaSemana();
	do {
		limpaTela();
		menu();
		scanf("%c",&opc);
		
		escolhaMenu(opc);		
	} while(opc !='9');


}


int getDiaSemana(){
    int dia;
    do {
        printf("\nQUE DIA E HOJE?\n\n");
        printf("0-DOMINGO\n");
        printf("1-SEGUNDA\n");
        printf("2-TERCA\n");
        printf("3-QUARTA\n");
        printf("4-QUINTA\n");
        printf("5-SEXTA\n");
        printf("6-SABADO\n");
        printf("\nESCOLHA UM DIA:");
        scanf("%d",&dia);

        if(!diaValido(dia)){
            printf("\n DIA INCORRETO\n");
        }

    } while(!diaValido(dia));

    return dia;
}

int diaValido(int dia){
    int result = 0;

    switch(dia){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
             result = 1;
        break;
    }

    return result;
}

void escolhaMenu(char opc){
	
	switch(opc){
		case '1':
				imprimirInformacoes();
			break;
		case '2':
				venderIngresso();
			break;
	}
}


void imprimirInformacoes(){
	limpaTela();
	
	printf("\n\t\t\tTeatro Odisseu\n"
		   "\tSistema de Bilhetagem Eletronica do Teatro Odisseu\n\n"
			"Seja bem-vindo(a) ao sistema de compras de ingressos do Teatro Odisseu.\n"
			"Leia atentamente as instrucoes abaixo para obter \na melhor experiencia na compra do seu ingresso.\n\n"
			"*******INFORMACOES IMPORTANTES*******\n\n"
			"- As apresentacoes no Teatro Odisseu ocorrem de terca a domingo.\n\n"
			"- O ingresso individual custa R$ 30,60.\n\n"
			"- Tem direito a um desconto de 50 por cento do valor do ingresso integral:\n"
			" *Criancas de ate 12 anos;\n"
			" *Adultos a partir de 60 anos;\n"
			" *Professores da rede publica de ensino; e\n"
			" *Estudantes.\n"
			"ATENCAO: desconto nao cumulativo.\n\n"
			"- Estudantes carentes da rede publica de ensino,\n"
			"as tercas-feiras, tem direito a um desconto de 100 por cento\n"
			"do valor do ingresso integral, independentemente da sessao escolhida.\n\n"
			"- A tabela abaixo exibe as apresentacoes programadas pro mes de\n"
			"novembro,bem como as sessoes e os dias correspondentes:\n\n"
			"\t\t\t\t\t\tNovembro 2019\n\n"
			"\t  Segunda\tTerca\t\tQuarta\t\tQuinta\t\tSexta\t\tSabado\t\tDomingo\n"
			"\t  \t\t\t\t\t\t\t\t1\t\t2\t\t3\n"
			"\t  4\t\t5\t\t6\t\t7\t\t8\t\t9\t\t10\n"
			"\t  11\t\t12\t\t13\t\t14\t\t15\t\t16\t\t17\n"
			"\t  18\t\t19\t\t20\t\t21\t\t22\t\t23\t\t24\n"
			"\t  25\t\t26\t\t27\t\t28\t\t29\t\t30\n"
			"Sessao\n"
			"19:00\t\t\tMacbeth  \tHamlet  \tHamlet  \t\t  \tMacbeth  \tHamlet\n"
			"21:30\t\t\tHamlet  \t\t  \tMacbeth  \tMacbeth  \tHamlet\n\n\n");
			
		system("pause");
}

void limpaTela(){
	system("cls");
}


void menu(){
	
    printf("*********** MENU ***************\n\n");
    printf("1 - INFORMACOES.\n");
    printf("2 - VENDER INGRESSO.\n");
    printf("9 - FECHAR.\n\n");
    printf("ESCOLHA UMA OPCAO:");
	
}

void venderIngresso(){
	limpaTela();
	int peca;
	
	int MACBETH =1;
	int HAMLET =2;
	
	do {
			limpaTela();
			printf("\t\t\n\n\nAtualmente, estamos com duas pecas em cartaz:\n\n"
			"\t(1) Macbeth\t\t(2) Hamlet\n\n"
			"Escolha a peca que deseja ver digitando o numero correspondente: ");
			scanf ("%d",&peca);
			fflush(stdin);
			
			if(peca != 1 && peca != 2){
				printf("\nOpcao invalida! Escolha entre as opcoes (1) e (2).\n");
				system("pause");
			}
			
			
	} while(peca != 1 && peca != 2);
	
	
	switch (peca) {
			case 1:
				printf("\nVoce escolheu Macbeth.\n\n");
				break;

			case 2:
				printf ("\nVoce escolheu Hamlet.\n\n");
				break;

		}
	system("pause");
	
	
	
}
