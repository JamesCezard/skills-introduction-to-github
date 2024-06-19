#include "GestCorpProg.h"
#include<limits>

int tr = 0;
void GestCorpProd::menu_P_Executif()
{
	char choix;
	do 
	{
		cout << "|==========Menu Principal==========|\n";
		cout << "|[E] Enregistrer un nouveau produit|\n";
		cout << "|[M] Modifier un produit           |\n";
		cout << "|[S] Supprimer un produit          |\n";
		cout << "|[A] Afficher les produits         |\n";
		cout << "|[G] Gestion de produits           |\n";
		cout << "|[R] Rechercher un produit         |\n";
		cout << "|[Q] Quitter le programme          |\n\n";
		cout << "|Faite votre choix                 |";
		cin >> choix;

		switch (choix)
		{
		case 'E':
		case 'e':
		{
			char choice;

			do
			{
				system("cls");

				enregistrer_menu();
				cout << "|Faite votre choix                 |\n";
				cin >> choice;

				switch (choice)
				{
					case 'A':
					case 'a':
					{
						int tst = 0;
						do
						{
							int cat, s_cat;
							categorie_menu();
							cout << "\nEntrer l'indice de la categorie\n\n";
							while(!(cin >> cat))
							{
								cout << "Saisie incorrecte. Vous devez saisir le chiffre correspondant a la categorie voulu.\n\n";

								cin.clear();
								cin.ignore();
							}
							
							if (cat == 1 || cat == 4)
							{

								cout << "\nEntrer l'indice du type\n\n";
								s_categorie_menu2();
								while (!(cin >> s_cat))
								{
									cout << "Saisie incorrecte. Vous devez saisir le chiffre correspondant au type voulu.\n\n";

									cin.clear();
									cin.ignore();
								}
								while (s_cat < 0 || s_cat>2)
								{
									cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
									cin >> s_cat;
									tr++;
								}
								enregistrer_Cat(cat, s_cat);						
								tst = 1;
							}
							else if (cat == 0)
							{
								cout << "\nEntrer l'indice du type\n\n";
								s_categorie_menu1();
								cin >> s_cat;
								while (s_cat < 0 || s_cat>2)
								{
									cout << "Saisie incorrecte.\n"<<"Entrer de nouveau l'indice.\n";
									cin >> s_cat;
									tr++;
								}
								enregistrer_Cat(cat, s_cat);
								tst = 1;
								
							}
							else if (cat == 2)
							{
								cout << "\nEntrer l'indice du type\n\n";
								s_categorie_menu3();
								cin >> s_cat;
								while (s_cat < 0 || s_cat>2)
								{
									cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
									cin >> s_cat;
									tr++;
								}
								enregistrer_Cat(cat, s_cat);
								tst = 1;
							}
							else if (cat == 3)
							{
								cout << "\nEntrer l'indice du type\n\n";
								s_categorie_menu4();
								cin >> s_cat;
								while (s_cat < 0 || s_cat>2)
								{
									cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
									cin >> s_cat;
									tr++;
								}
								enregistrer_Cat(cat, s_cat);
								tst = 1;
								
							}
							else
							{
								cout << "\nSaisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
								tst = 0;
							}
						} while (tst == 0);
						break;
					}

					case 'B':
					case 'b':
					{
						int val;
						cout << "Entrer le nombre de produit que vous voulez enregistrer \nValeur comprise entre 2 et 10 \n";
						cin >> val;
						while (val < 2 || val>10)
						{
							cout << "Valeur incorrecte\n"<<"Entrer la valeur de nouveau.\n";
							cin >> val;
							tr++;
						}

						//cout<<"\nSi vous voulez stopper la saisie tapez le mot "stops" comme marque.\n";
						for (int i = 1; i = val; i++)
						{
							int test = 0;
							if (test != 2)
							{
								do
								{
									int cat, s_cat;
									categorie_menu();
									cout << "\nEntrer l'indice de la categorie\n\n";
									cin >> cat;
									if (cat == 1 || cat == 4)
									{

										cout << "\nEntrer l'indice du type\n\n";
										s_categorie_menu2();
										cin >> s_cat;
										while (s_cat < 0 || s_cat>2)
										{
											cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
											cin >> s_cat;
											tr++;
										}
										test = enregistrer_Val(cat, s_cat);
										if (test == 2)
										{
											cout << "Saisie stopper avec succes.\n";
											cin.ignore();
											break;
										}
										else if (test == 3)
										{
											cout << "Impossible d'enregistrer des produits dans cette categorie.\n";
										}
										else
										{
											cout << "\nProduit enregistrer avec succes.\n\n";
											test = 1;
										}
									}
									else if (cat == 0)
									{
										cout << "\nEntrer l'indice du type\n\n";
										s_categorie_menu1();
										cin >> s_cat;
										while (s_cat < 0 || s_cat>2)
										{
											cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
											cin >> s_cat;
											tr++;
										}
										enregistrer_Val(cat, s_cat);
										cout << "\nProduit enregistrer avec succes.\n\n";
										test = 1;
									}
									else if (cat == 2)
									{
										cout << "\nEntrer l'indice du type\n\n";
										s_categorie_menu3();
										cin >> s_cat;
										while (s_cat < 0 || s_cat>2)
										{
											cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
											cin >> s_cat;
											tr++;
										}
										enregistrer_Val(cat, s_cat);
										cout << "\nProduit enregistrer avec succes.\n\n";
										test = 1;
									}
									else if (cat == 3)
									{
										cout << "\nEntrer l'indice du type\n\n";
										s_categorie_menu4();
										cin >> s_cat;
										while (s_cat < 0 || s_cat>2)
										{
											cout << "Saisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
											cin >> s_cat;
											tr++;
										}
										enregistrer_Val(cat, s_cat);
										cout << "\nProduit enregistrer avec succes.\n\n";
										test = 1;
									}
									else
									{
										cout << "\nSaisie incorrecte.\n" << "Entrer de nouveau l'indice.\n";
										test = 0;
									}
								} while (test == 0);
							}
							else
							{
								i = val + 1;
							}

						}


						break;
					}

					case 'C':
					case 'c':
					{

						break;
					}


					default:
					{
						cout << "Saisie incorrecte\n";
						break;
					}
				}


			} while (choice != 'M' || choice != 'm');
			break;
		}

		case 'M':
		case 'm':
		{

			break;
		}

		case 'S':
		case 's':
		{

			break;
		}

		case 'A':
		case 'a':
		{

			break;
		}

		case 'G':
		case 'g':
		{

			break;
		}

		case 'R':
		case 'r':
		{

			break;
		}

		case 'Q':
		case 'q':
		{

			break;
		}
		


		default:
		{
			system("cls");
			cout << "Saisie incorrect\n";
			break;
		}
		}

	}while(choix != 'Q' || choix != 'q');
}

