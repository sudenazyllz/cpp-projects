#include <iostream>
using namespace std;

class Rayli_arac
{
    private:
        int seri_num;
};

class Motor
{
    private:
     int güc;
};

class Koltuk
{
    private:
        int koltuk_numarasi;
};


class Konteyner
{
    private:
        int kapasite;
};

class Lokomotif : public Rayli_arac
{
    private:
        Motor motor;

};

class Yolcu_vagon : public Rayli_arac
{
    private:
        Koltuk koltuk[40];
};

class Yük_vagon : public Rayli_arac
{
    private:
        Konteyner konteyner[6];
};

class Tren
{
    private:
        Lokomotif lokomotif;
        Yolcu_vagon yolcu_vagon[3];
        Yük_vagon yük_vagon[2];

    void power_on();
};






int main()
{
    
};