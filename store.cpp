// Chidi NNa
// Programming in C++
// ASSN 2: Write a small menu driven inventory management system for a small convenient store

#include <iostream>
#include <stdio.h>
#include <string>

#define MAX_ITEMS 10

using namespace std;

class Store{
private:
    string name;
    int quantity;
    float cost;
    unsigned long id;

public:
    //getters
    string getName();
    int getQuantity();
    float getCost();
    unsigned long getId();
    //Setters
    void setName(string newName);
    void setQuantity(int newQauntity);
    void setCost(float newCost);
    void setId(unsigned long newID);
    };


string Store::getName(){
return name;
}
int Store::getQuantity(){
return quantity;
}
float Store::getCost(){
return cost;
}
unsigned long Store::getId(){
return id;
}
void Store::setName(string newName){
name=newName;
}
void Store::setQuantity(int newQauntity){
quantity=newQauntity;
}
void Store::setCost(float newCost){
cost=newCost;
}
void Store::setId(unsigned long newID){
id=newID;
}

//Application functions
int menuSelection (void);
//Employee functions
Store addNewItem();
//collection function
void findItemInfo(Store &item);
void printStoreInfo(Store data[], int count);
void find_by_ID(Store data[], int count);
void find_by_name(Store data[], int count);


int main()
{
    int tracker =0;
    int sel;
    Store Itemlist[MAX_ITEMS];
    do{

        sel=menuSelection();

        switch(sel){
            case 1:
                if(tracker < MAX_ITEMS)
                {
                Itemlist[tracker] = addNewItem();
                tracker++;
                }
                else{
                    cout<<"Error: You have exceeded the Item capacity!!!"<<endl;
                }
            break;
            case 2:
                printStoreInfo(Itemlist,tracker);
            break;
            case 3:
                find_by_ID(Itemlist,tracker);
            break;
            case 4:
                find_by_name(Itemlist,tracker);
            break;
            case 5:
            break;
            default:
            cout<<"Error: Invalid value!!!"<<endl;
            }

    }while(sel!=5);



    return 0;
}

Store addNewItem(){    //add a single new item into the
    Store s;
    string name;
    int quantity;
    float cost;
    unsigned long id;


    cout<<"Enter Item name: ";
    getline(cin>>ws,name);
    s.setName(name);
    cout<<"Enter Item ID: ";
    cin >> id;
    s.setId(id);
    cout<<"Enter Item Cost: ";
    cin >> cost;
    s.setCost(cost);
    cout<<"Enter Item Quantity: ";
    cin >> quantity;
    s.setQuantity(quantity);


    return s;
    }

void findItemInfo(Store &item)  // This function will be used to display all the Item Info Gathered.
{
    cout <<endl;
    cout <<"Item name: " << item.getName()<<endl;
    cout <<"Item Price: " << item.getCost()<<endl;
    cout <<"Item ID: " << item.getId()<<endl;
    cout <<"Item Quantity: " <<item.getQuantity()<<endl;
}


void printStoreInfo(Store data[], int count)  // This function will be used to display all items in the inventory.
{
    for(int i=0;i<count;++i){
        findItemInfo(data[i]);
}
}

void find_by_ID(Store data[], int count)  //This function will be used to search item using an ID
{
    int id;
    int point = 0;

    cout << "Enter in ID of Item: ";
    cin >> id;

    for(int i=0; i< count;++i)
        if (id == data[i].getId())
        {
            findItemInfo(data[i]);
            point++;
        }
    if (point ==0)
    {
        cout <<"ID entered did not match a stored Item" <<endl;

    }
}

void find_by_name (Store data[], int count)
{
    string n; //Item name entered
    int point = 0;

    cout << "Enter in name of Item: ";
    getline(cin>>ws,n);

    for(int i=0; i< count;++i)
        if (n == data[i].getName())
        {
            findItemInfo(data[i]);
            point++;
        }
    if (point ==0)
    {
        cout <<"Name entered did not match a stored Item" <<endl;

    }



}


int menuSelection (void){     //User Menu
    int sel;
    cout <<"                                        Inventory Management System Menu:" <<endl;
    cout <<"1. Option 1 Add new item" <<endl;
    cout <<"2. Option 2 Print item list" <<endl;
    cout <<"3. Option 3 Find item by ID" <<endl;
    cout <<"4. Option 4 Find item by name" <<endl;
    cout <<"5. Option 5 Quit" <<endl;
    cout <<"Select: " <<endl;
    cin>> sel;
    return sel;
}