GestCorpProd::GestCorpProd()
{

}

GestCorpProd Gest_1[5][3][10];

//Indice de la catégorie des boissons
int Boissons = 0;

//Indice de la catégorie des produits laitiers
int Prod_L = 1;

//Indice de la catégorie des produits farineux
int Prod_F = 2;

//Indice de la catégorie des céréales
int Cereales = 3;

//Indice de la catégorie des hors catégories
int H_C = 4;

//Indice Boissons alcoolisé
int B_A = 0;

//Indice Boissons non-alcoolisé
int B_N_A = 1;

//Indice autre type de boissons
int B_I = 2;

//Indice Produits laitiers sucré
int P_L_S = 0;

//Indice Produits laitiers non-sucré
int P_L_N_S = 1;

//Indice autre type de Produits laitiers
int P_L_I = 2;

//Indice des produits farineux macaronis
int P_F_M = 0;

//Indice des produits farineux spaghettis
int P_F_S = 1;

//Indice autre type de Produits farineux
int P_F_I = 2;

//Indice des céréales Maïs
int Cr_M = 0;

//Indice des céréales Riz
int Cr_R = 1;

//Indice des autres types de céréales
int Cr_I = 2;

//Indice des produits hors catégories sucrés
int H_C_S = 0;

//Indice des produits hors catégories non-sucrés
int H_C_N_S = 1;

//Indice des autres types de produits hors catégories
int H_C_I = 2;

//Maximum de produits par sous catégorie
int max_prod = 10;

//Maximum d'unités par produits (caisses ou sacs)
int maxi = 1000;

//Minimum d'alerte par unités de produits (caisses ou sacs)
int mini = 300;


void GestCorpProd::categorie_menu()
{
	cout << "|==============Categorie==============| \n";
	cout << "|[0] Boissons                         |\n";
	cout << "|[1] Produits laitiers                 |\n";
	cout << "|[2] Produits farineux                |\n";
	cout << "|[3] Cereales                         |\n";
	cout << "|[4] Autres                           |\n\n";
}

void GestCorpProd::s_categorie_menu1()
{
	cout << "|==============Type==============|\n";
	cout << "|[0] Alcooliser                  |\n";
	cout << "|[1] Non-alcooliser              |\n";
	cout << "|[2] Autres                      |\n\n";
}

