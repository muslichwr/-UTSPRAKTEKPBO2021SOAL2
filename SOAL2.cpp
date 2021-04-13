#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

 /**
 *
 * @author Mus
 */


class barangtoko
{
private:
   string deskripsi;  
   int stok;     
   double harga;        
    
public:

   barangtoko(string d, int u, double p)
      { deskripsi = d; stok = u; harga = p; }
    
   void setdeskripsi(string d)
      { deskripsi = d; }
    
    string getdeskripsi()
      { return deskripsi; }
    
   void setstok(int u)
      { stok = u; }
    
    int getstok()
      { return stok; }
      
   void setharga(double p)
      { harga = p; }
       
    double getharga()
      { return harga; }
    
};

void displayItem(barangtoko);
 
int main()
{
   barangtoko item1("Jacket", 12, 59.95);
   barangtoko item2("Designer Jeans", 40, 34.95);
   barangtoko item3("Shirt", 20, 24.95);
    
   displayItem(item1);
   displayItem(item2);
   displayItem(item3);
    
   return 0;
}
 
void displayItem(barangtoko item)
{
   cout << setprecision(2) << fixed << showpoint;
   cout << "Deskripsi: " << item.getdeskripsi() << endl;
   cout << "Stok: " << item.getstok() << endl;
   cout << "Harga: " << item.getharga() << endl << endl;
}
