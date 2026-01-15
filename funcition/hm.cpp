#include <iostream>
using namespace std;


enum miftah {
    BELAJAR,
    BERMAIN
};

int main() {
    miftah kegiatan = BELAJAR;

    if (kegiatan == BELAJAR) {
        cout << "baginda Mifatah sedang belajar" << endl;
    } else {
        cout << "HMMMMM" << endl;
    }

    return 0;
}