void GestCorpProd::s_categorie_menu2()
{
	cout << "|==============Type==============|\n";
	cout << "|[0] Sucree                      |\n";
	cout << "|[1] Non-sucree                  |\n";
	cout << "|[2] Autres                      |\n\n";
}

void GestCorpProd::s_categorie_menu3()
{
	cout << "|==============Type==============|\n";
	cout << "|[0] Macaroni                    |\n";
	cout << "|[1] Spaghetti                   |\n";
	cout << "|[2] Autres                      |\n\n";
}

void GestCorpProd::s_categorie_menu4()
{
	cout << "|==============Type==============|\n";
	cout << "|[0] Mais                        |\n";
	cout << "|[1] Riz                         |\n";
	cout << "|[2] Autres                      |\n\n";
}

void GestCorpProd::enregistrer_menu()
{
	cout << "|============Enregistrement============| \n";
	cout << "|[A] Par categorie                     |\n";
	cout << "|[B] Par nombres de produit            |\n";
	cout << "|[C] Avec un mot d'arrêt               |\n\n";

}

void GestCorpProd::enregistrer_Cat(int Cat, int S_Cat)
{
	for (int i = 0; i < 10; i++)
	{
		if (Gest_1[Cat][S_Cat][i].Marque.empty() && Gest_1[Cat][S_Cat][i].Date_E.empty() && Gest_1[Cat][S_Cat][i].Quantite == 0 && Gest_1[Cat][S_Cat][i].prix_E == 0 && Gest_1[Cat][S_Cat][i].ID.empty()&& Gest_1[Cat][S_Cat][i].Date_S.empty()&& Gest_1[Cat][S_Cat][i].prix_S==0&& Gest_1[Cat][S_Cat][i].Categorie.empty())
		{
			int test = 0;
			do
			{
				char initiale;
				cout << "Avez vous un stock initial dans ce produit? Y/N";
				cin >> initiale;
				if (initiale == 'Y' || initiale == 'y')
				{
					cout << "Entrer la marque du produit: ";
					cin >> Gest_1[Cat][S_Cat][i].Marque;
					cout << "Entrer la quantite initiale";
					cin >> Gest_1[Cat][S_Cat][i].Quantite;
					cout << "Entrer le prix d'achat des caisses ou des sacs initial s'il y a: ";
					cin >> Gest_1[Cat][S_Cat][i].prix_E;
					cout << "Entrer le prix de vente de la caisse ou du sac : ";
					cin >> Gest_1[Cat][S_Cat][i].prix_S;
					cout << "Entrer la date d'entre de stock(DD/MM/YY): ";
					cin >> Gest_1[Cat][S_Cat][i].Date_E;
					if (Cat == 0) 
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Boissons";
					}
					if (Cat == 1)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Produits laitiers";
					}
					if (Cat == 2)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Produits farineux";
					}
					if (Cat == 3)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Cereale";
					}
					if (Cat == 4)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Autre";
					}
					string cd1 = to_string(Cat);
					string cd2 = to_string(S_Cat);
					string cd3 = to_string(i);

					Gest_1[Cat][S_Cat][i].ID = "Pr-" + cd1 + "-" + cd2 + "_" + cd3;
					
					cout << "\nProduit enregistrer avec succes.\n\n";
								
					

				}
				else if (initiale == 'N' || initiale == 'n')
				{
					cout << "Entrer la marque du produit: ";
					cin >> Gest_1[Cat][S_Cat][i].Marque;
					Gest_1[Cat][S_Cat][i].Quantite = 0;
					Gest_1[Cat][S_Cat][i].prix_E = 0;
					cout << "Entrer le prix de vente de la caisse ou du sac : ";
					cin >> Gest_1[Cat][S_Cat][i].prix_S;
					cout << "Entrer la date d'entre de stock(DD/MM/YY): ";
					cin >> Gest_1[Cat][S_Cat][i].Date_E;

					if (Cat == 0)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Boissons";
					}
					if (Cat == 1)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Produits laitiers";
					}
					if (Cat == 2)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Produits farineux";
					}
					if (Cat == 3)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Cereale";
					}
					if (Cat == 4)
					{
						Gest_1[Cat][S_Cat][i].Categorie = "Autre";
					}
					string cd1 = to_string(Cat);
					string cd2 = to_string(S_Cat);
					string cd3;
					if (i > 0) 
					{
						int ID_size=Gest_1[Cat][S_Cat][i].ID.length();
						string num = Gest_1[Cat][S_Cat][i].ID.substr(7, ID_size - 7);
						if (stoi(num) > 9)
						{
							int N_num = stoi(num) + 1;
							cd3 = to_string(N_num);
						}
					}
					else
					{
						cd3 = to_string(i);
					}
					
					Gest_1[Cat][S_Cat][i].ID = "Pr-" + cd1 + "-" + cd2 + "_" + cd3;

					cout << "\nProduit enregistrer avec succes.\n\n";
					
				}
				else
				{
					cout << "Entrer incorrecte.";
					test = 0;
				}
			} while (test == 0);
			cin.ignore();

		}
		else if (!Gest_1[Cat][S_Cat][i].Marque.empty() || !Gest_1[Cat][S_Cat][i].Date_E.empty() || Gest_1[Cat][S_Cat][i].Quantite != 0 || Gest_1[Cat][S_Cat][i].prix_E != 0 || !Gest_1[Cat][S_Cat][i].ID.empty() || !Gest_1[Cat][S_Cat][i].Date_S.empty() || Gest_1[Cat][S_Cat][i].prix_S != 0 || !Gest_1[Cat][S_Cat][i].Categorie.empty())
		{
			cout << "\nImpossible d'enregistrer un nouveau produit dans ce type\n\n";
		}
		else
		{
			continue;
		}
		

	}
}

