#include<iostream>
using namespace std;

class Product{
 private:
    char name[100];
    int mrp;
    int sellingprice;

public:
//constructor
Product(char *n,int mrp,int sellingprice)
{
    strcpy(name,n);
    this->mrp=mrp;
    this->sellingprice=sellingprice;
}
Product(Product &X)
{
    //creating the copy
    strcpy(name,X.name);
    mrp=X.mrp;
    sellingprice=X.sellingprice;

}
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
void showdetails()
{
    cout<<"selling price "<<sellingprice<<endl;
    cout<<"MRP "<<mrp<<endl;
    cout<<"----------------------------"<<endl;
}
};

int main()
{
    Product car("shashwat",10000,1522);
    Product second_car(car);
    Product third_Car =car;
    car.showdetails();
    second_car.showdetails();
    third_Car.showdetails();
    // car.setMrp(100);
    // car.setsellingprice(200);
    // cout <<"Mrp "<<car.getMrp()<<endl;
    // cout<<"sell price "<<car.getsellingprice()<<endl;
    return 0;
}
