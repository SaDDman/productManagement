#include<iostream>
using namespace std;
#include<set>
#include<numeric>
#include<tuple>
#include<iomanip>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<math.h>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<fstream>
#include<string.h>
#include<deque>
//#include<bits/stdc++.h>
using namespace std;
using namespace std;
class Product
{
    public:
        string product_category,product_name;
        string product_id;
    void Read()
    {
        ifstream in("productIN.txt");
        in>>product_id;
        in.ignore();
        getline(in,product_category);
        getline(in,product_name);
        in.close();
    }
    void Write()
    {
        ofstream out("productOut.txt");
        out<<"ProductID : "<<product_id<<endl;
        out<<"Product Category : "<<product_category<<endl;
        out<<"Product Name : "<<product_name<<endl;
    }
};
class soldProduct : public Product
{
    public:
        int customer_id, price;
    void R_sold_product()
    {
        ifstream in("customerIN.txt");
        in>>customer_id>>price;
        in.close();
    }
    void W_sold_product()
    {
        ofstream out("customerOut.txt");
        out<<"Customer ID: "<<customer_id<<endl;
        out<<"Price: "<<price<<"$"<<endl;
    }
};
class boughtProduct : public Product
{
    public:
        int buyer_id,price;
        string buyer_name;

    void R_bought_product()
    {
        ifstream in("buyerIN.txt");
        in>>buyer_id>>price;
        in.ignore();
        getline(in,buyer_name);
        in.close();
    }
    void W_bought_product()
    {
        ofstream out("buyerOut.txt");
        out<<"BuyerID : "<<buyer_id<<endl;
        out<<"Buyer Name : "<<buyer_name<<endl;
        out<<"Price : "<<price<<" $"<<endl;
    }
};

int main()
{
    Product x;
    x.Read();
    x.Write();
    soldProduct y;
    y.R_sold_product();
    y.W_sold_product();
    boughtProduct z;
    z.R_bought_product();
    z.W_bought_product();
    return 0;
}
