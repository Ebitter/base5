#include <iostream>

class Base{

public:
    Base()
    {
        std::cout << "Base create" << std::endl;
    }
    ~Base()
    {
        std::cout << "Base destroy !" << std::endl;
    }
    void Print()
    {
        std::cout << "this Base print" << std::endl;
    }
};

class Younger:public Base{

public:
    Younger()
    {
        std::cout<< "Younger create!" << std::endl;
    }
    ~Younger()
    {
        std::cout<< "Younger destroy!" << std::endl;
    }

    void Print()
    {
        std::cout << "thiss Younger print" << std::endl;
    }

private:
    std::string m_myData;

};

int main(int argc, char *argv[])
{

    Base *pBase = new Younger;

    pBase->Print();

    delete pBase;


    return 0;
}
