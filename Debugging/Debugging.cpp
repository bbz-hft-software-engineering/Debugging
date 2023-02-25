#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

class Family {
private:
    vector<Person> members;
public:
    void addMember(Person p) {
        members.push_back(p);
    }
    int getFamilySize() {
        return members.size();
    }
    Person getYoungestMember() {
        Person youngest("", 1000);
        for (int i = 0; i < members.size(); i++) {
            if (members[i].getAge() < youngest.getAge()) {
                youngest = members[i];
            }
        }
        return youngest;
    }
};

void aufgabe1();
void aufgabe2();
void aufgabe3();
void aufgabe4();
void aufgabe5();
string remove_duplicates(string s);
void aufgabe6();
bool is_prime(int n);
void aufgabe7();
void aufgabe8();

int main()
{
    
    //aufgabe1();
    //aufgabe2();
    //aufgabe3();
    //aufgabe4();
    //aufgabe5();
    //aufgabe6();
    //aufgabe7();
    aufgabe8();

}

// Das Programm soll Hallo Welt ausgeben. (immer nur ein Buchstabe pro Zeile.)
void aufgabe1() {
    string str = "Hallo, Welt!";
    int i = 1;
    int size = str.length();
    while (i <= size) {
        cout << str[i] << endl;
        i++;
    }
}

// Das Programm soll das Resultat von der Berechung ausgeben.
void aufgabe2() {
    int x = 10;
    int y = 0;
    int result = x / y;

    std::cout << "Das Ergebnis ist: " << result << std::endl;
}

// Das Programm soll die Zahlen von 1 bis 5 ausgeben.
void aufgabe3() {
    int array[5] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i <= 5; i++) {
        std::cout << array[i] << std::endl;
    }
}


// Das Programm soll die Zahlen von 0 bis 9 ausgeben und dann die Zahlen von 9 bis 0.
void aufgabe4() {
    int num = 10;
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
void aufgabe5() {
    string my_string = "Hello world!";
    string no_duplicates = remove_duplicates(my_string);

    cout << "Original: " << my_string << endl;
    cout << "Without duplicates: " << no_duplicates << endl;
}

string remove_duplicates(string s) {
    string result = "";

    for (int i = 0; i < result.length(); i++) {
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
void aufgabe6() {
    int num = 9;
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

    for (int i = 2; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void aufgabe7() {
    int* ptr = nullptr;
    int x = 5;
    *ptr = x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of ptr: " << *ptr << std::endl;
}

void aufgabe8() {
    Person p1("Alice", 25);
    Person p2("Bob", 30);
    Person p3("Charlie", 20);

    Family myFamily;
    //myFamily.addMember(p1);
    //myFamily.addMember(p2);
    //myFamily.addMember(p3);

    cout << "Number of family members: " << myFamily.getFamilySize() << endl;
    cout << "Youngest family member: " << myFamily.getYoungestMember().getName() << endl;
    cout << "Age of the youngest family member: " << myFamily.getYoungestMember().getAge() << endl;

}
