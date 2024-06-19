#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <tchar.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void Color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

 int verification(int RCode);
 void ouverture();
 void depot();
 void retraits();
 void transfert();
 void modifier();
 void supprimer();
 void bloquer();
 void lister_compte();
 void password();
 void password(){
 int passw = 3052021; char nom[20];int pass;

 printf("\n\n\n\n\n\n\n\n\n");
 printf("\t\t\t\t\t====================\n");
 printf("\t\t\t\t\t| Utilisateur |\n\t\t\t\t\t ");
 scanf("%s",&nom);
 system("cls");
 do{
 printf("\n\n\n\n\n\n\n\n\n");
 printf("\t\t\t\t\t====================\n");
 printf("\t\t\t\t\t| MOT-DE-PASSE |\n\t\t\t\t\t ");
 scanf("%d",&pass);
 system("cls");
 }while(pass!=passw);

 }
//WINDOW PROCEDURE

 LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
 TCHAR szClassName[ ] = _T("COMPTE BANCAIRE");
 int WINAPI WinMain (HINSTANCE hThisInstance,
 HINSTANCE hPrevInstance,
 LPSTR lpszArgument,
 int nCmdShow)
 {
 //password();
 HWND hwnd;
 MSG messages;
 WNDCLASSEX cf;
 cf.hInstance = hThisInstance;
 cf.lpszClassName = szClassName;
 cf.lpfnWndProc = WindowProcedure;
 cf.style = CS_DBLCLKS;
 cf.cbSize = sizeof (WNDCLASSEX);
 //use default icon and mouse-pointer
 cf.hIcon = LoadIcon (NULL, IDI_APPLICATION);
 cf.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
 cf.hCursor = LoadCursor (NULL, IDC_ARROW);
 cf.lpszMenuName = NULL; //no menu
 cf.cbClsExtra = 0; //no extra byte after the window class
 cf.cbWndExtra = 0; // structure or the window instance
 cf.hbrBackground = (HBRUSH)(COLOR_WINDOW+4);
 // register the windows class
 if (!RegisterClassEx (&cf))
 return 0;
 //the class is registered, create the programme
 hwnd = CreateWindowEx (0, szClassName,_T("PROJET MR JAMES 2023 SD"),
 WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
5500,1000,HWND_DESKTOP,NULL, hThisInstance,NULL);

 HWND boutton = CreateWindow (TEXT ("static"),
 " ====>\4 JAMES_BRH BANK \4 <==== \n\nVOTRE SATISFACTION EST NOTRE DESIR \n",
 WS_CHILD | WS_VISIBLE | SS_CENTER,
 250,30,
 800,65,
 hwnd,
 (HMENU)0,
 NULL,
 NULL) ;
 HWND boutton1 = CreateWindow (TEXT ("button"),
 " 1.- BIENVENUE A JAMES_BRH BANK ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,150,
 1000,40,
 hwnd,
 (HMENU)1,
 NULL,
 NULL) ;

 HWND boutton2 = CreateWindow (TEXT ("button"),
 "2.- DEPOT DE FONDS ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,200,
 1000,40,
 hwnd,
 (HMENU)2,
 NULL,
 NULL) ;

 HWND boutton3 = CreateWindow (TEXT ("button"),
 "3.- RETRAIT DE FONDS ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,250,
 1000,40,
 hwnd,
 (HMENU)3,
 NULL,
 NULL) ;

 HWND boutton4 = CreateWindow (TEXT ("button"),
 "4.- TRANSFERT DE FONDS ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,300,
 1000,40,
 hwnd,
 (HMENU)4,
 NULL,
 NULL) ;

 HWND boutton5 = CreateWindow (TEXT ("button"),
 "5.- MODIFICATION DE COMPTE ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,350,
 1000,40,
 hwnd,
 (HMENU)5,
 NULL,
 NULL) ;
 HWND boutton6 = CreateWindow (TEXT ("button"),
 "6.- SUPPRIMER COMPTE ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,400,
 1000,40,
 hwnd,
 (HMENU)6,
 NULL,
 NULL) ;
 HWND boutton7 = CreateWindow (TEXT ("button"),
 "7.- BLOQUER COMPTE ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,450,
 1000,40,
 hwnd,
 (HMENU)7,
 NULL,
 NULL) ;
 HWND boutton8 = CreateWindow (TEXT ("button"),
 "8.- LISTER COMPTES ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,500,
 1000,40,
 hwnd,
 (HMENU)8,
 NULL,
 NULL) ;
 HWND boutton9 = CreateWindow (TEXT ("button"),
 "9.- SORTIE DU PROGRAMME ",
 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
 150,550,
 1000,40,
 hwnd,
 (HMENU)9,
 NULL,
 NULL) ;
if(!hwnd)
return FALSE;
 ShowWindow (hwnd, nCmdShow);
 UpdateWindow(hwnd);
 while (GetMessage (&messages, NULL, 0, 0))
 {
 TranslateMessage(&messages);
 DispatchMessage(&messages);
 }
 return messages.wParam;
}
 LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM
