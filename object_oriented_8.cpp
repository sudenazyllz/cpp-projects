#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;

class robot_kolu
{
    private:
        kaynak_ucu kaynak_uc;
        kavrayici kavrayicisi;
};

class kaynak_ucu : public Genel_takim
{
    private:
        int güc;
};

class kavrayici : public Genel_takim
{
    private:
        int aciklik;

};
class Genel_takim
{
    private:
        int takim_kodu;
};
class Genel_sensör
{
    public:
        int sensör_kodu;
};
class Sicaklik_sensörü : public Genel_sensör
{
    private:
        int max_sicaklik;
};

class Konum_sensörü : public Genel_sensör
{
    private:
        int hassasiyet;

};

class üretim_hücresi
{
    robot_kolu Robot_kolu[2];
    Sicaklik_sensörü sicaklik_sensörü;
    Konum_sensörü konum_sensörü[2];

    void emerg_stop()
    {
        std::queue<int> ss;
        ss.push(5);
        ss.push(7);
        ss.push(9);
        int sira_kimde = ss.front();
        ss.pop(); // 7 9

        // Java ve C# ArrayList = C++ vector
        std::vector<int> ss2;
        ss2.push_back(5);
        ss2.push_back(7);
        ss2.push_back(9);

        ss2[0]; // 5
        ss2[1]; // 7

        // 5 7 9
        ss2.insert(ss2.begin() + 1, 6);
        // 5 6 7 9


        for (int temp : ss2)
        {
            std::cout << temp; // 5 7 9
        }

        for (int i; ss2.size(); i++)
        {
            std::cout << ss2[i]; // 5 7 9

            
            
        }

        myInsert(1, 6);
    }

    void myInsert(int position, int newValue)
    {
        // vector sinifinin member'lari
        static const int capacity = 16;
        int size = 3;
        int arrayy[capacity] = { 5, 7, 9 , 11, 13};
        //

        size++;

        if (capacity < size)
        {
            // malloc ile arrayy i büyüt ve capacity değişkenini güncelle
        }

        // insert
        int temp = arrayy[position]; // 7
        arrayy[position] = newValue; // 6

        // 5 6 9 11 13

        // shifting
        int temp2;
        for (int i = position + 1; i < size; i++)
        {
            temp2 = arrayy[i];
            arrayy[i] = temp;
            temp = temp2;

            // ilk step ==> 5 6 7 11 13
        }

        // 5 6 7 9 11 13
    }
};