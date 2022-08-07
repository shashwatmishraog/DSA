#include<iostream>
using namespace std;

class Product{
 private:
    int mrp;
    int sellingprice;

public:
//setters
void setMrp(int price)
{
    mrp = price;
}
void setsellingprice(int price)
{
    if(price>mrp)
    {
        sellingprice = mrp;
    }
    sellingprice = price;
}
//getters
int getMrp()
{
    return mrp;
}
int getsellingprice()
{
    return sellingprice;
}
};

int main()
{
    Product car;
    car.setMrp(100);
    car.setsellingprice(200);
    cout <<"Mrp"<<car.getMrp()<<endl;
    cout<<"sell price"<<car.getsellingprice()<<endl;
    return 0;
}
