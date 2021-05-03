#include <iostream>
#include <utility>
using namespace std;

class AbstractStringOutput
{

};

//=============================================================================

class AbstractCustomer : public AbstractStringOutput
{
public:
    AbstractCustomer(string name, int age) : name(std::move(name)), age(age) {}

    string getName() {return name;}
    int getAge() const {return age;}

protected:
    string name;
    int age;
};

class AbstractRegisteredCustomer : public AbstractCustomer
{
public:
    AbstractRegisteredCustomer(string name, int age, string address, string email) : AbstractCustomer(std::move(name), age), address(std::move(address)), email(std::move(email)) {}

    string getAddredd() {return address;}
    string getEmail() {return email;}
protected:
    string address;
    string email;
};

class CompanyUser : public AbstractRegisteredCustomer, public AbstractStringOutput
{
public:
    CompanyUser(string name, int age, string address, string email, int salary) : AbstractRegisteredCustomer(std::move(name), age, std::move(address), std::move(email)), salary(salary) {}

    int getSalary() const {return salary;}
private:
    int salary;
};

class RegisteredUser : public AbstractRegisteredCustomer, public AbstractStringOutput
{
public:
    RegisteredUser(string name, int age, string address, string email, string phoneNumber) : AbstractRegisteredCustomer(std::move(name), age, std::move(address), std::move(email)), phoneNumber(std::move(phoneNumber)) {}

    string getPhoneNumber() {return phoneNumber;}
private:
    string phoneNumber;
};

class UnregisteredUser : public AbstractCustomer, public AbstractStringOutput
{
public:
    UnregisteredUser(string name, int age, int tmp) : AbstractCustomer(name, age), tmp(tmp) {}
private:
    int tmp;
};

//=============================================================================

class AbstractProduct
{
public:
    explicit AbstractProduct(int value):value(value){}
    virtual ~AbstractProduct() = default;

    int getValue() const {return value;}

protected:
    int value;
};

class MobilePhone : public AbstractProduct, public AbstractStringOutput
{
public:
    MobilePhone(int value, int simCount) : AbstractProduct(value), simCount(simCount) {}
private:
    int simCount;
};

class Notebook : public AbstractProduct, public AbstractStringOutput
{
public:
    Notebook(int value, bool dedicatedGPU) : AbstractProduct(value), dedicatedGPU(dedicatedGPU) {}
private:
    bool dedicatedGPU;
};

class Tablet : public AbstractProduct, public AbstractStringOutput
{
public:
    Tablet(int value, bool stylusSupport) : AbstractProduct(value), stylusSupport(stylusSupport) {}
private:
    bool stylusSupport;
};

//=============================================================================

class Product
{

};

class ProductCatalog
{

};


class OrderItem
{


};



int main() {

    return 0;
}
