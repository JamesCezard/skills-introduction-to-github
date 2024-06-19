/*
Ecrire un projet dans le langage C++ qu'utilise un menu permettant d'effectuer les opérations suivantes:
A- Le Programme permettant de trouver la factorielle d'une valeur entière
B- Le Programme permettant de trouver la combinaison de deux valeurs entières
C- Le Programme permettant de former l'anagramme d'un nom d'une personne
D- Le Programme permettant de changer la date de l'ordinateur
E- Le Programme permettant d'éteindre l'ordinateur
F- Le Programme permettant de classer par ordre décroissant des valeurs saisies
G- Le Programme permettant de faire le produit deux matrices d'ordre
H- Le Programme permettant de changer l'heure de l'ordinateur

*/

#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
using namespace std;

//declaration des fonctions
int comb(int nb,int nbr);
int nbr = 368;
void mulmat(int ordre);
int k=0;
int canvas=30;
void menu();
string anagramme(string name);
int facto(int nbr);
int decroit(int nb);
void changeDate(string date);
void changeHour(string hour);
void exitProgram(void);
int classement(int tab);
void draw(string phrase);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


int main(){
	system ("color 1B");
string merci="\t\t\t\n\n*MERCI D'AVOIR UTILISER CE PROGRAMME*";
string bienvenue="BIENVENUE A VOUS";
draw(bienvenue);	
system ("cls");
system("color 5F");
bool Menu=false;
bool caseN=false;	
int m=0;

bool returnToMenu = false;


do {

char  choix;
menu();
cin>>choix;


switch(choix)  {
	case 'A':
	case 'a':{
		int nb,fact;
		cout <<"\t\t\t\tEntrer le nombre que vous voulez avoir la factorielle\n"; 
		cin>>nb;
		while(nb>16){
		cout <<"\t\t\t\tEntrer un nombre inferieur a 16 svp\n";
		cin>>nb;
		
	}
	fact=facto (nb);
	cout <<"\t\t\t\t\t\tLa factorielle de "<< nb<< " est "<<fact;
	cout<<"\n\n";
	for (int i = 0 ; i < merci.length() ; i++){
		cout << merci[i];
		Sleep(50); 
	}
	Sleep (10000);
	system("cls");
	Menu = true;
	break	;
	
	}
	case 'B':
		case 'b':{
			
			int nb,nbr,combi;
			cout <<"entrer le premier nombre :";
			cin >>nb;
			while(nb<1){
			cout <<"entrer le premier nombre :";
			cin >>nb;	
			}
			cout <<"entrer le second nombre :";
			cin >>nbr;
			while(nb<nbr){
			cout <<"entrer le premier nombre :";
			cin >>nb;
			while(nb<1){
			cout <<"entrer le premier nombre :";
			cin >>nb;	
			}
			cout <<"entrer le second nombre :";
			cin >>nbr;
			}
			combi=comb(nb,nbr);
			cout<<"la combinaison de "<< nbr <<" dans "<< nb<<" est "<<combi;
			
		for (int i = 0 ; i < merci.length() ; i++){
		cout << merci[i];
		Sleep(50); 
	}
	
				Sleep (10000);
				system ("cls") ;
				Menu = true ;	
		
			
			break;
	 }
		
	case 'C':{
	case 'c':
		string nam,anagram;
		cout<<"enter your name \n";
		cin>>nam;
		anagram=anagramme(nam);
		cout <<"L'une des anagrammes de "<<nam<<" est "<<anagram;

		for (int i = 0 ; i < merci.length() ; i++){
		cout << merci[i];
		Sleep(50); 
	}
		Sleep (10000);
		system ("cls") ;
		Menu = true ;	
		break;
	}
		
		case 'D':
		case 'd':
		{
			string date;
			cout<<"entrer la nouvelle date ";
			cin>>date;
			changeDate(date);
			cout<<"la date a ete change !!!!!";
			Sleep(1000);
			system("cls");
			Menu = true;
			break;
			
			break;
			
		}
		case 'E':
			case 'e':{
			system("shutdown /s /t 5");
			for (int i = 0 ; i < merci.length() ; i++){
			cout << merci[i];
			Sleep(50); 
	}
	cout<<"\n\n";
			for (int i=0;i<5;i++){
				cout <<"votre machine s'eteindra dans "<<5-i<<" secondes \n";
				Sleep(1000);
				
			}
			break;
			}
		
		case 'F':
		case 'f':
		{
		
			
					
		int nbr;
		cout <<"combien de nombre vs allez saisir :\t";
		cin>>nbr;
		decroit(nbr);
		
		for (int i = 0 ; i < merci.length() ; i++){
		cout << merci[i];
		Sleep(50); 
	}
	
			Sleep (10000);
			system("cls");
			Menu = true;
			break;
		
		}
		case 'G':
			case 'g': {
				
					
				
				int ordreMat;
				char choice;
				cout<<"entrer l'ordre des deux matrices: ";
				cin>>ordreMat;
				mulmat(ordreMat);
				cout<<"\n\n presser y pour afficher le menu ou n pour quitter le programme ";
				cin>>choice;
					for (int i = 0 ; i < merci.length() ; i++){
					cout << merci[i];
					Sleep(50); 
	}
	
				Sleep (10000);
				system("cls");
				Menu = true;
				break;
				
					
		
				
				break;
				
			
			}
		
		case 'H':
		case 'h':
		{
			string hour;
			cout<<"entrer l'heure ";
			cin>>hour;
			changeHour(hour);
				for (int i = 0 ; i < merci.length() ; i++){
		cout << merci[i];
		Sleep(50); 
	}
	
			cout<<"l'heure a ete change !!!!!";
			Sleep(500);
			system("cls");
			Menu = true;
			break;
			 
		}
		
		
		
		
	case'Q':
	case 'q':{
		bool exitP=false;
		do{
		char choice;
		cout <<"\t\t\t voulez vous vraiment quitter le programme ? si oui presser Y, si non Presser N\n\n";
		cin >> choice;
		
		if (choice == 'N' || choice == 'n'){
			system (" cls");
			Menu = true;
			break;
		}
		else if(choice == 'Y' || choice  == 'y'){
			exitProgram();
		}else {
			cout <<"\t\t\t\tvous devez tapez sois Y sois N\n\n";
			exitP = true;
		}
	}while(exitP);
		break;
	}

default:{
	cout <<"\t\t\t\tvous devez presser une des lettres de la liste de choix svp ";
	Sleep (3000);
	system("cls");
	Menu = true;
	break;
}
}
}while (Menu);

	return 0;
}


