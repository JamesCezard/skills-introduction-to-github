#include <iostream>
#include<limits>
#include<string>
using  namespace std;

class GestCorpProd {
	//Déclaration des Attribut
	private:
		string Marque;
		string ID;
		int Quantite=0;
		float prix_S=0;
		float prix_E=0;
		string Date_E;
		string Date_S;
		string Categorie;

	//Déclaration des méthodes
	public:
		//void menu_P_Affiche();
		void menu_P_Executif();
		void enregistrer_menu();
		void entrepot_menu();
		void modifier_menu();
		void rechercher_menu();
		void lister_menu();
		void categorie_menu();
		void s_categorie_menu1();
		void s_categorie_menu2();
		void s_categorie_menu3();
		void s_categorie_menu4();
		void enregistrer_Cat(int Cat, int S_Cat);
		int enregistrer_Val(int Cat,int S_Cat);
		void enregistrer();
		int entrepot_depot(int plus);
		int entrepot_retrait(int moins);
		void modifier_Marque(string code);
		void modifier_Quqntite(string code);
		//void modifier_Categorie(string code);
		void rechercher_Id(string code);
		void rechercher_Cat(string Cat);
		void rechercher_Date(string Dat_ent);
		void rechercher_M(string M);
		void lister_alpha();
		void lister_date_ent();
		void lister_quantité();

	
		//Déclaration des mutateurs
		void modif_Marque(string New_M);
		void modif_Quantite(int Nem_Qte);
		void modif_categorie(string New_Cat);
		void modif_prix(int New_px);

		//Déclaration des contructeurs
		GestCorpProd();


};