lParam)
 {
 switch (message) /* handle the messages */
 {
 case WM_RBUTTONUP:
 {
 case WM_COMMAND:
 switch(LOWORD(wParam))
 {
 case 0:
 DestroyWindow(hwnd);

 case 1:
 DestroyWindow(hwnd);
 break;
 case 2:
 DestroyWindow(hwnd);
 depot();
 break;
 case 3:
 DestroyWindow(hwnd);
 retraits();
 break;
 case 4:
 DestroyWindow(hwnd);
 transfert();
 break;
 case 5:
 DestroyWindow(hwnd);
 modifier();
 break;
 case 6:
 DestroyWindow(hwnd);
 supprimer();
 break;
 case 7:
 DestroyWindow(hwnd);
 bloquer();
 break;
 case 8:
 DestroyWindow(hwnd);
 lister_compte();
 break;
 case 9 :
 MessageBeep(MB_OK);
 DestroyWindow(hwnd);
 exit(0);

 break;
default :
return 0;
 }

 case WM_CREATE:
 break;
 case WM_DESTROY:
 PostQuitMessage (0);
 break;
 default:
 return DefWindowProc (hwnd, message, wParam, lParam);
 }
 return 0;
 }
 }
//Declaration de la structure
typedef struct ouverture OP;
struct ouverture
{
int code;
float solde;
char Nom[20];
char Prenom[20];
char sexe[5];
char adresse[20];
char telf[8];
};
OP OU;
 int n;
 FILE *fptr;

