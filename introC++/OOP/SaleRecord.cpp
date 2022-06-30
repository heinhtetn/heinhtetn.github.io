#include <iostream>
using namespace std;

class SaleRecord
{
    // variables
public:
    string item_name;
    double unit_price;
    int sale_qty;
    // methods
    void addSaleRecord(string name, double price, int qty)
    {
        item_name = name;
        unit_price = price;
        sale_qty = qty;
    }
    double getSubTotal()
    {
        return unit_price * sale_qty;
    }
    void displayInfo()
    {
        cout << "\n";
        cout << item_name << "\t";
        cout << unit_price << " ks.\t";
        cout << sale_qty << "\t";
        cout << getSubTotal() << "ks. \n";
    }
};

int main()
{
    SaleRecord record1 = SaleRecord();
    SaleRecord record2 = SaleRecord();
    SaleRecord record3 = SaleRecord();

    record1.addSaleRecord("Coffee", 1500, 2);
    record2.addSaleRecord("Burger", 4800, 1);
    record3.addSaleRecord("Tea", 2500, 4);

    cout << "\n----- All Salerecords -----\n";
    cout << "Name \tUnit Price \tQty \tSubtotal\n";
    cout << "------------------------------------\n";
    record1.displayInfo();
    record2.displayInfo();
    record3.displayInfo();

    return 0;
}