int GestCorpProd::enregistrer_Val(int Cat, int S_Cat)
{
	for (int i = 0; i < 10; i++)
	{
		if (Gest_1[Cat][S_Cat][i].Marque.empty() && Gest_1[Cat][S_Cat][i].Date_E.empty() && Gest_1[Cat][S_Cat][i].Quantite == 0 && Gest_1[Cat][S_Cat][i].prix_E == 0 && Gest_1[Cat][S_Cat][i].ID.empty() && Gest_1[Cat][S_Cat][i].Date_S.empty() && Gest_1[Cat][S_Cat][i].prix_S == 0 && Gest_1[Cat][S_Cat][i].Categorie.empty())
		{
			int tst = 0;
			do
			{
				char initiale;
				cout << "Avez vous un stock initial dans ce produit? Y/N";
				cin >> initiale;
				if (initiale == 'Y' || initiale == 'y')
				{
					cout << "Entrer la marque du produit: ";
					cin >> Gest_1[Cat][S_Cat][i].Marque;
					if (Gest_1[Cat][S_Cat][i].Marque == "stops" || Gest_1[Cat][S_Cat][i].Marque == "STOPS")
					{
						tst == 2;
						return tst;
					}
					else
					{
						cout << "Entrer la quantite initiale";
						cin >> Gest_1[Cat][S_Cat][i].Quantite;
						cout << "Entrer le prix d'achat des caisses ou des sacs initial s'il y a: ";
						cin >> Gest_1[Cat][S_Cat][i].prix_E;
						cout << "Entrer le prix de vente de la caisse ou du sac : ";
						cin >> Gest_1[Cat][S_Cat][i].prix_S;
						cout << "Entrer la date d'entre de stock(DD/MM/YY): ";
						cin >> Gest_1[Cat][S_Cat][i].Date_E;

						tst = 1;
						return tst;
					}

				}
				else if (initiale == 'N' || initiale == 'n')
				{
					cout << "Entrer la marque du produit: ";
					cin >> Gest_1[Cat][S_Cat][i].Marque;
					if (Gest_1[Cat][S_Cat][i].Marque == "stops" || Gest_1[Cat][S_Cat][i].Marque == "STOPS")
					{
						tst = 2;
						return tst;

					}
					else
					{
						Gest_1[Cat][S_Cat][i].Quantite = 0;
						Gest_1[Cat][S_Cat][i].prix_E = 0;
						cout << "Entrer le prix de vente de la caisse ou du sac : ";
						cin >> Gest_1[Cat][S_Cat][i].prix_S;
						cout << "Entrer la date d'entre de stock(DD/MM/YY): ";
						cin >> Gest_1[Cat][S_Cat][i].Date_E;

						tst = 1;
						return tst;
					}
					
				}
				else
				{
					cout << "Entrer incorrecte.\n\n";
					cin.ignore();
					tst = 0;
				}
			} while (tst == 0);
			cin.ignore();
			

		}
		else if (!Gest_1[Cat][S_Cat][i].Marque.empty() || !Gest_1[Cat][S_Cat][i].Date_E.empty() || Gest_1[Cat][S_Cat][i].Quantite != 0 || Gest_1[Cat][S_Cat][i].prix_E != 0 || !Gest_1[Cat][S_Cat][i].ID.empty() || !Gest_1[Cat][S_Cat][i].Date_S.empty() || Gest_1[Cat][S_Cat][i].prix_S != 0 || !Gest_1[Cat][S_Cat][i].Categorie.empty())
		{
			return 3;
			break;
		}
		else
		{
			continue;
		}


	}
}
