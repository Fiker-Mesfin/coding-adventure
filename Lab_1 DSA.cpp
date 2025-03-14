#include <iostream>
#include <typeinfo>
#define TAX_RATE_PREPROCESSOR 0.15
using namespace std;
int main(){
    cout<<" This program is built to analyze product sales and inventory for store using one of the compiled programming language c++ "<<endl;
    string productName;
    int productCategory;
    int initialInventoryQuantity;
    decltype(initialInventoryQuantity)currentInventory= 50;
    float productPricePerUnit;
    int numberOfItemsSold;
    const double taxRateConst = 0.15;
    cout<<"product name: "<<endl;
    cin>>productName;
    cout<<"product category: "<<endl;
    cin>>productCategory;
    cout<<"product initial inventory: "<<endl;
    cin>>initialInventoryQuantity;
    cout<<"product price: "<<endl;
    cin>>productPricePerUnit;
    cout<<"product number of items sold: "<<endl;
    cin>>numberOfItemsSold;
    int originalInitialInventory=initialInventoryQuantity;
    initialInventoryQuantity-= numberOfItemsSold;
    int newInventory= initialInventoryQuantity;
    float totalSalesAmount=numberOfItemsSold*productPricePerUnit;
    auto totalSales= totalSalesAmount;
    string inventoryStatus=(newInventory<10)? "low inventory" : " sufficient inventory";
    if (productCategory<=5 && productCategory>=1){
        cout<<"product category is within range."<<endl;
    }
    else{
        cout<<"product category is not within range.";
    }
    switch(productCategory){
        case 1:
        cout<<"Electronics"<<endl;
        break;
        case 2:
        cout<<"Groceries"<<endl;
        break;
        case 3:
        cout<<"Clothing"<<endl;
        break;
        case 4:
        cout<<"stationary"<<endl;
        break;
        case 5:
        cout<<"miscellaneous"<<endl;
        break;
        default:
        cout<<"the product category is not within the range.";
    }
    for(int i=1 ; i<=numberOfItemsSold; i++){
        cout<<"item sold: "<<i<<"="<<productPricePerUnit<<endl;
    }
    cout<<"the tax rate calculated by using preprocessor: "<<TAX_RATE_PREPROCESSOR<<endl;
    cout<<"the tax rate calculated by using constant variable: "<<taxRateConst<<endl;
    cout<<"product name: "<<productName<<endl;
    cout<<"product category: "<<productCategory<<endl;
    cout<<"initial inventory: "<<originalInitialInventory<<endl;
    cout<<"product price: "<<productPricePerUnit<<endl;
    cout<<"items sold: "<<numberOfItemsSold<<endl;
    cout<<"new inventory: "<<newInventory<<endl;
    cout<<"total sales amount: "<<totalSalesAmount<<endl;
    cout<<"the inventory status: "<<inventoryStatus<<endl;
    cout<<"the decltype value: "<<currentInventory<<endl;
    cout<<"the auto value: "<<totalSales<<endl;
    cout<<"the type of current inventory: "<<typeid(currentInventory).name()<<endl;
    cout<<"the type of total sales: "<<typeid(totalSales).name()<<endl;
    return 0;
}
