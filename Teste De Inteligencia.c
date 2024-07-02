/*
ALUNO: GABRIEL MANAÇAS DE AMORIM. RA: 227169
ALUNO: DAVI GUIMARÕES. RA: 227146
TURMA: I1C
*/
#include<stdio.h>
#include<conio.h>
#include<conio.c>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a=0,pt=0;int sn=2;
	char resp[100];
	system("color 70");
			textbackground(0);
			for(int i=1;i<26;i++){
				for(int j=1;j<61;j++){
					gotoxy(j+35,i);
				    printf("\xDB");
				}
			}
			for(int i=2;i<25;i++){
				for(int j=2;j<=59;j++){
				
					textcolor(2);
					gotoxy(j+35,i);
				    printf("\xDB");
					
				    
		}
	}
	textcolor(15);textbackground(2);
	gotoxy(60,3);printf("TESTE DE QI");
	gotoxy(40,6);printf("REGRAS:");
	gotoxy(43,7);printf("- voc%c deve descobrir o que as letras significam",136);
	gotoxy(43,8);printf("- Escreva as respostas em mai%csculas ou min%csculas",163,163);
	gotoxy(43,9);printf("- Digite as respostas sem espa%cos extras",135);
	gotoxy(60,15);printf("DIVIRTA-SE...");
	getch();
	
	do{
	
		system("color 70");
	srand(time(NULL));
	
		textbackground(0);
for(int i=1;i<26;i++){
	for(int j=1;j<61;j++){
		gotoxy(j+35,i);
	    printf("\xDB");
	}
}
for(int i=2;i<25;i++){
	for(int j=2;j<=59;j++){
	
		textcolor(2);
		gotoxy(j+35,i);
	    printf("\xDB");
		
	    
	}
}
textbackground(2);
gotoxy(37,2); textcolor(15); printf("5 C TEM O BRASIL |                       |");   char resp1[50]="5 COPAS TEM O BRASIL";
gotoxy(37,3); textcolor(15); printf("365 D NO ANO     |                       |");   char resp2[50]="365 DIAS NO ANO";
gotoxy(37,4); textcolor(15); printf("12 J NO TIME     |                       |");   char resp3[50]="12 JOGADORES NO TIME";
gotoxy(37,5); textcolor(15); printf("4 R NO CARRO     |                       |");   char resp4[50]="4 RODAS NO CARRO";
gotoxy(37,6); textcolor(15); printf("2 R NA BICICLETA |                       |");   char resp5[50]="2 RODAS NA BICICLETA";
gotoxy(37,7); textcolor(15); printf("24 J NA PARTIDA  |                       |");   char resp6[50]="24 JOGADORES NA PARTIDA";
gotoxy(37,8); textcolor(15); printf("2 O E 1 BOCA     |                       |");   char resp7[50]="2 OLHOS E 1 BOCA"; 
gotoxy(37,9); textcolor(15); printf("6 N NO B         |                       |");   char resp8[50]="6 NOTAS NO BIMESTRE";
gotoxy(37,10); textcolor(15); printf("6 T NO B      |                       |");   char resp9[50]="6 TESTES NO BIMESTRE";
gotoxy(37,11); textcolor(15); printf("1 B EM J         |                       |");   char resp10[50]="1 BOLA EM JOGO";
gotoxy(37,12); textcolor(15); printf("10 F NO C        |                       |");   char resp11[50]="10 FILMES NO CINEMA";
gotoxy(37,13); textcolor(15); printf("1 H EM MANAUS    |                       |");   char resp12[50]="1 HAVAN EM MANAUS";
gotoxy(37,14); textcolor(15); printf("I5 I C           |                       |");   char resp13[50]="I5 INTEL CORE";
gotoxy(37,15); textcolor(15); printf("4 C NO U         |                       |");   char resp14[50]="4 CORES NO UNO";
gotoxy(37,16); textcolor(15); printf("1.69 TEM O M     |                       |");   char resp15[50]="1.69 TEM O MESSI";
gotoxy(37,17); textcolor(15); printf("2 B TEM 1 C      |                       |");   char resp16[50]="2 BURACOS TEM 1 CANUDO";
gotoxy(37,18); textcolor(15); printf("2 E EM 1 PORTA   |                       |");   char resp17[50]="2 ENTRADAS EM 1 PORTA";
gotoxy(37,19); textcolor(15); printf("1 E USB          |                       |");   char resp18[50]="1 ENTRADA USB";
gotoxy(37,20); textcolor(15); printf("P N VEIA         |                       |");   char resp19[50]="PROGRAMACAO NA VEIA";
gotoxy(37,21); textcolor(15); printf("V IGUAL A CHAPE  |                       |");   char resp20[50]="VASCO IGUAL A CHAPE";
gotoxy(37,22); textcolor(15); printf("S O M            |                       |");   char resp21[50]="SERGINHO O MELHOR";
gotoxy(37,23); textcolor(15); printf("46 M NA S        |                       |");   char resp22[50]="46 MOUSES NA SALA";
gotoxy(37,24); textcolor(15); printf("60 M EM 1 H      |                       |");   char resp23[50]="60 MINUTOS EM 1 HORA";
//1 Q
do{
gotoxy(55,2); printf("                       ");
gotoxy(55,2); fflush(stdin); textcolor(15);  gets(resp);
if(strcasecmp(resp,resp1)==0){
	a==1;
	pt++;
textcolor(15); gotoxy(80,2);printf("    CORRETO    ");
break;
}else{
a=0;
gotoxy(80,2); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

do{

//2 Q
gotoxy(55,3); printf("                       ");
gotoxy(55,3); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp2)==0){
	a==1;	pt++;
gotoxy(80,3); textcolor(15);printf("    CORRETO    ");
break;
}else{
	a=0;
gotoxy(80,3); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);
do{

//3 Q
gotoxy(55,4); printf("                       ");
gotoxy(55,4); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp3)==0){
	a==1;	pt++;
gotoxy(80,4); textcolor(15);printf("    CORRETO    ");
break;
}else{
	a=0;
gotoxy(80,4); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

do{
gotoxy(55,5); printf("                       ");
//4 Q
gotoxy(55,5); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp4)==0){
	a=1;	pt++;
gotoxy(80,5); textcolor(15);printf("    CORRETO    ");
break;
}else{
	a=0;
gotoxy(80,5); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

do{
gotoxy(55,6); printf("                       ");
//5 Q
gotoxy(55,6); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp5)==0){
gotoxy(80,6); textcolor(15); printf("    CORRETO    ");
a=1;	pt++;
break;
}else{
	a=0;
gotoxy(80,6); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

do{
gotoxy(55,7); printf("                       ");
//6Q
gotoxy(55,7); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp6)==0){
	a=1;	pt++;
gotoxy(80,7); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,7); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

do{
gotoxy(55,8); printf("                       ");
//7Q
gotoxy(55,8); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp7)==0){
a=1; gotoxy(80,8); textcolor(15); printf("    CORRETO    "); 	pt++; break;
}else{
	a=0;
gotoxy(80,8); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

do{
gotoxy(55,9); printf("                       ");
//8Q
gotoxy(55,9); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp8)==0){
a=1; gotoxy(80,9); textcolor(15);	pt++;  printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,9); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);
//9Q
do{
gotoxy(55,10); printf("                       ");
gotoxy(55,10); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp9)==0){
a=1; 	pt++; gotoxy(80,10); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,10); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);
//10Q
do{
gotoxy(55,11); printf("                       ");
gotoxy(55,11); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp10)==0){
a=1; 	pt++; gotoxy(80,11); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,11); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//11Q
do{
gotoxy(55,12); printf("                       ");
gotoxy(55,12); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp11)==0){
a=1; 	pt++; gotoxy(80,12); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,12); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//12Q
do{
gotoxy(55,13); printf("                       ");
gotoxy(55,13); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp12)==0){
a=1;	pt++;  gotoxy(80,13); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,13); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//13Q
do{
gotoxy(55,14); printf("                       ");
gotoxy(55,14); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp13)==0){
a=1; 	pt++; gotoxy(80,14); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,14); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//14Q
do{
gotoxy(55,15); printf("                       ");
gotoxy(55,15); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp14)==0){
a=1; 	pt++; gotoxy(80,15); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,15); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//15Q
do{
gotoxy(55,16); printf("                       ");
gotoxy(55,16); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp15)==0){
a=1; 	pt++; gotoxy(80,16); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,16); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//16Q
do{
gotoxy(55,17); printf("                       ");
gotoxy(55,17); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp16)==0){
a=1; 	pt++; gotoxy(80,17); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,17); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//17Q
do{
gotoxy(55,18); printf("                       ");
gotoxy(55,18); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp17)==0){
a=1; 	pt++; gotoxy(80,18); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,18); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//18Q
do{
gotoxy(55,19); printf("                       ");
gotoxy(55,19); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp18)==0){
a=1; 	pt++; gotoxy(80,19); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,19); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//19Q
do{
gotoxy(55,20); printf("                       ");
gotoxy(55,20); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp19)==0){
a=1;	pt++;  gotoxy(80,20); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,20); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);


