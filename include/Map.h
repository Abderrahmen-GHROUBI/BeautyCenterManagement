#include"iostream"
#include<map>
using namespace std;
#include "string"
class tabmap
{
    map<string,string> a;
    map<string,string>::iterator it;
public:
    tabmap(){};
    tabmap(const tabmap& );
    void ajoutermap();
    void affichermap();
    void modifiermap();
    void recherchermap(string);
    friend ostream& operator<<(ostream& os, const tabmap& obj)
    {
        for (auto & [key, val] : obj.a) {
        os <<"nom service :"<< key << " : " << "nom client :"<<val << endl;
        }
        return os;
    }

    friend istream& operator>>(istream& is, tabmap& obj) {
    int x;
    string key, value;

     do{
        cout<<"donner nom service / client   ";
        is >> key >> value;
        obj.a[key] = value;
    cout<<"\ntapez 1 pour ajouter autre couple  ";
    cin>>x;
    }while (x);
    return is;
}
    void suprimmap(string);

};