//fonction menu
void menu(){
	string p="\t\t\t\t\t\t***FAITES VOTRE CHOIX***\n ";
	cout<<"\t\t\t\t\t\t*****MENU PRINCIPAL*****\n\n";
	cout<< "\t\t\t\tPresser[A] Pour faire la factorielle d'une valeur entier\n";
	cout<< "\t\t\t\tPresser[B] Pour combinaison de deux valeur entiers\n";
	cout<< "\t\t\t\tPresser[C] Pour donner l'anagramme d'un nom d'une personne\n";
	cout<< "\t\t\t\tPresser[D] Pour changer la date de l'ordinateur\n";
	cout<< "\t\t\t\tPresser[E] Pour etiendre l'ordinateur\n";
	cout<< "\t\t\t\tPresser[F] Pour classer par ordre decroissant des valeurs saisies\n";
	cout<< "\t\t\t\tPresser[G] Pour faire le produit de deux matrices d'ordre\n";
	cout<< "\t\t\t\tPresser[H] Pour hanger l'heure de l'ordinateur\n";
	cout << "\t\t\t\tPresser [Q] pour QUITTER \n\n\n\n\n";
	for (int i = 0; i <p.length();i++){
		cout <<p[i];
		Sleep(50);
	}
	
}
//fonction factorielle

int facto(int nbr){
	int fact=1;
	for (int i = 1 ; i <= nbr ; i++){
		fact = fact * i;
	}
	
	return fact;
}
//fonction somme de 1 a N
 #include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
