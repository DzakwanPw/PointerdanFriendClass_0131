#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main ()
{
    mahasiswa *mhs = new mahasiswa(1); // pointer Object mhs
    mhs->nim = 2;
    mhs->showNim();
    return 0;
}
