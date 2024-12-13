#include <iostream>

using namespace std;

class BBQ {
    string t;
public:
    BBQ(string t = "Peace of BBQ\n") {
        this->t = t;
    }

    string getBBQName() {
        return t;
    }
};

class Cheese {
    string name;
public:
    Cheese(string name = "Peace of Cheese\n") {
        this->name = name;
    }

    string getCheeseName() {
        return name;
    }
};

class Paperony {
    string name;
public:
    Paperony(string name = "Peace of Paperony\n") {
        this->name = name;
    }

    string getPaperonyName() {
        return name;
    }
};

class Caesar {
    string name;
public:
    Caesar(string name = "Peace of Caesar\n") {
        this->name = name;
    }

    string getCaesarName() {
        return name;
    }
};

class Pizza {
    BBQ* bbq;
    Cheese* cheese;
    Paperony* paperony;
    Caesar* caesar;

public:
    Pizza(BBQ* bbq, Cheese* cheese, Paperony* paperony, Caesar* caesar) {
        this->bbq = bbq;
        this->cheese = cheese;
        this->paperony = paperony;
        this->caesar = caesar;
    }

    void eatPizza() {
        cout << this->bbq->getBBQName();
        delete bbq;

        cout << this->cheese->getCheeseName();
        delete cheese;

        cout << this->paperony->getPaperonyName();
        delete paperony;

        cout << this->caesar->getCaesarName();
        delete caesar;
    }
};

int main() {
    BBQ* bbq = new BBQ();

    Cheese* cheese = new Cheese();

    Paperony* paperony = new Paperony();

    Caesar* caesar = new Caesar();


    Pizza pizza = Pizza(bbq, cheese, paperony, caesar);
    pizza.eatPizza();
}