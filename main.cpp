#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
/*ifstream cin("p.in");
ofstream cout("p.out");
*/
///CLASA VARZA
class varza
{
private:
    double pret;
    double cost;
    double cantitate;
public:
    varza(){ pret=3; cost=2; cantitate=5;};
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CLASA CARTOFI
class cartofi
{
protected:
    double pret;
    double cost;
    double cantitate;
    int tip;
public:
    cartofi(){ tip=2; pret=2; cost=1; cantitate=5;};
    virtual int get_tip(){return tip;}
    virtual double get_pret(){return pret;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class cartofi_albi : public cartofi
{
public:
    cartofi_albi():cartofi(){pret=get_pret()/2; cost=get_cost()/2; cantitate=get_cantitate()/2;}
    int get_tip(){return tip;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class cartofi_rosii : public cartofi
{
public:
    cartofi_rosii():cartofi(){pret=get_pret()*2; cost=get_cost()*2; cantitate=get_cantitate()/2;}
    int get_tip(){return tip;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CLASA FAINA
class faina
{
protected:
    double pret;
    double cost;
    double cantitate;
    int tip;
public:
    faina(){ tip=3; pret=2; cost=1; cantitate=6;};
    virtual double get_pret(){return pret;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual int get_tip(){return tip;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class faina_1 : public faina
{
public:
    faina_1():faina(){pret=get_pret()*3; cost=get_cost()*3; cantitate=get_cantitate()/3;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    int get_tip(){return tip;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class faina_2 : public faina
{
public:
    faina_2():faina(){pret=get_pret()*2; cost=get_cost()*2; cantitate=get_cantitate()/3;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    int get_tip(){return tip;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class faina_3 : public faina
{
public:
    faina_3():faina(){pret=get_pret()*1; cost=get_cost()*1; cantitate=get_cantitate()/3;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    int get_tip(){return tip;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CLASA JUCARIE
class jucarie
{
protected:
    double pret;
    double cantitate;
    double cost;
    int tip;
public:
    jucarie(){tip=3;pret=20; cost=10; cantitate=30;}
    virtual double get_tip(){return tip;}
    virtual double get_pret(){return pret;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class jucarie_urs : public jucarie
{
public:
    jucarie_urs():jucarie(){pret=get_pret()*2; cost=get_cost()*2; cantitate=get_cantitate()/3;}
    double get_tip(){return tip;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class jucarie_masina : public jucarie
{
public:
    jucarie_masina():jucarie(){pret=get_pret(); cost=get_cost(); cantitate=get_cantitate()/3;}
    double get_tip(){return tip;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class jucarie_minge : public jucarie
{
public:
    jucarie_minge():jucarie(){pret=get_pret()*3; cost=get_cost()*3; cantitate=get_cantitate()/3;}
    double get_tip(){return tip;}
    double get_pret(){return pret;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CLASA BERE
class bere
{
protected:
    double pret;
    double cantitate;
    double cost;
    int tip;
    int brand;
public:
    bere(){tip=2; brand=2; pret=5; cost=2; cantitate=40;}
    virtual double get_pret(){return pret;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual double get_tip(){return tip;}
    virtual double get_brand(){return brand;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class bere_ciuc : public bere
{
    public:
        bere_ciuc():bere(){tip=get_tip();pret=get_pret(); cost=get_cost(); cantitate=get_cantitate()/2;}
        virtual double get_pret(){return pret;}
        virtual double get_cost(){return cost;}
        virtual double get_cantitate(){return cantitate;}
        virtual double get_tip(){return tip;}
        virtual double get_brand(){return brand;}
        virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
        virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class bere_ciuc_blonda : public bere_ciuc
{
    public:
        bere_ciuc_blonda():bere_ciuc(){tip=get_tip()/2;pret=get_pret()*2; cost=get_cost()*2; cantitate=get_cantitate()/2;}
        double get_pret(){return pret;}
        double get_cost(){return cost;}
        double get_cantitate(){return cantitate;}
        double get_tip(){return tip;}
        double get_brand(){return brand;}
        void set_cantitate(double cant) {cantitate=cantitate-cant;}
        void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class bere_ciuc_bruna : public bere_ciuc
{
    public:
        bere_ciuc_bruna():bere_ciuc(){tip=get_tip()/2;pret=get_pret()*3; cost=get_cost()*3; cantitate=get_cantitate()/2;}
        double get_pret(){return pret;}
        double get_cost(){return cost;}
        double get_cantitate(){return cantitate;}
        double get_tip(){return tip;}
        double get_brand(){return brand;}
        void set_cantitate(double cant) {cantitate=cantitate-cant;}
        void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class bere_mahou : public bere
{
    public:
        bere_mahou():bere(){tip=get_tip(); pret=get_pret(); cost=get_cost(); cantitate=get_cantitate()/2;}
        virtual double get_pret(){return pret;}
        virtual double get_cost(){return cost;}
        virtual double get_cantitate(){return cantitate;}
        virtual double get_tip(){return tip;}
        virtual double get_brand(){return brand;}
        virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
        virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class bere_mahou_blonda : public bere_mahou
{
    public:
        bere_mahou_blonda():bere_mahou(){tip=get_tip()/2; pret=get_pret()*4; cost=get_cost()*2; cantitate=get_cantitate()/2;}
        double get_pret(){return pret;}
        double get_cost(){return cost;}
        double get_cantitate(){return cantitate;}
        double get_tip(){return tip;}
        double get_brand(){return brand;}
        void set_cantitate(double cant) {cantitate=cantitate-cant;}
        void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class bere_mahou_bruna : public bere_mahou
{
    public:
        bere_mahou_bruna():bere_mahou(){tip=get_tip()/2; pret=get_pret()*5; cost=get_cost()*3; cantitate=get_cantitate()/2;}
        double get_pret(){return pret;}
        double get_cost(){return cost;}
        double get_cantitate(){return cantitate;}
        double get_tip(){return tip;}
        double get_brand(){return brand;}
        void set_cantitate(double cant) {cantitate=cantitate-cant;}
        void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

/// CLASA VIN
class vin
{
protected:
    double pret;
    double cantitate;
    double cost;
    int tip;
public:
    vin(){tip=10; pret=5; cost=2; cantitate=40;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class vin_varsat : public vin
{
public:
    vin_varsat():vin(){ tip=2; pret=get_pret()*1; cost=get_cost()*1;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class vin_varsat_rosu : public vin_varsat
{
public:
    vin_varsat_rosu():vin_varsat(){pret=get_pret()*2; cost=get_cost()*2;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class vin_varsat_alb : public vin_varsat
{
public:
    vin_varsat_alb():vin_varsat(){pret=get_pret()*3; cost=get_cost()*3;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class vin_soi : public vin
{
public:
    vin_soi():vin(){tip=8;pret=get_pret()*2; cost=get_cost()*2;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///MERLOT
class vin_soi_rosu_dulce : public vin_soi
{
public:
    vin_soi_rosu_dulce():vin_soi(){tip=2;pret=get_pret()*2; cost=get_cost()*2;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CABERNET SAVIGNON
class vin_soi_rosu_sec : public vin_soi
{
public:
    vin_soi_rosu_sec():vin_soi(){tip=2;pret=get_pret()*1; cost=get_cost()*1;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///SAVIGNON BLANC
class vin_soi_alb_dulce : public vin_soi
{
public:
    vin_soi_alb_dulce():vin_soi(){tip=2;pret=get_pret()*2; cost=get_cost()*2;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CHARDONNAY
class vin_soi_alb_sec : public vin_soi
{
public:
    vin_soi_alb_sec():vin_soi(){tip=2;pret=get_pret()*1; cost=get_cost()*1;}
    virtual double get_pret(){return pret;}
    virtual double get_tip(){return tip;}
    virtual double get_cost(){return cost;}
    virtual double get_cantitate(){return cantitate;}
    virtual void set_cantitate(double cant) {cantitate=cantitate-cant;}
    virtual void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///ANUL 2018
///MERLOT
class vin_soi_rosu_dulce_18 : public vin_soi_rosu_dulce
{
public:
    vin_soi_rosu_dulce_18():vin_soi_rosu_dulce(){pret=get_pret()*1; cost=get_cost()*1;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};
///CABERNET SAVIGNON
class vin_soi_rosu_sec_18 : public vin_soi_rosu_sec
{
public:
    vin_soi_rosu_sec_18():vin_soi_rosu_sec(){pret=get_pret()*1; cost=get_cost()*1;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///SAVIGNON BLANC
class vin_soi_alb_dulce_18 : public vin_soi_alb_dulce
{
public:
    vin_soi_alb_dulce_18():vin_soi_alb_dulce(){pret=get_pret()*1; cost=get_cost()*1;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CHARDONNAY
class vin_soi_alb_sec_18 : public vin_soi_alb_sec
{
public:
    vin_soi_alb_sec_18():vin_soi_alb_sec(){pret=get_pret()*1; cost=get_cost()*1;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///ANUL 1999
///MERLOT
class vin_soi_rosu_dulce_99 : public vin_soi_rosu_dulce
{
public:
    vin_soi_rosu_dulce_99():vin_soi_rosu_dulce(){pret=get_pret()*2; cost=get_cost()*2;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};
///CABERNET SAVIGNON
class vin_soi_rosu_sec_99 : public vin_soi_rosu_sec
{
public:
    vin_soi_rosu_sec_99():vin_soi_rosu_sec(){pret=get_pret()*2; cost=get_cost()*2;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///SAVIGNON BLANC
class vin_soi_alb_dulce_99 : public vin_soi_alb_dulce
{
public:
    vin_soi_alb_dulce_99():vin_soi_alb_dulce(){pret=get_pret()*2; cost=get_cost()*2;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

///CHARDONNAY
class vin_soi_alb_sec_99 : public vin_soi_alb_sec
{
public:
    vin_soi_alb_sec_99():vin_soi_alb_sec(){pret=get_pret()*2; cost=get_cost()*2;}
    double get_pret(){return pret;}
    double get_tip(){return tip;}
    double get_cost(){return cost;}
    double get_cantitate(){return cantitate;}
    void set_cantitate(double cant) {cantitate=cantitate-cant;}
    void set2_cantitate(double cant) {cantitate=cantitate+cant;}
};

class produs
{
protected:
    double cant;
    char *s;
public:
    produs(){cant=0; s=new char[1001]; }
    ~produs(){delete[] s;}
    produs(const produs &p)
            {
                cant=p.cant;
                strcpy(s,p.s);
            }
    double get_cant(){return cant;}
    char* get_s(){return s;}
    friend istream &operator>>(istream &is,produs &pr);
};

istream &operator>>(istream &is,produs &pr)
{
    cin>>pr.cant;
    cin.get();
    cin.getline(pr.s,1001);
    return is;
}

class prd_cump
{
private:
    char *denumire;
    double pret;
    double cant;
public:
    prd_cump(){denumire=new char[1001]; pret=0; cant=0;}
    ~prd_cump(){delete[] denumire;}
    double get_pret(){return pret;}
    double get_cant(){return cant;}
    char* get_den(){return denumire;}
    void set_pret(double p){pret=p;}
    void set_cant(double c){cant=c;}
    void set_den(char *sir){strcpy(denumire,sir);}
};

///FUNCTIA AIA
bool cmp(prd_cump v,prd_cump v2)
{
    return v.get_pret()<v2.get_pret();
}

char *det_prd_max(prd_cump *v,int n,double cant)
{
    sort(v+1,v+n+1,cmp);
    char *s;
    s=new char[1001];
    strcpy(s,"NU");
    for(int i=1; i<=n; i++)
         if(v[i].get_cant()!=0 || v[i].get_cant()>=cant) strcpy(s,v[i].get_den());
    return s;
}

int main()
{
    int n;
    cin>>n;
    int i;
    varza V;
    cartofi_albi CA;
    cartofi_rosii CR;
    jucarie_masina JMS;
    jucarie_minge JMN;
    jucarie_urs JU;
    faina_1 F1;
    faina_2 F2;
    faina_3 F3;
    bere_ciuc_blonda BC_BL;
    bere_ciuc_bruna BC_BR;
    bere_mahou_blonda BM_BL;
    bere_mahou_bruna BM_BR;
    vin_varsat_rosu VVR;
    vin_varsat_alb VVA;
    vin_soi_rosu_dulce_18 VRD_18;
    vin_soi_alb_dulce_18 VAD_18;
    vin_soi_rosu_sec_18 VRS_18;
    vin_soi_alb_sec_18 VAS_18;
    vin_soi_rosu_dulce_99 VRD_99;
    vin_soi_alb_dulce_99 VAD_99;
    vin_soi_rosu_sec_99 VRS_99;
    vin_soi_alb_sec_99 VAS_99;
    prd_cump *PROD_TOT;
    PROD_TOT=new prd_cump[101];
    int val_tot=0;
    double super_total=0;
    for(i=1; i<=n; i++)
        {
            cout<<"\nBUNA ZIUA! CE DORITI?"<<"\n";
            cout<<"AS DORI...\n";
            double pret_total=0;
            produs p;
            prd_cump *LIST;
            LIST=new prd_cump[1001];
            int m=0;
            int answer=1;
            while(cin>>p)
                {
                    double cant=p.get_cant();
                    char *s; s=new char[1001];
                    double pret_int=pret_total;
                    strcpy(s,p.get_s());
                    if(strcmp(s,"ATAT")==0)
                        {
                            cout<<"COSTA "<<pret_total<<" LEI\n";
                            cout<<"DORITI SA CUMPARATI?\n";
                            char *s; s=new char[1001];
                            cin>>s;
                            if(strcmp(s,"DA")==0) cout<<"COSTA "<<pret_total<<" LEI. VA MULTUMIM! VA MAI ASTEPTAM.\n";
                            else
                               {
                                   answer=0;
                                   cout<<"AM INTELES. BUNA ZIUA!\n";
                                   for(int j=1; j<=m; j++)
                                      {
                                          char *sir;
                                          sir=new char[1001];
                                          strcpy(sir,LIST[j].get_den());
                                          double cant=LIST[j].get_cant();
                                          if(strcmp(sir,"varza")==0)
                                              V.set2_cantitate(V.get_cantitate()+cant);
                                          if(strcmp(sir,"cartofi albi")==0)
                                              CA.set2_cantitate(CA.get_cantitate()+cant);
                                          if(strcmp(sir,"cartofi rosii")==0)
                                              CR.set2_cantitate(CR.get_cantitate()+cant);
                                          if(strcmp(sir,"masina")==0)
                                              JMS.set2_cantitate(JMS.get_cantitate()+cant);
                                          if(strcmp(sir,"minge")==0)
                                              JMN.set2_cantitate(JMN.get_cantitate()+cant);
                                          if(strcmp(sir,"urs")==0)
                                              JU.set2_cantitate(JU.get_cantitate()+cant);
                                          if(strcmp(sir,"faina 1")==0)
                                              F1.set2_cantitate(F1.get_cantitate()+cant);
                                          if(strcmp(sir,"faina 2")==0)
                                              F2.set2_cantitate(F2.get_cantitate()+cant);
                                          if(strcmp(sir,"faina 3")==0)
                                              F3.set2_cantitate(F3.get_cantitate()+cant);
                                          if(strcmp(sir,"bere mahou blonda")==0)
                                              BM_BL.set2_cantitate(BM_BL.get_cantitate()+cant);
                                          if(strcmp(sir,"bere mahou bruna")==0)
                                              BM_BR.set2_cantitate(BM_BR.get_cantitate()+cant);
                                          if(strcmp(sir,"bere ciuc blonda")==0)
                                              BC_BL.set2_cantitate(BC_BL.get_cantitate()+cant);
                                          if(strcmp(sir,"bere ciuc bruna")==0)
                                              BC_BR.set2_cantitate(BC_BR.get_cantitate()+cant);
                                          if(strcmp(sir,"vin varsat rosu")==0)
                                              VVR.set2_cantitate(VVR.get_cantitate()+cant);
                                          if(strcmp(sir,"vin varsat alb")==0)
                                              VVA.set2_cantitate(VVA.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi rosu dulce 18 Franta")==0)
                                              VRD_18.set2_cantitate(VRD_18.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi rosu dulce 99 Franta")==0)
                                              VRD_99.set2_cantitate(VRD_99.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi alb dulce 18 Franta")==0)
                                              VAD_18.set2_cantitate(VAD_18.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi alb dulce 99 Franta")==0)
                                              VAD_99.set2_cantitate(VAD_99.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi rosu sec 18 Franta")==0)
                                              VRS_18.set2_cantitate(VRS_18.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi rosu sec 99 Franta")==0)
                                              VRS_99.set2_cantitate(VRS_99.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi alb sec 18 Franta")==0)
                                              VAS_18.set2_cantitate(VAS_18.get_cantitate()+cant);
                                          if(strcmp(sir,"vin soi alb sec 99 Franta")==0)
                                              VAS_99.set2_cantitate(VAS_99.get_cantitate()+cant);
                                      }
                               }
                            break;
                        }
                    ///FACEM CAZUL VARZA
                    int pp=1;
                    if(strcmp(s,"varza")==0)
                        {
                            if(cant<=V.get_cantitate())
                                {
                                    pret_total+=V.get_pret()*cant;
                                    V.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }

                    ///FACEM CAZUL CARTOFI
                    if(strcmp(s,"cartofi")==0)
                        {
                            cartofi C;
                            int ct=C.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            cartofi_albi cart_albi;
                            cartofi_rosii cart_rosii;
                            double price_albi=cant*cart_albi.get_pret();
                            double price_rosii=cant*cart_rosii.get_pret();
                            double cant1=CA.get_cantitate();
                            double cant2=CR.get_cantitate();
                            v[1].set_cant(cant1);
                            v[1].set_pret(price_albi);
                            v[1].set_den("cartofi albi");
                            v[2].set_cant(cant2);
                            v[2].set_pret(price_rosii);
                            v[2].set_den("cartofi rosii");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                        }
                    if(strcmp(s,"cartofi albi")==0)
                        {
                            if(cant<=CA.get_cantitate())
                                {
                                    pret_total+=CA.get_pret()*cant;
                                    CA.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"cartofi rosii")==0)
                        {
                            if(cant<=CR.get_cantitate())
                                {
                                    pret_total+=CR.get_pret()*cant;
                                    CR.set_cantitate(cant);
                            }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    ///FACEM CAZUL JUCARIE
                    if(strcmp(s,"jucarie")==0)
                        {
                            jucarie J;
                            int ct=J.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            jucarie_masina masina;
                            jucarie_minge minge;
                            jucarie_urs urs;
                            double price_minge=cant*minge.get_pret();
                            double price_masina=cant*masina.get_pret();
                            double price_urs=cant*urs.get_pret();
                            double cant1=JMN.get_cantitate();
                            double cant2=JMS.get_cantitate();
                            double cant3=JU.get_cantitate();
                            v[1].set_cant(cant1);
                            v[1].set_pret(price_minge);
                            v[1].set_den("minge");
                            v[2].set_cant(cant2);
                            v[2].set_pret(price_masina);
                            v[2].set_den("masina");
                            v[3].set_cant(cant3);
                            v[3].set_pret(price_urs);
                            v[3].set_den("urs");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                        }
                    if(strcmp(s,"masina")==0)
                        {
                            if(cant<=JMS.get_cantitate())
                                {
                                    pret_total+=JMS.get_pret()*cant;
                                    JMS.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"minge")==0)
                        {
                            if(cant<=JMN.get_cantitate())
                                {
                                    pret_total+=JMN.get_pret()*cant;
                                    JMN.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"urs")==0)
                        {
                            if(cant<=JU.get_cantitate())
                                {
                                    pret_total+=JU.get_pret()*cant;
                                    JU.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }

                    ///CAZUL FAINA
                    if(strcmp(s,"faina")==0)
                        {
                            faina F;
                            int ct=F.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            faina_1 f1;
                            faina_2 f2;
                            faina_3 f3;
                            double price_f1=cant*f1.get_pret();
                            double price_f2=cant*f2.get_pret();
                            double price_f3=cant*f3.get_pret();
                            double cant1=F1.get_cantitate();
                            double cant2=F2.get_cantitate();
                            double cant3=F3.get_cantitate();
                            v[3].set_cant(cant1);
                            v[3].set_pret(price_f1);
                            v[3].set_den("faina 1");
                            v[2].set_cant(cant2);
                            v[2].set_pret(price_f2);
                            v[2].set_den("faina 2");
                            v[1].set_cant(cant3);
                            v[1].set_pret(price_f3);
                            v[1].set_den("faina 3");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                        }
                    if(strcmp(s,"faina 1")==0)
                        {
                            if(cant<=F1.get_cantitate())
                                {
                                    pret_total+=F1.get_pret()*cant;
                                    F1.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"faina 2")==0)
                        {
                            if(cant<=F2.get_cantitate())
                                {
                                    pret_total+=F2.get_pret()*cant;
                                    F2.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"faina 3")==0)
                        {
                            if(cant<=F3.get_cantitate())
                                {
                                    pret_total+=F3.get_pret()*cant;
                                    F3.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    ///CAZUL BERE
                    if(strcmp(s,"bere")==0)
                       {
                            bere B;
                            int ct=B.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            bere_ciuc_blonda c_bl;
                            bere_ciuc_bruna c_br;
                            bere_mahou_blonda m_bl;
                            bere_mahou_bruna m_br;
                            double price_c_bl=cant*c_bl.get_pret();
                            double price_c_br=cant*c_br.get_pret();
                            double price_m_bl=cant*m_bl.get_pret();
                            double price_m_br=cant*m_br.get_pret();
                            double cant1=BC_BL.get_cantitate();
                            double cant2=BC_BR.get_cantitate();
                            double cant3=BM_BL.get_cantitate();
                            double cant4=BM_BR.get_cantitate();
                            v[4].set_cant(cant1);
                            v[4].set_pret(price_c_bl);
                            v[4].set_den("bere ciuc blonda");
                            v[3].set_cant(cant2);
                            v[3].set_pret(price_c_br);
                            v[3].set_den("bere ciuc bruna");
                            v[2].set_cant(cant3);
                            v[2].set_pret(price_m_bl);
                            v[2].set_den("bere mahou blonda");
                            v[1].set_cant(cant4);
                            v[1].set_pret(price_m_br);
                            v[1].set_den("bere mahou bruna");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"bere blonda")==0)
                       {
                            bere B;
                            int ct=B.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            bere_ciuc_blonda c_bl;
                            bere_mahou_blonda m_bl;
                            double price_c_bl=cant*c_bl.get_pret();
                            double price_m_bl=cant*m_bl.get_pret();
                            double cant1=BC_BL.get_cantitate();
                            double cant3=BM_BL.get_cantitate();
                            v[1].set_cant(cant1);
                            v[1].set_pret(price_c_bl);
                            v[1].set_den("bere ciuc blonda");
                            v[2].set_cant(cant3);
                            v[2].set_pret(price_m_bl);
                            v[2].set_den("bere mahou blonda");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"bere bruna")==0)
                       {
                            bere B;
                            int ct=B.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            bere_ciuc_bruna c_br;
                            bere_mahou_bruna m_br;
                            double price_c_br=cant*c_br.get_pret();
                            double price_m_br=cant*m_br.get_pret();
                            double cant1=BC_BR.get_cantitate();
                            double cant3=BM_BR.get_cantitate();
                            v[2].set_cant(cant1);
                            v[2].set_pret(price_c_br);
                            v[2].set_den("bere ciuc bruna");
                            v[1].set_cant(cant3);
                            v[1].set_pret(price_m_br);
                            v[1].set_den("bere mahou bruna");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"bere ciuc")==0)
                       {
                            bere B;
                            int ct=B.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            bere_ciuc_blonda c_bl;
                            bere_ciuc_bruna c_br;
                            double price_c_bl=cant*c_bl.get_pret();
                            double price_c_br=cant*c_br.get_pret();
                            double cant1=BC_BL.get_cantitate();
                            double cant3=BC_BR.get_cantitate();
                            v[1].set_cant(cant1);
                            v[1].set_pret(price_c_bl);
                            v[1].set_den("bere ciuc blonda");
                            v[2].set_cant(cant3);
                            v[2].set_pret(price_c_br);
                            v[2].set_den("bere ciuc bruna");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"bere mahou")==0)
                       {
                            bere B;
                            int ct=B.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            bere_mahou_blonda m_bl;
                            bere_mahou_bruna m_br;
                            double price_m_bl=cant*m_bl.get_pret();
                            double price_m_br=cant*m_br.get_pret();
                            double cant1=BC_BL.get_cantitate();
                            double cant3=BC_BR.get_cantitate();
                            v[1].set_cant(cant1);
                            v[1].set_pret(price_m_bl);
                            v[1].set_den("bere mahou blonda");
                            v[2].set_cant(cant3);
                            v[2].set_pret(price_m_br);
                            v[2].set_den("bere mahou bruna");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"bere mahou blonda")==0)
                        {
                            if(cant<=BM_BL.get_cantitate())
                                {
                                    pret_total+=BM_BL.get_pret()*cant;
                                    BM_BL.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"bere mahou bruna")==0)
                        {
                            if(cant<=BM_BR.get_cantitate())
                                {
                                    pret_total+=BM_BR.get_pret()*cant;
                                    BM_BR.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"bere ciuc bruna")==0)
                        {
                            if(cant<=BC_BR.get_cantitate())
                                {
                                    pret_total+=BC_BR.get_pret()*cant;
                                    BC_BR.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }
                    if(strcmp(s,"bere ciuc blonda")==0)
                        {
                            if(cant<=BC_BL.get_cantitate())
                                {
                                    pret_total+=BC_BL.get_pret()*cant;
                                    BC_BL.set_cantitate(cant);
                                }
                            else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                        }

                    ///CAZUL VIN
                    if(strcmp(s,"vin")==0)
                       {
                           vin vn;
                           int ct=vn.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            vin_varsat_alb vars_alb;
                            v[1].set_cant(VVA.get_cantitate());
                            v[1].set_pret(vars_alb.get_pret()*cant);
                            v[1].set_den("vin varsat alb");
                            vin_varsat_rosu vars_rosu;
                            v[2].set_cant(VVR.get_cantitate());
                            v[2].set_pret(vars_rosu.get_pret()*cant);
                            v[2].set_den("vin varsat rosu");
                            vin_soi_alb_dulce_18 vsad_18;
                            v[3].set_cant(VAD_18.get_cantitate());
                            v[3].set_pret(vsad_18.get_pret());
                            v[3].set_den("vin soi alb dulce 18 Franta");
                            vin_soi_alb_dulce_99 vsad_99;
                            v[4].set_cant(VAD_99.get_cantitate());
                            v[4].set_pret(vsad_99.get_pret());
                            v[4].set_den("vin soi alb dulce 99 Franta");
                            vin_soi_alb_sec_18 vsas_18;
                            v[5].set_cant(VAS_18.get_cantitate());
                            v[5].set_pret(vsas_18.get_pret());
                            v[5].set_den("vin soi alb sec 18 Franta");
                            vin_soi_alb_sec_99 vsas_99;
                            v[6].set_cant(VAS_99.get_cantitate());
                            v[6].set_pret(vsas_99.get_pret());
                            v[6].set_den("vin soi alb sec 99 Franta");
                            vin_soi_rosu_dulce_18 vsrd_18;
                            v[7].set_cant(VRD_18.get_cantitate());
                            v[7].set_pret(vsrd_18.get_pret());
                            v[7].set_den("vin soi rosu dulce 18 Franta");
                            vin_soi_rosu_dulce_99 vsrd_99;
                            v[8].set_cant(VRD_99.get_cantitate());
                            v[8].set_pret(vsrd_99.get_pret());
                            v[8].set_den("vin soi rosu dulce 99 Franta");
                            vin_soi_rosu_sec_18 vsrs_18;
                            v[9].set_cant(VRS_18.get_cantitate());
                            v[9].set_pret(vsrs_18.get_pret());
                            v[9].set_den("vin soi rosu sec 18 Franta");
                            vin_soi_rosu_sec_99 vsrs_99;
                            v[10].set_cant(VRS_99.get_cantitate());
                            v[10].set_pret(vsrs_99.get_pret());
                            v[10].set_den("vin soi rosu sec 99 Franta");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"vin varsat")==0)
                       {
                           vin vn;
                           int ct=vn.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            vin_varsat_alb vars_alb;
                            v[1].set_cant(VVA.get_cantitate());
                            v[1].set_pret(vars_alb.get_pret()*cant);
                            v[1].set_den("vin varsat alb");
                            vin_varsat_rosu vars_rosu;
                            v[2].set_cant(VVR.get_cantitate());
                            v[2].set_pret(vars_rosu.get_pret()*cant);
                            v[2].set_den("vin varsat rosu");
                            char sir[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"vin soi")==0)
                       {
                           vin vn;
                           int ct=vn.get_tip();
                            prd_cump *v;
                            v=new prd_cump[1001];
                            vin_soi_alb_dulce_18 vsad_18;
                            v[1].set_cant(VAD_18.get_cantitate());
                            v[1].set_pret(vsad_18.get_pret());
                            v[1].set_den("vin soi alb dulce 18 Franta");
                            vin_soi_alb_dulce_99 vsad_99;
                            v[2].set_cant(VAD_99.get_cantitate());
                            v[2].set_pret(vsad_99.get_pret());
                            v[2].set_den("vin soi alb dulce 99 Franta");
                            vin_soi_alb_sec_18 vsas_18;
                            v[3].set_cant(VAS_18.get_cantitate());
                            v[3].set_pret(vsas_18.get_pret());
                            v[3].set_den("vin soi alb sec 18 Franta");
                            vin_soi_alb_sec_99 vsas_99;
                            v[4].set_cant(VAS_99.get_cantitate());
                            v[4].set_pret(vsas_99.get_pret());
                            v[4].set_den("vin soi alb sec 99 Franta");
                            vin_soi_rosu_dulce_18 vsrd_18;
                            v[5].set_cant(VRD_18.get_cantitate());
                            v[5].set_pret(vsrd_18.get_pret());
                            v[5].set_den("vin soi rosu dulce 18 Franta");
                            vin_soi_rosu_dulce_99 vsrd_99;
                            v[6].set_cant(VRD_99.get_cantitate());
                            v[6].set_pret(vsrd_99.get_pret());
                            v[6].set_den("vin soi rosu dulce 99 Franta");
                            vin_soi_rosu_sec_18 vsrs_18;
                            v[7].set_cant(VRS_18.get_cantitate());
                            v[7].set_pret(vsrs_18.get_pret());
                            v[7].set_den("vin soi rosu sec 18 Franta");
                            vin_soi_rosu_sec_99 vsrs_99;
                            v[8].set_cant(VRS_99.get_cantitate());
                            v[8].set_pret(vsrs_99.get_pret());
                            v[8].set_den("vin soi rosu sec 99 Franta");
                            char *sir; sir=new char[1001];
                            strcpy(sir,det_prd_max(v,ct,cant));
                            strcpy(s,sir);
                       }
                    if(strcmp(s,"vin varsat rosu")==0)
                        {
                            if(cant<=VVR.get_cantitate())
                                {
                                    pret_total+=VVR.get_pret()*cant;
                                    VVR.set_cantitate(cant);
                                }
                            else
                                cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";
                        }
                    if(strcmp(s,"vin varsat alb")==0)
                        {
                            if(cant<=VVA.get_cantitate())
                                {
                                    pret_total+=VVA.get_pret()*cant;
                                    VVA.set_cantitate(cant);
                                }
                            else
                                cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";
                                }
                     if(strcmp(s,"vin soi rosu dulce 18 Franta")==0)
                         {
                             if(cant<=VRD_18.get_cantitate())
                                {
                                    pret_total+=VRD_18.get_pret()*cant;
                                    VRD_18.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                     if(strcmp(s,"vin soi alb dulce 18 Franta")==0)
                         {
                             if(cant<=VAD_18.get_cantitate())
                                {
                                    pret_total+=VAD_18.get_pret()*cant;
                                    VAD_18.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                     if(strcmp(s,"vin soi rosu sec 18 Franta")==0)
                         {
                             if(cant<=VRS_18.get_cantitate())
                                {
                                    pret_total+=VRS_18.get_pret()*cant;
                                    VRS_18.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                     if(strcmp(s,"vin soi alb sec 18 Franta")==0)
                         {
                             if(cant<=VAS_18.get_cantitate())
                                {
                                    pret_total+=VAS_18.get_pret()*cant;
                                    VAS_18.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                     if(strcmp(s,"vin soi rosu dulce 99 Franta")==0)
                         {
                             if(cant<=VRD_99.get_cantitate())
                                {
                                    pret_total+=VRD_99.get_pret()*cant;
                                    VRD_99.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                     if(strcmp(s,"vin soi alb dulce 99 Franta")==0)
                         {
                             if(cant<=VAD_99.get_cantitate())
                                {
                                    pret_total+=VAD_99.get_pret()*cant;
                                    VAD_99.set_cantitate(cant);
                                }
                             else
                                cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";
                         }
                     if(strcmp(s,"vin soi rosu sec 99 Franta")==0)
                         {
                             if(cant<=VRS_99.get_cantitate())
                                {
                                    pret_total+=VRS_99.get_pret()*cant;
                                    VRS_99.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                     if(strcmp(s,"vin soi alb sec 99 Franta")==0)
                         {
                             if(cant<=VAS_99.get_cantitate())
                                {
                                    pret_total+=VAS_99.get_pret()*cant;
                                    VAS_99.set_cantitate(cant);
                                }
                             else
                                {pp=0;cout<<"STOCUL NU NE PERMITE SA VA OFERIM ACEST PRODUS\n";}
                         }
                    if(pp==1)
                      {
                          m++;
                          LIST[m].set_cant(cant);
                          LIST[m].set_pret(pret_total-pret_int);
                          LIST[m].set_den(s);
                      }
                  }
            if(answer==1)
            {for(int j=1; j<=m; j++)
                 {
                     int pp=1;
                     for(int k=1; k<=val_tot; k++)
                        {
                            if(strcmp(PROD_TOT[k].get_den(),LIST[j].get_den())==0)
                                {
                                    pp=0;
                                    PROD_TOT[k].set_cant(PROD_TOT[k].get_cant()+LIST[j].get_cant());
                                }
                        }
                     if(pp==1)
                        {
                            val_tot++;
                            PROD_TOT[val_tot].set_den(LIST[j].get_den());
                            PROD_TOT[val_tot].set_cant(LIST[j].get_cant());
                        }
                     //cout<<LIST[j].get_den()<<" "<<LIST[j].get_cant()<<"\n";
                 }
            delete[] LIST;
            super_total+=pret_total;
            }
        }
    if(val_tot==0)
       {
           cout<<"NU S-A VANDUT NICIUN PRODUS SI NU S-A OBTINUT VREO SUMA DE BANI\n";
           return 0;
       }
    cout<<"\nLISTA PRODUSE FINALE\n";
    for(int j=1; j<=val_tot; j++)
        cout<<PROD_TOT[j].get_cant()<<" "<<PROD_TOT[j].get_den()<<"\n";
    cout<<"ASTAZI S-A OBTINUT SUMA DE "<<super_total<<" LEI";
    delete[] PROD_TOT;
    return 0;
}
