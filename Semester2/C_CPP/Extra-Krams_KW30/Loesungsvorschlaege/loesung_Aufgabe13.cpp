#include <iostream>

class Uhrzeit {
private:
    int Stunde;
    int Minute;
    int Sekunde;
public:
    Uhrzeit() {
        Stunde = 13;
        Minute = 13;
        Sekunde = 13;
    }
    Uhrzeit(int stunde, int minute, int sekunde){
        Stunde = stunde;
        Minute = minute;
        Sekunde = sekunde;
    }
    ~Uhrzeit() = default;

    void addSekunden(int);
    void anzeigen();
};

void Uhrzeit::addSekunden(int sek){
    Sekunde += sek;
}

void Uhrzeit::anzeigen(){
    std::cout << "Es ist " << Stunde << ":" << Minute << ":" << Sekunde << " Uhr.\n Tschau Kakao.\n";
}

int main() {
    Uhrzeit u1;
    Uhrzeit u2(14,14,14);
    u1.addSekunden(17);
    u2.anzeigen();
}
