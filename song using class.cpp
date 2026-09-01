#include <iostream>
using namespace std;

class Song
{
private:
    string title;
git status
public:
    Song(string t)
    {
        title = t;
    }

    void play()
    {
        cout << "Song: " << title << endl << endl;

        cout << "Dil mein jo bhi hai,\n";
        cout << "Tera hi to hai,\n";
        cout << "Chahe jo mang lo,\n";
        cout << "Roka kisne hai,\n";
        cout << "Katal aagar karna ho,\n";
        cout << "Karna dheere se,\n";
        cout << "Uff bhi nahi niklegi,\n";
        cout << "Mere hothon se.\n\n";

        cout << "Dur jana nahi tumko hai kasam,\n";
        cout << "Khud se zyada tumhe chahte hain sanam,\n";
        cout << "Dur jana nahi tumko hai kasam,\n";
        cout << "Khud se zyada tumhe chahte hain sanam.\n";
    }
};

int main()
{
    Song mySong("Jitni Dafa");

    mySong.play();

    return 0;
}