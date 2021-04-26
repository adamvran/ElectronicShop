#include <iostream>
using namespace std;

class AbstractStringOutput
{

};

class AbstractCustomer : public AbstractStringOutput
{

};

class AbstractRegisteredCustomer : public AbstractCustomer
{

};

class CompanyUser : public AbstractRegisteredCustomer, public AbstractStringOutput
{

};

class RegisteredUser : public AbstractRegisteredCustomer
{

};

class UnregisteredUser : public AbstractCustomer
{

};

//=============================================================================

class AbstractProduct
{

};

class MobilePhone : public AbstractProduct
{

};

class Notebook : public AbstractProduct
{

};

class Tablet : public AbstractProduct
{

};

//=============================================================================

class ProductCatalog
{

};

class OrderItem
{

};

class Order
{

};


int main() {

    return 0;
}