int verification(int RCode) {
fptr = fopen("compte.txt", "r");
do {
fscanf(fptr,"%d\t%s\t%s\t%s\t%s\t%s\t%d\t%f",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&
OU.adresse,&OU.telf,&OU.solde);
fflush(stdin);
if(OU.code == RCode) {
fclose(fptr);
return 1;
}
 } while(!feof(fptr));//Faire une lecture qu'on a une ligne dans le fichier
fclose(fptr);
return -1;
getch();
}
void ouverture()
{
int longueur=0;
 fptr = fopen("ouver.txt","r");
 if(fptr==NULL)
fptr = fopen("ouver.txt","w");
 else
 fptr = fopen("ouver.txt","a");
 printf("\t\t\t===\4 COMPTE BANCAIRE\4===\n\n");
 printf(" 1.- OUVERTURE DE COMPTE \n");
 printf(" CREATION DE COMPTE \n");
 scanf("%d",&n);;
for(int i =0 ; i<n; i++)
{
 printf("CREATION DU COMPTE # %d \n", i+1);
 printf("CODE DU CLIENT : ");
scanf("%d",&OU.code);
 printf("\nNOM DU CLIENT : ");
scanf("%s", &OU.Nom);
 printf("\nPRENOM DU CLIENT : ");
scanf("%s", &OU.Prenom);
 printf("\nSEXE : ");
scanf("%s", &OU.sexe);
printf("\nADRESSE :");
scanf("%s", &OU.adresse);
do {
 printf("\nTELEPHONE :+(509)");
 scanf("%s",&OU.telf);
 longueur = strlen(OU.telf);
 if(longueur !=8){
 printf(" \n8 CHIFFRES OBLIGATOIRE");
 printf("\nRESAISSISSER....\n");
 }
 }while(longueur !=8);
do {
 printf("SOLDE DU COMPTE :"); 
 scanf("%f",&OU.solde);
 } while(OU.solde <500);
}
fprintf(fptr,"%d\t%s\t%s\t%s\t%s\t%d\t%s\t%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.telf,OU.solde);
printf("-----------------------------------\n");
 printf(" CREATION REUSSI!!\n");
getch();
}
void depot()
{
int code2;
float Depot , x ;
printf("\t\t\t====\4 COMPTE BANCAIRE \4====\n\n");
 printf(" DEPOT DE FONDS\n");
 printf(" SAISIR LE CODE CLIENT : ");
scanf("%d", &code2);
OU.code++;
if(OU.code==code2){
printf(" SAISIR LE MONTANT SOUHAITER : ");
scanf("%f", &x);
}
else if (OU.code!=code2){
printf("vous avez entrer une code qui n'existe pas");
printf("\n RESAISIR VOTRE CODE :");
scanf("%d", &code2);
}
 if(verification(code2)==1)
 {
 FILE *fptr;
 FILE *file;
 fptr = fopen("ouver.txt", "r");
 file= fopen("CB.txt", "a");
 fscanf(fptr,"%d %s %s %s %s %s %f\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
 if(OU.code==code2){
 printf("NOM : %s\n",OU.Nom);
 printf("PRENOM : %s\n",OU.Prenom);
 printf(" Saisir le montant : ");
 scanf("%f", &x);
 fflush(stdin);
Depot = OU.solde + x;
printf(" Depot effectuer\n \n Nouveau solde %f ",Depot);
 printf("\nMONTANT_ACTUEL : %.2f\n\n",Depot);
fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.telf,OU.solde);
}
 fclose(fptr);
 remove("ouvert.txt");
 rename("CB.txt","depot.txt");
 }
 if(code2==0 && OU.code!=code2){
 printf(" Depot annuler !!! ");
 getch();
}
}
void retraits()
{
int code3, m;
FILE *fptr;
printf("Code compte :");
scanf("%d", &code3);
fptr = fopen("ouver.txt", "r");
do{
if( OU.code == code3)
{
printf("Montant: ");
scanf("%d", &m);
}
if (OU.code!=code3){
printf("vous avez entrer une code qui n'existe pas");
printf("\n RESAISIR VOTRE CODE :");
scanf("%d", &code3);
printf("Montant: ");
scanf("%d", &m);
}
if(m > OU.solde){
printf("SOLDE ISUFFISANT ");
printf("ENTRER UN VOTRE NOUVEAU MONTANT DE RETRAIT:");
scanf("%d", &m);
}
if(OU.solde >=m ){
printf("VOTRE RETRAIT EST VALIDE VOUS AVEZ ETIRE  %d$ ", m );
printf("....................................................");
}
fwrite(&OU,sizeof(OP),1,fptr);
}while(OU.code!=code3);
fclose(fptr);
}
void transfert()
{
 float Transf;
int reponse,ok,code1,code;
 printf("\n Entrer le code du client : ");
scanf("%d",&code);
do{
if(OU.code!=code){
	printf("vous avez entrer une code qui n'existe pas");
printf("\n RESAISIR VOTRE CODE :");
scanf("%d", &code);
}
}while(OU.code!=code);
 if(verification(code)==1)
{
 printf("\n voulez vous vraiment continuer de faire le transfert ?\n");
 printf("1.-OUI\t2.-NON\n");
 scanf("%d",&reponse);
 if(reponse==1)
{
 FILE *fptr,*file;
 fptr=fopen("compte.txt" ,"r");
 file=fopen("sg.txt" ,"a");
 fscanf(fptr,"%d %s %s %s %s %s %f\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
 if(code == OU.code)
 {
 OU.code=code;
 printf("CODE : %d\n",OU.code);
 printf("NOM : %s\n",OU.Nom);
 printf("PRENOM : %s\n",OU.Prenom);
 printf("SEXE : %s\n",OU.sexe);
 printf("ADRESSE : %s\n", OU.adresse);
 printf("TELEPHONE : %s\n", OU.telf);
 printf("SOLDE : %f\n",OU.solde);
 printf("\n Saisir la quantite d'argent a transferer : ");
 scanf("%f",&Transf);
 }
fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.
telf,OU.solde);
 fclose(file);
 fclose(fptr);
 remove("compte.txt");
 rename("sg.txt","compte.txt");
 }
 if(reponse==0)
{
 printf("\n transfert est annule avec succes\n\n");
 }
 }
 else
{
 printf("\n Desole ily a pas de transfert!\n");
 }
 //
printf("\n Entrer le code du client pour le transfert : ");
scanf("%d",&code1);
 if(verification(code1)==1)
{
 FILE *fptr,*file;
 fptr=fopen("compte.txt" ,"r");
 file=fopen("sg.txt" ,"a");
 fscanf(fptr,"%d %s %s %s %s %s %f\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
 if(code1 == OU.code)
{
 OU.code=code1;

 printf("CODE : %d\n",OU.code);
 printf("NOM : %s\n",OU.Nom);
 printf("PRENOM : %s\n",OU.Prenom);
 printf("SEXE : %s\n",OU.sexe);
 printf("ADRESSE : %s\n", OU.adresse);
 printf("TELEPHONE : %s\n", OU.telf);
 printf("SOLDE : %f\n",OU.solde);
 OU.solde=OU.solde+Transf;
 printf("\nCOMPTE EXISTE \n\n");
 }


fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n,OU.code",OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.
telf,OU.solde);
 fclose(file);
 fclose(fptr);
 remove("compte.txt");
 rename("sg.txt","compte.txt");
 }
else
{
 printf("\n Ce code n'existe pas dans le fichier \n");
}
 printf("\nEst-ce que le compte existe? \n");
printf("1.-Oui\n2.-Non\n");
scanf("%d",&ok);
if(ok==1)
{
printf("Transfert OK!");
}
if(ok==2)
{
 FILE *fptr,*file;
 fptr = fopen("compte.txt" ,"r");
 file = fopen("sg.txt" ,"a");
 fscanf(fptr,"%d %s %s %s %s %s %f\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
 if(code == OU.code)
{
 OU.code=code;
 OU.solde=OU.solde+Transf;
fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.
telf,OU.solde);
 fclose(file);
 fclose(fptr);
 remove("compte.txt");
 rename("sg.txt","compte.txt");
 printf("\n Echec !!");
 printf("\n Code non trouvable\n");
 }
 }
 getch();
}
void modifier()
{
 struct ouverture OP;
 int CodeRech,longueur,reponse;
 printf("\t\t\t---COMPTE BANCAIRE----\n\n");
 printf(" \t\t MODIFICATION D'UN COMPTE \xB2\xB2\xB2\n");
printf("Entrer le code du client a modifier! : ");
scanf("%d", &CodeRech);
do{
if (CodeRech!=OU.code)
{
printf("vous avez entrer une code qui n'existe pas");
printf("\n RESAISIR VOTRE CODE :");
scanf("%d", &CodeRech);
}
}while(CodeRech!=OU.code);
if(verification(CodeRech)==1)
{
 printf("Voulez vous vraiment modifier votre compte ? \n");
 printf("1.-Oui\t2.-Non\n");
 do{
 scanf("%d", &reponse);
 fflush(stdin);
 } while(reponse!=1 && reponse!=2);

if(reponse==1)
{
 FILE *fptr;
 FILE *file;
 fptr = fopen("clevens.txt", "r");
 file= fopen("sg.txt", "a");
 fscanf(fptr,"%d %s %s %s %s %s %f",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
 if(OU.code==CodeRech)
{
OU.code=CodeRech;
printf("NOUVEAU NOM : ");
scanf("%s",&OU.Nom);
 printf("NOUVEAU PRENOM : ");
scanf("%s",&OU.Prenom);
fflush(stdin);
 printf("NOUVELLE ADRESSE : ");
scanf("%s",&OU.adresse);
 printf("\nTELEPHONE :+(509)");
 scanf("%s",&OU.telf);
 longueur = strlen(OU.telf);
 if(longueur !=8)
{
 printf(" \n8 CHIFFRES OBLIGATOIRE");
 printf("\nRESAISSISSER....\n");
 }
 }

fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.
telf,OU.solde);
 fclose(file);
 fclose(fptr);
 remove("compte.txt");
 rename("sg.txt","compte.txt");
 printf("Modification effectuee avec succes.");
 }
 else if(reponse == 2)
 printf("Modification annulee!!");
}
 else 
 printf("Code insaisissable !");
 getch();
}
void supprimer()
{
 int CodeRech2,reponse,test=0;
printf("\t\t\t====----\n\n");
printf(" \t\t SUPRESSION D'UN COMPTE \n");
printf("Saisir le code du client a supprimer : ");
scanf("%d", &CodeRech2);
do{
if(CodeRech2!=OU.code){
printf("Resaisir votre code\n");
scanf("%d", &CodeRech2);
}
}while(CodeRech2!=OU.code);
if(verification(CodeRech2)==1) {
 printf("Voulez vous vraiment faire la suppression ? \n");
 printf("1.-Oui\t2.-Non\n");
 
 scanf("%d", &reponse);
 fflush(stdin);
if(reponse==1) {
 FILE *fptr;
 FILE *file;
 fptr = fopen("compte.txt", "r");
 file= fopen("sup.txt", "a");
 test++;
fscanf(fptr,"%d %s %s %s %s %s %f\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
 if(OU.code != CodeRech2){
fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.telf,OU.solde);
 }
fclose(file);
 fclose(fptr);
 remove("compte.txt");
rename("sup.txt","compte.txt");
printf("Compte supprimer\n");
}
if(reponse==2)
 printf("Suppression annuler!");
}
else{
printf("Code insaisissable!");
}
 getch();
}
void bloquer()
{
printf("\t\t\t====----\n\n");
printf(" \t\t BLOCAGE D'UN COMPTE \n");
int code4;
FILE *fptr,*file;
printf("Entrez le numero du compte que vous voulez bloquer : ");
scanf("%d", &code4);
do{
if(OU.code!=code4){
	printf("code incorrect\n");
	printf("resaisie le code du compte a bloquer :");
	scanf("%d", &code4);
}
}while(OU.code!=code4);
if(verification(code4)==1)
{
fptr = fopen("compte.txt", "r");
file = fopen("sg.txt", "a");
fscanf(fptr,"%d %s %s %s %s %s %f\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde);
if(code4 == OU.code){
printf("Compte bloque avec succes!");
}
fprintf(file,"%d\n%s\n%s\n%s\n%s\n%s\n%f\n",OU.code,OU.Nom,OU.Prenom,OU.sexe,OU.adresse,OU.telf,OU.solde);
fclose(file);
fclose(fptr);
remove("compte.txt");
rename("sg.txt", "compte.txt");
 }
else
 printf("Compte n'existe pas");
}
void lister_compte(){
 FILE *fptr;
 fptr = fopen("compte.txt", "r");
 int test=0;
 system("cls");
 printf("\t\t\t----COMPTES BANCAIRE----\n\n");
 printf(" \t AFFICHAGE DES COMPTES CLIENT \n\n");

 do{
test++;
printf("CODE : %d\n",OU.code);
 printf("NOM : %s\n",OU.Nom);
 printf("PRENOM : %s\n",OU.Prenom);
 printf("SEXE : %s\n",OU.sexe);
 printf("ADRESSE : %s\n",OU.adresse);
 printf("TELEPHONE : %s\n",OU.telf);
 printf("SOLDE : %.3f\n",OU.solde);
 printf("---------------------------\n");
}while(fscanf(fptr,"%d %s %s %s %s %s %f%s\n",&OU.code,&OU.Nom,&OU.Prenom,&OU.sexe,&OU.adresse,&OU.telf,&OU.solde)!=EOF);

 fclose(fptr);
 if(test==0)
 {
 system("cls");
 printf("\nCompte vide\n");
 }
}