//20Q
do{
gotoxy(55,21); printf("                       ");
gotoxy(55,21); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp20)==0){
a=1; 	pt++; gotoxy(80,21); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,21); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//21Q
do{
gotoxy(55,22); printf("                       ");
gotoxy(55,22); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp21)==0){
a=1; 	pt++; gotoxy(80,22); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,22); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//22Qdo{
do{
gotoxy(55,23); printf("                       ");
gotoxy(55,23); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp22)==0){
a=1;	pt++;  gotoxy(80,23); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,23); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

//23Q
do{
gotoxy(55,24); printf("                       ");
gotoxy(55,24); fflush(stdin); textcolor(15); gets(resp);
if(strcasecmp(resp,resp23)==0){
a=1;	pt++;  gotoxy(80,24); textcolor(15); printf("    CORRETO    "); break;
}else{
	a=0;
gotoxy(80,24); textcolor(4); printf("TENTE OUTRA VEZ");
}
}while(a!=1);

system("color 70");
	srand(time(NULL));
	
		textbackground(0);
for(int i=1;i<26;i++){
	for(int j=1;j<61;j++){
		gotoxy(j+35,i);
	    printf("\xDB");
	}
}
for(int i=2;i<25;i++){
	for(int j=2;j<=59;j++){
	
		textcolor(2);
		gotoxy(j+35,i);
	    printf("\xDB");
		
	    
	}
}
gotoxy(55,3); printf("Pontos: %d", pt);
gotoxy(53,6); printf("Deseja Refazer o Teste de QI");
gotoxy(53,7); printf("1-Sim");
gotoxy(53,8); printf("2-N%co",198);

gotoxy(53,9); scanf("%d", &sn);
}while(sn!=2);
pt=0;
return 0;
}