string anagramme(string name) {
	int random;
	string anagram="";
	srand(time(NULL));
	
	int tab[name.length()+1];
	random=rand() % ((name.length()-1)+1);
	tab[0]=random;
		for (int i=1;i<=name.length();i++){
			random=rand() % ((name.length()-1)+1);
			tab[i]=random;
	
		for (int j=0;j<i;j++){
			if(tab[i]==tab[j]){
				random=rand() % ((name.length()-1)+1);
				tab[i]=random;
				j=0;
			}
		}
	anagram+=name[random];
	}
return anagram;
}
//fonction somme_diagonale
int decroit(int nb){
	int tab[nb],perm;
	for (int i = 0 ; i < nb ; i ++){
		cout <<"entrer des valeurs :";
		cin>>tab[i];
	}
cout<<"voici les valeurs que vous avez saisie :\t\t";		
for (int i = 0;i < nb ; i ++){
	cout <<tab[i]<<"\t";
}
for (int i = 0 ; i < nb ; i ++){
	for (int j = 0 ;j < nb ;j ++){
		if (tab[j]<tab[j+1]){
			perm=tab[j];
			tab[j]=tab[j+1];
			tab[j+1]=perm;;
		}
		
	}
}
cout <<"\nvos valeurs saisie dans l'ordre decroissant sont :\t";
for (int i = 0;i < nb ; i ++){
	cout <<tab[i]<<"\t";
}	
	
	
return 0;	
	
}
//fontion exit
void exitProgram(void){
	exit(1);
}


int comb(int nb,int nbr){
	int factNb,factNbr,factDiff,diff,mult,comb;
	factNb=facto(nb);
	factNbr=facto(nbr);
	diff=(nb-nbr);
	factDiff=facto(diff);
	mult=factNbr*factDiff;
	comb=factNb/mult;
	return comb;
}
//fonction multiplication matricielle
void mulmat(int ordre){
int tab[ordre][ordre],tab2[ordre][ordre],tab3[ordre][ordre];
	
	for (int i=0;i<ordre;i++){
		for (int j=0;j<ordre;j++){
		cout <<"remplissez la premiere matrice :";
			cin>>tab[i][j];
		}
		
	}
	for (int i=0;i<ordre;i++){
		for (int j=0;j<ordre;j++){
		cout <<"remplissez la seconde matrice :";
		cin>>tab2[i][j];
			
		}
		
	}
	cout <<"\n\n"<<"Voici les elements de la premiere matrice\n\n";
	
	for (int i=0;i<ordre;i++){
		for (int j=0;j<ordre;j++){
		cout <<tab[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
	cout <<"\n\n"<<"Voici les elements de la seconde matrice\n\n";
	for (int i=0;i<ordre;i++){
		for (int j=0;j<ordre;j++){
		cout <<tab2[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
	int prs;
	for (int i=0;i<ordre;i++){
		
		for (int j=0;j<ordre;j++){
			 prs=0;
			for(int k=0;k<ordre;k++){
				prs=prs+(tab[i][k]*tab2[k][j]);
				
			}
		tab3[i][j]=prs;
		}
	}
	cout <<"\n\n"<<"la matrice resultante est :\n\n";
	for ( int i=0;i<ordre;i++){
		for (int j=0;j<ordre;j++){
		cout <<tab3[j][i]<<"\t";
			
		}
		cout<<"\n";
	}
		
	
}


//fonction draw


void changeHour(string hour){
	
	
	string cmd;
	cmd= "time " + hour;
	system(cmd.c_str());
}
void changeDate(string date){
	
	
	string cmd;
	cmd= "date " + date;
	system(cmd.c_str());
}


void draw (string phrase)
{
int m=0;
	do{
	
    //SetConsoleTextAttribute(h, nbr);
    int lines = phrase.size() + 1 + canvas;
    

    for (int i=0; i <= lines; i++)//49
    {
        for (int j=0; j <= canvas; j++)
    	{
        	//invisible cursor
            CONSOLE_CURSOR_INFO info;
            info.dwSize = 100;
            info.bVisible = false;
            SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	

            if (nbr > 383)
                nbr = 368;
            if ((j <= canvas - i) || k >= phrase.size())
                cout << " ";
            else if ((j > canvas - i) && (canvas - i >= 0))
            {
                cout << phrase[k];
                k++;
            }
            else if (canvas - i < 0)
            {
                for (k = i - canvas; k < phrase.size(); k++)
                    cout << phrase[k];
            }
        }
        k=0;

        if (i == 49)
        {
            i=0;
            nbr += 1;
        }
        cout << endl;
      	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{50, 2});
    	Sleep(100);
	m+=1;
	}
}while(m<2);
}
