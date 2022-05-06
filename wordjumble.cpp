#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

    const int word_number = 8;

    enum fields {word, hint, field};

    const string words_tr[word_number][field] = {
        {"ATATURK", "The founder of the Turkish Republic and one of the greatest leaders in the world"},
        {"FUTBOL", "The famous and most loved sport in Turkey."},
        {"TUZLA", "Eastern district of Istanbul, Istanbul city starts from here."},
        {"ADALAR", "One of the best places in Istanbul, you can go there only by ferry."},
        {"ACM221", "The course that you are doing its exam right now :D"},
        {"YEDITEPE", "The university that follows the Ataturk's renaissance"},
        {"LAHMACUN", "Famous and most delicious food in Turkey"},
        {"ACM221", "The course that you are doing its exam right now :D"}
    };

    srand(time(0));
    int randtoken = (rand() % word_number);
    string thechosenoneW = words_tr[randtoken][word];
    string thechosenoneH = words_tr[randtoken][hint];

    string chaos = thechosenoneW;
    int length = chaos.size();
    for (int i=0; i<length; ++i) {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = chaos[index1];
        chaos[index1] = chaos[index2];
        chaos[index2] = temp;
    }

    cout << "\t\t\tWelcome to Turkish Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter hint for a hint.\n";
    cout << "Enter quit to quit the game.\n\n";
    cout << "The jumble is: " << chaos;

    string guess;
    cout << "\n\nYour guess: \n";
    cin >> guess;

    while ((guess != "quit") && (guess != thechosenoneW)) {
        if (guess == "hint") {
            cout << thechosenoneH;
    }  else {
            cout << "Sorry, that's not it.";
    }
        cout <<"\n\nYour guess: \n";
        cin >> guess;
    }

    if (guess == thechosenoneW) {
        cout << "\nThat's it! You guessed it!\n\n";
        cout << "Thanks for playing.\n";
        cout << "---------------------------------\n";
    }
    return 0;
}
