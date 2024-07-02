#include <iostream>

using namespace std;
#include"cente_de_beaute.h"
#include"client.h"
#include"service.h"
#include"Employer.h"
#include"personne.h"
#include"Facial_service.h"
#include"Rendez_vous.h"
#include"hair_cut_femme.h"
#include"hair_cut_homme.h"
#include"hair_cut_service.h"
#include<fstream>
#include"tableau.h"
#include<Map.h>
#include<list>

int main(){

fstream f;
int choix,choix1, choix4, choix3;;
Employer e;
Employer::creefichier(f);


 cout<<" vouler vous traiter donner votre choix :"<<endl;

  do
    {
        cout<<" |----------------------------|"<<endl;
        cout<<" |1):* fichier des employers  |"<<endl;
        cout<<" |2):* manipulation des objets|"<<endl;// manipuler n'importe quel  objet
        cout<<" |----------------------------|"<<endl;

    cin>>choix1;
      switch(choix1){
          case 1:
          {
                do
                {
                        cout<<"|-------------------|"<<endl;
                        cout<<"|1): remplir        |"<<endl;
                        cout<<"|2): afficher       |"<<endl;
                        cout<<"|3):ajouter employer|"<<endl;
                        cout<<"|0):retour          |"<<endl;
                        cout<<"--------------------|"<<endl;
                        cout<<"donner votre choix"<<endl;
                        cin>>choix;
                    switch(choix)
                    {
                          case 1:
                            {
                            e.remplir(f);
                            break;
                            }
                         case 2:
                             {
                            e.aficher_fichier(f);
                            break;
                            }
                        case 3:
                            {
                            e.operator+(f);
                            break;
                            }
                        case 0:{
                                break;
                                }
                        default:
                                {
                                cout<<"choix invalide  ";
                                break;
                                }
                    }
                }
            while(choix!=0);
            break;
          }
      case 2:
          {
            do
                {
                cout<<"************************************************"<<endl;
                cout<<"*vouler vous manipuler le tableau de quel objet "<<endl;
                cout<<"|--------------------|"<<endl;
                cout<<"|1) :client          |"<<endl;
                cout<<"|2) :employer        |"<<endl;
                cout<<"|3) :hair_cut_homme  |"<<endl;
                cout<<"|4) :hair_cut_femme  |"<<endl;
                cout<<"|5) :facial_sevice   |"<<endl;
                cout<<"|0) :sortir          |"<<endl;
                cout<<"|--------------------|"<<endl;

                cout<<"votre choix"<<endl;
                cin>>choix3;
              switch(choix3)
                    {
                    case 1:
                        {
                    tableau<client*> t;


                        do
                            {
                                cout<<"*********************"<<endl;
                                cout<<"*type de manipulation"<<endl;
                                cout<<"|-------------------------------|"<<endl;
                                cout<<"| 1) : ajouter client           |"<<endl;
                                cout<<"| 2) : supprimer dernier client |"<<endl;
                                cout<<"| 3) : afficher premier client  |"<<endl;
                                cout<<"| 4) : afficher dernier  client |"<<endl;
                                cout<<"| 5) : tableau vide ou non      |"<<endl;
                                cout<<"| 6) : ajouter/supp des service |"<<endl;
                                cout<<"| 0) : sortie                   |"<<endl;
                                cout<<"|-------------------------------|"<<endl;

                                cout<<"votre choix"<<endl;
                                cin>>choix4;

                            switch(choix4)
                                {
                            case 1:
                                    {
                                client* a=new client();
                                cout<<"saisir un client"<<endl;
                                cin>>*a;
                                t.push(a);
                                break;
                                    }
                            case 2:
                                    {
                                t.pop();
                                break;
                                    }
                            case 3:
                                    {
                                cout<<*t.front();
                                break;
                                    }
                            case 4:
                                    {
                                cout<<*t.back();
                                break;
                                    }
                            case 5:
                                {
                                    cout<<t.empty()<<endl;
                                    break;
                                }
                              //  *****************************
                            case 6:
                                     {
                                    int ch,chh,i;
                                    string m;
                                   do
                                   {
                                        cout<<"\n****************************************************"<<endl;
                                        cout<<"\n vouler vous manipuler  les services du client"<<endl;
                                        cout<<" |-----------|"<<endl;
                                        cout<<" |1)ajouter  |"<<endl;
                                        cout<<" |2)supprimer|"<<endl;
                                        cout<<" |0)quitter  |"<<endl;
                                        cout<<" |-----------|"<<endl;

                                       cin>> ch;
                                       switch(ch)
                                       {
                                           case 1:
                                              {
                                                  cout<<"donner l'indice du client a ajouter ses services"<<endl;
                                                  cin>>i;
                                                  t[i]->ajout_services();
                                                  break;
                                               }
                                            case 2:
                                               {
                                                  cout<<"donner l'indice du client a supprimer l'un ses services"<<endl;
                                                  cin>>i;
                                                 t[i]->supp_services();
                                                  break;
                                               }
                                            case 0:
                                                {
                                                    break;
                                                }
                                            default:
                                                {
                                                    cout<<"choix invalide"<<endl;
                                                    break;
                                                }
                                          }
                                  }
                                 while(ch!=0);
                                 break;
                                }

                            case 0:
                                {
                                    break;
                                }
                            default:
                                {
                                cout << "choix invalide" << endl;
                                break;
                                }
                                //**********************

                                }
                        }
                      while(choix4!=0);
                      break;
                        }
                   case 2:
                    {

                    tableau<Employer*> t;
                        do
                            {
                                cout<<"**********************"<<endl;
                                cout<<"type de manipulation  "<<endl;
                                cout<<" |----------------------------------------------|"<<endl;
                                cout<<" |1) : ajouter employer                         |"<<endl;
                                cout<<" |2) : supprimer dernier employer               |"<<endl;
                                cout<<" |3) : afficher premier employer                |"<<endl;
                                cout<<" |4) : afficher dernier  employer               |"<<endl;
                                cout<<" |5) : tableau vide ou non                      |"<<endl;
                                cout<<" |6) : modifier le salaire du  dernier employer |"<<endl;
                                cout<<" |0) : sortie                                   |"<<endl;
                                cout<<" |----------------------------------------------|"<<endl;

                                cout<<"votre choix"<<endl;
                                cin>>choix4;
                            switch(choix4)
                                {
                            case 1:
                                    {
                                Employer* a=new Employer();
                                cout<<"saisir un employer"<<endl;
                                cin>>*a;
                                t.push(a);
                                break;
                                    }
                            case 2:
                                    {
                                t.pop();
                                break;
                                    }
                            case 3:
                                    {
                                Employer *a= t.front();
                                cout<<*a;
                                break;
                                        }

                            case 4:
                                    {
                                Employer* a= t.back();
                                cout<<*a;
                                break;
                                    }
                            case 5:
                                {
                                    cout<<t.empty()<<endl;
                                    break;
                                }
                           case 6:
                                {
                                  if(t.empty()==false)
                                  {
                                   float s,i;
                                  cout<<"update salaire :";
                                  cin>>s;
                                  cout<<"position du employer a modifier  :";
                                  cin>>i;
                                   t[i]->setsalaire(s);
                                   break;
                                  }

                                }
                            case 0:
                                {
                                    break;
                                }
                            default:
                                {
                                cout << "choix invalide" << endl;
                                break;
                                }

                              }
                        }
                      while(choix4!=0);
                      break;
                        }
                case 3:
                        {
                    tableau<hair_cut_homme*> t;
                        do
                            {
                                cout<<"\n********************************"<<endl;
                                cout<<"\ntype des manipulations:       "<<endl;
                                cout<<" |--------------------------------------------------|"<<endl;
                                cout<<" |1) : ajouter hair_cut_homme                       |"<<endl;
                                cout<<" |2) : supprimer dernier hair_cut_homme             |"<<endl;
                                cout<<" |3) : afficher premier hair_cut_homme              |"<<endl;
                                cout<<" |4) : afficher dernier  hair_cut_homme             |"<<endl;
                                cout<<" |5) : tableau vide ou non                          |"<<endl;
                                cout<<" |6) : modifier la liste des coupe ou des machines  |"<<endl;
                                cout<<" |0) : sortie                                       |"<<endl;
                                cout<<" |--------------------------------------------------|"<<endl;

                                cout<<"votre choix"<<endl;
                                cin>>choix4;

                            switch(choix4)
                                {
                            case 1:
                                    {
                                hair_cut_homme* a=new hair_cut_homme();
                                cout<<"saisir un hair_cut_homme service"<<endl;
                                cin>>*a;
                                t.push(a);
                                break;
                                    }
                            case 2:
                                    {
                                t.pop();
                                break;
                                    }
                            case 3:
                                    {
                                hair_cut_homme* a= t.front();
                                cout<<*a;
                                break;
                                        }

                            case 4:
                                    {
                                hair_cut_homme* a= t.back();
                                cout<<*a;
                                a->nb_coup_meme_type();
                                break;
                                    }
                            case 5:
                                {
                                    cout<<t.empty()<<endl;
                                    break;
                                }
                            case 6:
                                {
                                    int ch,chh,i;
                                    string m;
                                   do
                                   {
                                        cout<<"\n****************************************************"<<endl;
                                        cout<<"\n vouler vous manipuler  les coupes ou les machines"<<endl;
                                        cout<<" |-----------|"<<endl;
                                        cout<<" |1)machines |"<<endl;
                                        cout<<" |2)coupes   |"<<endl;
                                        cout<<" |0)quitter  |"<<endl;
                                        cout<<" |-----------|"<<endl;

                                       cin>> ch;
                                       switch(ch)
                                       {
                                           case 1:
                                               {
                                                  cout<<"taper 1) si vous vouler ajouter et 2) si supprimer "<<endl;
                                                  cout<<"donner votre choix et la position de modification le nom du machine :";
                                                  cin>>chh>>m>>i;
                                                  if(chh==1)
                                                      t[i]->ajout_machine(m);
                                                  if(chh==2)
                                                      t[i]->supp_machine(m);
                                                  break;
                                               }
                                            case 2:
                                               {
                                                  cout<<"taper 1) si vous vouler ajouter et 2) si supprimer "<<endl;
                                                  cout<<"donner votre choix et le nom du coupe:";
                                                  cin>>chh>>m>>i;
                                                  if(chh==1)
                                                      t[i]->ajout_coupeh(m);
                                                  if(chh==2)
                                                      t[i]->supp_coupeh(m);
                                                  break;
                                               }
                                            case 0:
                                                {
                                                    break;
                                                }
                                            default:
                                                {
                                                    cout<<"choix invalide"<<endl;
                                                    break;
                                                }
                                          }
                                  }
                                 while(ch!=0);
                                 break;
                                }

                            case 0:
                                {
                                    break;
                                }
                            default:
                                {
                                cout << "choix invalide" << endl;
                                break;
                                }
                            }
                       }
                      while(choix4!=0);
                      break;
                        }

        case 4:
                        {
                    tableau<hair_cut_femme*> t;
                        do
                            {
                                cout<<"****************************"<<endl;
                                cout<<"\n type des manipulations:  "<<endl;
                                cout<<" |--------------------------------------|"<<endl;
                                cout<<" |1) :ajouter hair_cut_femme            |"<<endl;
                                cout<<" |2) : supprimer dernier hair_cut_femme |"<<endl;
                                cout<<" |3) : afficher premier hair_cut_femme  |"<<endl;
                                cout<<" |4) : afficher dernier  hair_cut_femme |"<<endl;
                                cout<<" |5) :  tableau vide ou non             |"<<endl;
                                cout<<" |0) : sortie                           |"<<endl;
                                cout<<" |--------------------------------------|"<<endl;

                                cout<<"votre choix"<<endl;
                                cin>>choix4;

                            switch(choix4)
                                {
                            case 1:
                                    {
                                hair_cut_femme* a=new hair_cut_femme();
                                cout<<"saisir un hair_cut_femme service"<<endl;
                                cin>>*a;
                                t.push(a);
                                break;
                                    }
                            case 2:
                                    {
                                t.pop();
                                break;
                                    }
                            case 3:
                                    {
                                hair_cut_femme *a= t.front();
                                cout<<*a;
                                break;
                                        }

                            case 4:
                                    {
                                hair_cut_femme* a= t.back();
                                cout<<*a;
                                break;
                                    }
                            case 5:
                                {
                                    cout<<t.empty()<<endl;
                                    break;
                                }

                            case 0:
                                {
                                    break;
                                }
                            default:
                                {
                                cout << "choix invalide" << endl;
                                break;
                                }
                              }
                        }
                      while(choix4!=0);
                      break;
                        }
            case 5:
                        {
                    tableau<Facial_service*> t;
                        do
                            {
                                cout<<"***************************"<<endl;
                                cout<<"\ntype des manipulations:  "<<endl;
                                cout<<" |---------------------------------------------------|"<<endl;
                                cout<<" |1) :ajouter Facial_service                         |"<<endl;
                                cout<<" |2) : supprimer dernier Facial_service              |"<<endl;
                                cout<<" |3) : afficher premier Facial_service               |"<<endl;
                                cout<<" |4) : afficher dernier  Facial_service              |"<<endl;
                                cout<<" |5) :  tableau vide ou non                          |"<<endl;
                                cout<<" |6) :modifier la liste des creme dun element tableau|"<<endl;
                                cout<<" |0) : sortie                                        |"<<endl;
                                cout<<" |---------------------------------------------------|"<<endl;

                                cout<<"votre choix"<<endl;
                                cin>>choix4;

                            switch(choix4)
                                {
                            case 1:
                                    {
                                Facial_service* a=new Facial_service();
                                cout<<"saisir un Facial_service service"<<endl;
                                cin>>*a;
                                t.push(a);
                                break;
                                    }
                            case 2:
                                    {
                                t.pop();
                                break;
                                    }
                            case 3:
                                    {
                                Facial_service* a= t.front();
                                cout<<*a;
                                break;
                                    }
                            case 4:
                                    {
                                Facial_service* a= t.back();
                                cout<<*a;
                                break;
                                    }
                            case 5:
                                {
                                    cout<<t.empty()<<endl;
                                    break;
                                }
                                  //  *********************************************
                                 case 6:
                                {
                                    int ch,chh,i;
                                    string m;
                                   do
                                   {
                                        cout<<"\n**********************************************"<<endl;
                                        cout<<"\n vouler vous ajouter ou supprimer des cremes"<<endl;
                                        cout<<" |-------------|"<<endl;
                                        cout<<" |1)ajout_creme|"<<endl;
                                        cout<<" |2)supp_cremes|"<<endl;
                                        cout<<" |0)quitter    |"<<endl;
                                        cout<<" |-------------|"<<endl;

                                       cin>> ch;
                                       switch(ch)
                                       {
                                           case 1:
                                               {
                                                 cout<<"donner  le nom du creme:";
                                                 cin>>m;
                                                 t[i]->ajout_creme(m);
                                                 break;
                                               }
                                            case 2:
                                               {
                                                 cout<<"donner  le nom du creme:";
                                                 cin>>m;
                                                 t[i]->supp_creme(m);
                                                  break;
                                               }
                                            case 0:
                                                {
                                                    break;
                                                }
                                            default:
                                                {
                                                    cout<<"choix invalide"<<endl;
                                                    break;
                                                }
                                          }
                                  }
                                 while(ch!=0);
                                 break;
                                }



                            case 0:
                                {
                                    break;
                                }
                            default:
                                {
                                cout << "choix invalide" << endl;
                                break;
                                }
                            }
                        }
                      while(choix4!=0);
                      break;
                        }
                    }
                }
       while(choix3!=0);
       break;

        }
   }

}
while(choix1!=0);


/*
client c;
cin>>c;
cout<<c;
c.ajout_services();
c.supp_services();
cout<<"\n +++++++++++++++++++++"<<endl;
cout<<c;
/*c.supprimer_personne("hh");
cout<<c;



/*
list<personne> l;
personne p,c;
cin>>p;
l.push_back(p);
cin>>c;
l.push_back(c);
cout<<"afficher"<<endl;
list<personne>::iterator it=l.begin();
for(it=l.begin();it!=l.end();it++)
{
    cout<<*it<<endl;
}


/*
tabmap b;
cin>>b;
cout<<b;
b.recherchermap("hh");
cout<<b;



/*
   tableau<personne*>a;
  Employer e;
  client p;
  cin>>e;
  cin>>p;
  a.push(&e);
  a.push(&p);
  cout<<a.front();
  cout<<"****************"<<endl;
 a.pop();
  cout<<a.front();



/*
fstream f;
Facial_service c;
cin>>c;
c.supp_creme("xx");
cout<<c;
//client::calcul_nb_service();
*/
/*
fstream f;
Employer::creefichier(f);
Employer c;
c.remplir(f);
c.operator+(f);
c.aficher_fichier(f);*/
    return 0;
}
