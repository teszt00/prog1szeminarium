#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	/*
	Példa:
	https://bit.ly/2r1OlIk
	1. a program ismerteti, hogy mire lehet fogadni, bekeri a jatekostol, hogy mire fogad.
	2. a program bekeri, hogy milyen tetet tesz fel a jatekos.
	3. a program veletlenszeruen kisorsolja a nyertes szamot, kiirja, 
	kiértékeli, hogy az milyen,
	majd hogy a jatekos mennyit nyert
	
	Játekszabalyok:
	Mire lehet fogadni es mennyit er, ha azt huzza ki a gep?
	-konkret szamra (0-36) -> a tet 3x-osat nyeri
	-parosra -> a tet 1x-eset nyeri
	-paratlanra -> 1x
	-feketere -> 1x
	-pirosra -> 1x
	-szamra az 1. tucatbol (1-12) -> 2x
	-szamra a 2. tucatbol (13-24) -> 2x
	-szamra a 3. tucatbol (25-36) -> 2x
	-1. oszlopra -> 2x
	-2.oszlopra -> 2x
	-3.oszlopra -> 2x
	-tábla elsõ felére (1-18) -> 1x
	-tábla 2. felére (19-36) -> 1x
	
	Ha nulla jon ki, akkor csak az nyer, aki a nulla szamra fogadott, mindenki mas veszit.

	*/
	int choice;
	int money;
	int szorzo = 0;
	int nyeremeny = 0;
	
	//szabalyok kiirasa
	printf("######\n");
	printf("Rulett\n");
	printf("######\n\n");
	printf("A kovetkezokre lehet fogadni, zarojelben talalhato a hozzajuk tartozo betukod, amivel lehet rajuk fogadni:\n\n");
	printf("Harmas szorzot ernek a kovetkezok:\n");
	printf("0 (0), 1 (1), 2 (2) ... 36 (36) \n\n");
	printf("Kettes szorzot ernek a kovetkezok:\n");
	printf("1.oszlop szamai, azaz 1,4,7... (40)\n");
	printf("2.oszlop szamai, azaz 2,5,8... (41)\n");
	printf("3.oszlop szamai, azaz 3,6,9... (42)\n");
	printf("1.tucat szamai, azaz 1,2,..., 12 (43)\n");
	printf("2.tucat szamai, azaz 13,14,..., 24 (44)\n");
	printf("3.tucat szamai, azaz 25,26,..., 36 (45)\n\n");
	
	printf("Egyes szorzot ernek a kovetkezok:\n");
	printf("Paros szamok (50)\n");
	printf("Paratlan szamok (51)\n");
	printf("Fekete szamok (52)\n");
	printf("Piros szamok (53)\n");
	printf("Szamok a tabla elso felebol (1, 2, ..., 18)  (54)\n");
	printf("Szamok a tabla masodik felebol (19, 20, ..., 36)  (55)\n\n");
	printf("Mire fogad?\n");
	
	scanf("%d", &choice);
	printf("\nMennyi penzt tesz fel (EUR, egeszre kerekitett ertek)?\n");
	scanf("%d", &money);
	
	//sorsolas
	int drawnNumber = 0;
	srand(time(0));
	drawnNumber = (rand() %37);

	//a fogadas jelentesenek a kiertekelese: 
	
	//harmas szorzot eronek 0-36 kozt
	if ( 0 <= choice && choice <=36){
		szorzo = 3;
	}
	
	//kettes szorzo
	if(40 <= choice && choice <=45){
		szorzo = 2;
	}

	//egyes szorzo
	if(50 <= choice && choice <=55){
		szorzo = 1;
	}
	
	//sorsolas jelentesenek a kiertekelese
	
	//paros	
	//paratlan
	//fekete
	//piros
	//elso felbol
	//masodik felbol
	
	//nyeremeny szamolas
	nyeremeny = money * szorzo;

	//eredmenyhirdetes
	printf("\nA huzott szam a %d.\n", drawnNumber);	
	printf("Nyeremenye %d.\n", nyeremeny);	
	
	return 0;
}
