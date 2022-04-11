#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct softdrink{
char  name[10];
int price;
unsigned quantity;
};


int main()
{
softdrink drink[3];

strcpy(drink[0].name,"Pepsi"); drink[0].price=100; 
strcpy(drink[1].name,"Dr. Pepper"); drink[1].price=120;
strcpy(drink[2].name,"Coca-cola"); drink[2].price=95; 

std::cout << std::fixed;
std::cout << std::setprecision(4);
  
int choice = 1;
cout<<"Select your order";
while(choice != 4){
cout<<"\n[1]"<<drink[0].name<<"\tP"<<drink[0].price<<"\t";
cout<<"\n[2]"<<drink[1].name<<"\tP"<<drink[1].price<<"\t";
cout<<"\n[3]"<<drink[2].name<<"\tP"<<drink[2].price<<"\t";
cout<<"\n Choose one:";
cin>>choice;

if(choice <= 3)
{
float money;
cout<<"\n Input payment: ";
cin>>money;

int price;
if(choice==1)
{
price = 100;
if((money < price)){
cout<<"\n You don't have enough funds. ";
}
else if((money>price)){
    cout<<"\nYou purchase Pepsi";
    cout<<"\nChange: "<< money-price;
}
getchar(); getchar();
continue;
}

else if(choice==2)
{
price = 120;
if((money < price)){
cout<<"\n You don't have enough funds. ";
}
else if((money>price)){
    cout<<"\nYou purchase Dr. Pepper";
    cout<<"\nChange: "<< money-price;
}
getchar();getchar();
continue;

}

else if(choice==3)
{
price = 95;
if((money < price)){
cout<<"\n You don't have enough funds. ";
}
else if((money>price)){
    cout<<"\nYou purchase Coca-cola";
    cout<<"\nChange: "<< money-price;
}
getchar();getchar();
continue;
}

}
else
{
cout<<"\n Invalid input ";
}
}
}
