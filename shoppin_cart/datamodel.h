//product , item ,cart
 class Product
 {
    int id;
    string name;
    int price;
public:
Product(int u_id,string name,int price)
{
   id = u_id;
   this->name;
   this->price = price;
}
string getDisplayName()
{
   return name +" : Rs "+ to_string(price);
}

 };


 class Items
 {

 };


 class Cart
 {

 };