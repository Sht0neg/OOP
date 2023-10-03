#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class User {
public:    
    int id;
    string name;
    User(int id, string name) {
        this->id = id;
        this->name = name;
    };
};

class BankAccount {
public:
    int id;
    User* owner;
    float balance;
    BankAccount(int id, User* owner, float balance) {
        this->id = id;
        this->owner = owner;
        this->balance = balance;
    };
    void print() {
        cout << "\nID: " << this->id << "\nOwner: " << this->owner->name << "\nBalance: " << this->balance << endl;
    };
    void Deposit(float money) {
        this->balance += money;
    };
    void Whithdraw(float money) {
        this->balance -= money;
    };
    void Transfer(BankAccount* account, float money) {
        if (money < this->balance) {
            this->balance -= money;
            account->balance += money;
            cout << "Перевод прошёл успешно!\n\n";
        }
        else {
            cout << "Транзакция не удалась, недостаточно средств!\n\n";
        }
    };
    void Delete() {
        delete this;
    };
    void Merge(BankAccount* account) {
        if (this->owner == account->owner) {
            this->balance += account->balance;
            account->Delete();
        }
    };
    ~BankAccount() {
        cout << "Счёт: " << this->id << " удален\n" << endl;
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    User* gena = new User(1, "Гена");
    User* ivan = new User(2, "Иван");

    BankAccount* acc1 = new BankAccount(1, gena, 5000);
    BankAccount* acc2 = new BankAccount(2, gena, 40000);
    BankAccount* acc3 = new BankAccount(3, ivan, 26000);

    acc1->print();
    acc1->Deposit(1000);
    acc1->print();

    acc1->Whithdraw(1000);
    acc1->print();

    acc2->print();
    acc1->Transfer(acc2, 1000);
    acc2->print();
    acc1->print();

    acc1->Merge(acc2);
    acc1->print();
    acc2->print();
}


