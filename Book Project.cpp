#include <iostream>
#include <string>

using namespace std;

class book
{
private:
    int id;
    string tile;
    string author;
    int year;
    bool available;
    double price;

public:
    void setid(int id) { this->id = id; }
    void settile(string tile) { this->tile = tile; }
    void setauthor(string author) { this->author = author; }
    void setyear(int year) { this->year = year; }
    void setavailable(bool available) { this->available = available; }
    void setprice(double price) { this->price = price; }

    int getid() { return id; }
    string gettile() { return tile; }
    string getauthor() { return author; }
    int getyear() { return year; }
    bool getavailable() { return available; }
    double getprice() { return price; }

    void display()
    {
        cout << "id"<< id << endl;
        cout << "tile" << tile << endl;
        cout << "author" << author << endl;
        cout << "year" << year << endl;
        cout << "available" <<(available ? "Yes" : "No")<< endl;
        cout << "price" << price << endl;

    }

};
int main()
{
    const int size = 3;
    book books[size];

    for (int i = 0; i < size; i++) {
        int id; 
        int year;
        string title; 
        string author;
        bool available;
        double price;

        cout << "Enter book " << (i + 1) <<endl;
        cout << "id "; cin >> id;
        cin.ignore();
        cout << "tile "; getline(cin, title);
        cout << "author"; getline(cin, author);
        cout << "year"; cin >> year;
        cout << "available (1 for Yes, 0 for No): "; cin >> available;
        cout << "price"; cin >> price;

        books[i].setid(id);
        books[i].setti1le(title);
        books[i].setauthor(author);
        books[i].setyear(year);
        books[i].setavailable(available);
        books[i].setprice(price);
    }

    for (int i = 0; i < size; i++) {
        books[i].display();
        
    }

    return 0;
}
