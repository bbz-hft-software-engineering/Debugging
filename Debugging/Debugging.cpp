#include <iostream>
#include <string>

using namespace std;

void aufgabe1();
void aufgabe2();
void aufgabe3();
void aufgabe4();
void aufgabe5();
string remove_duplicates(string s);
void aufgabe6();
bool is_prime(int n);

int main()
{
    
    //aufgabe1();
    //aufgabe2();
    //aufgabe3();
    //aufgabe4();
    aufgabe5();
    //aufgabe6();

}

// Das Programm soll Hallo Welt ausgeben. (immer nur ein Buchstabe pro Zeile.)
void aufgabe1() {
    string str = "Hallo, Welt!";
    int i = 0;
    int size = str.length();
    // Grenzwertverletzung in der Schleife
    while (i <= size) {
        cout << str[i] << endl;
        i++;
    }
}

// Das Programm soll das Resultat von der Berechung ausgeben.
// Division durch 0 ist nicht möglich
void aufgabe2() {
    int x = 10;
    int y = 1;
    int result = x / y;

    std::cout << "Das Ergebnis ist: " << result << std::endl;
}

// Das Programm soll die Zahlen von 1 bis 5 ausgeben.
// Grenzwertverletzung des Array wenn von 0-5 hochgezält wird, da 6 Variablen benötigt werden jedoch nur 5 vorhanden sind.
// Anpassung i <= 5 auf i <= 4
void aufgabe3() {
    int array[5] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i <= 4; i++) {
        std::cout << array[i] << std::endl;
    }
}


// Das Programm soll die Zahlen von 0 bis 9 ausgeben und dann die Zahlen von 9 bis 0.
void aufgabe4() {
    int num = 9;
    int i;

    for (i = 0; i < num; i++) {
        cout << i << endl;
    }

    while (i >= 0) {
        cout << i << endl;
        i--;
    }

}

// Das Programm soll dopplete Buchstaben in Wörtern löschen.
// Variable length in der ersten FOR-Schleife wr falsch
void aufgabe5() {
    string my_string = "Hello world!";
    string no_duplicates = remove_duplicates(my_string);

    cout << "Original: " << my_string << endl;
    cout << "Without duplicates: " << no_duplicates << endl;
}

string remove_duplicates(string s) {
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < result.length(); j++) {
            if (s[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            result += s[i];
        }
    }

    return result;
}


// Das Programm soll zurückgeben ob 9 eine Primzahl ist oder nicht.
// die FOR-Schleife hat nicht richtig nach oben gezählt
void aufgabe6() {
    int num = 12;
    bool is_num_prime = is_prime(num);

    if (is_num_prime) {
        cout << num << " ist eine Primzahl" << endl;
    }
    else {
        cout << num << " ist keine Primzahl" << endl;
    }

}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
