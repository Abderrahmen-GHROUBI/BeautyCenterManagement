#ifndef SERVICE_H
#define SERVICE_H
#include <iostream>

using namespace std;
#include<string>

class service
{
    protected:
        int id_ser;
        int num_salle;
        float prix;
        int dure_sevice;

    public:
        service();
        virtual ~service();
        float getprix(){return prix;}
        virtual void afficheser()=0;
        int getid(){return id_ser;}
        friend istream& operator>>(istream&,service&);
        friend ostream& operator<<(ostream&,service&);
                friend istream& operator>>(istream&,service*);
        friend ostream& operator<<(ostream&,service*);

        service& operator=(const service&);

};

#endif // SERVICE_H
