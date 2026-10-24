#include <iostream>
#include "Shoes/ShoesManager.h"
#include "Customer/CustomerManager.h"

int main(){
    Shoes s1("NK001", "AirForce1", "Nike", 40, 2000000, 10);
    Shoes s2("AD001", "Samba", "Adidas", 41, 1800000, 7);
    Shoes s3("NB001", "NB530", "NewBalance", 42, 2500000, 5);
    Shoes s4("NK002", "DunkLow", "Nike", 39, 1500000, 8);
    Shoes s5("AD002", "Ultraboost", "Adidas", 43, 3000000, 4);
    Shoes s6("NB002", "NB574", "NewBalance", 40, 2000000, 6);
    ShoesManager List;
    List.Insert(s6,NULL);
    List.Insert(s5,NULL);
    List.Insert(s4,NULL);
    List.Insert(s3,NULL);
    List.Insert(s2,NULL);
    List.Insert(s1,NULL);
    // List.Show();
    List.ShowMinToMax();
    Node *tmp=List.Search("AD001");
    List.Delete(tmp);
    cout << "After deleting : " << endl;
    List.ShowMinToMax();
    cout << "Shoes'cost >= 1000000 : " << endl;
    List.ShowGreater(1000000);
    cout << "after updating : " << endl;
    List.Update("NK001",Shoes("NK003","Jodan","Nike",41,2500000,10));
    List.Show();


    CustomerManager CM;
    Customer c1("KH001", "Nguyen Van A",
                "0901234567", "Da Nang");
    Customer c2("KH002", "Nguyen Van B",
                "0912345678", "Quang Nam");
    CM.Insert(c2);
    CM.Insert(c1);
    cout << "List : " << endl;
    CM.Show();
    NodeC *Tmp=CM.Search("KH001");
    CM.Delete(Tmp);
    CM.Show();
    return 0;
}