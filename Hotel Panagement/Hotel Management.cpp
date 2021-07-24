#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
ofstream outfile;

class five_star
{
protected:
    float select,add,day,day1,day2,day3,tk=0;
public:
    void set_room()
    {
        cout<<"\nEnter Room Quality:"<<endl;
        cout<<"1. VIP Room              price = 10000/-"<<endl;
        cout<<"2. Middle Class Room     price = 8000/-"<<endl;
        cout<<"3. Lower Class Room      price = 5000/-"<<endl;
        cin>>select;
        if(select==1)
        {
            cout<<"Selected VIP Room"<<endl;
            cout<<"How Many Days You Want To Stay ?"<<endl;
            cin>>day1;
            tk=tk+(10000*day1);
        }
        else if(select==2)
        {
            cout<<"Selected Middle Class Room"<<endl;
            cout<<"How Many Days You Want To Stay ?"<<endl;
            cin>>day1;
            tk=tk+(8000*day1);
        }
        else if(select==3)
        {
            cout<<"Selected Lower Class Room"<<endl;
            cout<<"How Many Days You Want To Stay ?"<<endl;
            cin>>day1;
            tk=tk+(5000*day1);
        }
        else
        {
            cout<<"Wrong Input"<<endl;
        }
    }
    void set_resturant()
    {
        cout<<"Resturant: "<<endl;
        for( ; ; )
        {
            cout<<"1. Break fast        2. Lunch         3. Dinner      4. Exit Restaurant"<<endl;
            cin>>select;
            if(select==1)
            {
                cout<<"Break fast list: "<<endl;
                cout<<"1. Bread and fruit Juice                 Price = 150/-"<<endl;
                cout<<"2. Sand-witch                            Price = 100/-"<<endl;
                cout<<"3. Omlet                                 Price = 50/-"<<endl;
                cout<<"4. Hot Dog                               Price = 90/-"<<endl;
                cout<<"5. Pizza(10'')                           Price = 300/-"<<endl;
                cout<<"6. Burger                                Price = 180/-"<<endl;
                cout<<"7. Finish breakfast selection."<<endl;
                for( ; ; )
                {
                    cin>>add;
                    if(add==1)
                    {
                        cout<<"Selected bread and fruit Juice"<<endl;
                        tk=tk+150*day1;
                    }
                    else if(add==2)
                    {
                        cout<<"Selected sand-witch"<<endl;
                        tk=tk+100*day1;
                    }
                    else if(add==3)
                    {
                        cout<<"Selected omlet"<<endl;
                        tk=tk+50*day1;
                    }
                    else if(add==4)
                    {
                        cout<<"Selected hot Dog"<<endl;
                        tk=tk+90*day1;
                    }
                    else if(add==5)
                    {
                        cout<<"Selected pizza(10'')"<<endl;
                        tk=tk+300*day1;
                    }
                    else if(add==6)
                    {
                        cout<<"Selected burger"<<endl;
                        tk=tk+180*day1;
                    }
                    else if(add==7)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Wrong Input";
                    }
                }

            }
            else if(select==2)
            {
                cout<<"Lunch list: "<<endl;
                cout<<"1. Italian chicken biriyani              Price = 500/-"<<endl;
                cout<<"2. Tehri(Beef)                           Price = 350/-"<<endl;
                cout<<"3. Kacchi biriyani                       Price = 350/-"<<endl;
                cout<<"4. Rajma chawal and mutton               Price = 550/-"<<endl;
                cout<<"5. Mixed vagetable and rice              Price = 300/-"<<endl;
                cout<<"6. Fried rice and Chilli Chicken         Price = 350/-"<<endl;
                cout<<"7. Finish lunch selection."<<endl;
                for( ; ; )
                {
                    cin>>add;
                    if(add==1)
                    {
                        cout<<"Selected italian chicken biriyani"<<endl;
                        tk=tk+500*day1;
                    }
                    else if(add==2)
                    {
                        cout<<"Selected tehri(Beef)"<<endl;
                        tk=tk+350*day1;
                    }
                    else if(add==3)
                    {
                        cout<<"Selected kacchi biriyani"<<endl;
                        tk=tk+350*day1;
                    }
                    else if(add==4)
                    {
                        cout<<"Selected rajma chawal and mutton"<<endl;
                        tk=tk+550*day1;
                    }
                    else if(add==5)
                    {
                        cout<<"Selected mixed vagetable and rice"<<endl;
                        tk=tk+300*day1;
                    }
                    else if(add==6)
                    {
                        cout<<"Selected fried rice and chilli Chicken"<<endl;
                        tk=tk+350*day1;
                    }
                    else if(add==7)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Wrong Input";
                    }
                }
            }
            else if(select==3)
            {
                cout<<"Dinner list: "<<endl;
                cout<<"1. Thai chicken soup                     Price = 550/-"<<endl;
                cout<<"2. Hot curry soup                        Price = 400/-"<<endl;
                cout<<"3. Spicy chicken soup                    Price = 350/-"<<endl;
                cout<<"4. Rice and vegetable                    Price = 350/-"<<endl;
                cout<<"5. Finish dinner selection."<<endl;
                for( ; ; )
                {
                    cin>>add;
                    if(add==1)
                    {
                        cout<<"Selected thai chicken soup"<<endl;
                        tk=tk+550*day1;
                    }
                    else if(add==2)
                    {
                        cout<<"Selected hot curry soup"<<endl;
                        tk=tk+400*day1;
                    }
                    else if(add==3)
                    {
                        cout<<"Selected spicy chicken soup"<<endl;
                        tk=tk+350*day1;
                    }
                    else if(add==4)
                    {
                        cout<<"Selected rice and vegetable"<<endl;
                        tk=tk+350*day1;
                    }
                    else if(add==5)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Wrong Input";
                    }
                }
            }
            else if(select==4)
            {
                break;
            }
            else
            {
                cout<<"Wrong Input";
            }
        }
    }


};

class six_star: virtual public five_star
{
protected:
    float swimming_bill=1000;
    char name[50];
public:
    void swimming()
    {
        outfile.open("project.txt",ios::out|ios::in|ios::app);
        cout<<"Enter Customer Name: ";
        cin.ignore();
        cin.getline(name,50);
        five_star::set_room();
        five_star::set_resturant();
        cout<<"How many days you want to use swimming pool ?"<<endl;
        cin>>day;
        cout<<endl;
        cout<<endl;
        cout<<"Customer Name: "<<name<<endl;
        outfile<<"Customer Name: "<<name<<endl;
        cout<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        outfile<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        cout<<"Swimming pool bill For      "<<day<<" Days = "<<swimming_bill*day<<"/-"<<endl;
        outfile<<"Swimming pool bill For      "<<day<<" Days = "<<swimming_bill*day<<"/-"<<endl;
        tk=tk+(swimming_bill*day);
        cout<<"---------------------------------------------"<<endl;
        outfile<<"---------------------------------------------"<<endl;
        cout<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<endl;
        outfile.close();
    }

};
class seven_star: virtual public five_star
{
protected:
    float gym_bill=1200;
    char name[50];
public:
    void gym()
    {
        outfile.open("project.txt",ios::out|ios::in|ios::app);
        cout<<"Enter Customer Name: ";
        cin.ignore();
        cin.getline(name,50);
        five_star::set_room();
        five_star::set_resturant();
        cout<<"How many days you want to use gym ?"<<endl;
        cin>>day;
        cout<<endl;
        cout<<endl;
        cout<<"Customer Name: "<<name<<endl;
        outfile<<"Customer Name: "<<name<<endl;
        cout<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        outfile<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        cout<<"Gym bill For                "<<day<<" Days = "<<gym_bill*day<<"/-"<<endl;
        outfile<<"Gym bill For                "<<day<<" Days = "<<gym_bill*day<<"/-"<<endl;
        tk=tk+(gym_bill*day);
        cout<<"---------------------------------------------"<<endl;
        outfile<<"---------------------------------------------"<<endl;
        cout<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<endl;
        outfile.close();
    }

};

class eight_star: virtual public five_star
{
protected:
    float spa_bill=1000;
    char name[50];
public:
    void spa()
    {
        outfile.open("project.txt",ios::out|ios::in|ios::app);
        cout<<"Enter Customer Name: ";
        cin.ignore();
        cin.getline(name,50);
        five_star::set_room();
        five_star::set_resturant();
        cout<<"How many days you want to use spa ?"<<endl;
        cin>>day;
        cout<<endl;
        cout<<endl;
        cout<<"Customer Name: "<<name<<endl;
        outfile<<"Customer Name: "<<name<<endl;
        cout<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        outfile<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        cout<<"Spa bill For                "<<day<<" Days = "<<spa_bill*day<<"/-"<<endl;
        outfile<<"Spa bill For                "<<day<<" Days = "<<spa_bill*day<<"/-"<<endl;
        tk=tk+(spa_bill*day);
        cout<<"---------------------------------------------"<<endl;
        outfile<<"---------------------------------------------"<<endl;
        cout<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<endl;
        outfile.close();

    }

};

class nine_star: public six_star, public seven_star, public eight_star
{
protected:
    char name[50];
public:
    void all_facilities()
    {
        outfile.open("project.txt",ios::out|ios::in|ios::app);
        cout<<"Enter Customer Name: ";
        cin.ignore();
        cin.getline(name,50);
        five_star::set_room();
        five_star::set_resturant();
        cout<<"How many days you want to use swimming pool ?"<<endl;
        cin>>day;
        cout<<"How many days you want to use gym ?"<<endl;
        cin>>day2;
        cout<<"How many days you want to use spa ?"<<endl;
        cin>>day3;
        cout<<endl;
        cout<<endl;
        cout<<"Customer Name: "<<name<<endl;
        outfile<<"Customer Name: "<<name<<endl;
        cout<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        outfile<<"Room and Resturant Bill For "<<day1<<" Days = "<<tk<<"/-"<<endl;
        cout<<"Swimming pool bill For      "<<day<<" Days = "<<swimming_bill*day<<"/-"<<endl;
        outfile<<"Swimming pool bill For      "<<day<<" Days = "<<swimming_bill*day<<"/-"<<endl;
        cout<<"Gym bill For                "<<day2<<" Days = "<<gym_bill*day2<<"/-"<<endl;
        outfile<<"Gym bill For                "<<day2<<" Days = "<<gym_bill*day2<<"/-"<<endl;
        cout<<"Spa bill For                "<<day3<<" Days = "<<spa_bill*day3<<"/-"<<endl;
        outfile<<"Spa bill For                "<<day3<<" Days = "<<spa_bill*day3<<"/-"<<endl;
        tk=tk+(swimming_bill*day)+(gym_bill*day2)+(spa_bill*day3);
        cout<<"---------------------------------------------"<<endl;
        outfile<<"---------------------------------------------"<<endl;
        cout<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<"Total Bill                         = "<<tk<<"/-"<<endl;
        outfile<<endl;
        outfile.close();
    }

};

int main()
{
    six_star object1;
    seven_star object2;
    eight_star object3;
    nine_star object4;
    int a;
    cout<<"\t\t\t\tWelcome to Hotel Five Star"<<endl;
    cout<<"....................................................................................."<<endl<<endl;
    for( ; ; )
    {
        cout<<"\n1. Room, Resturant and Swimming Facilities"<<endl;
        cout<<"2. Room, Resturant and Gym Facilities"<<endl;
        cout<<"3. Room, Resturant and Spa Facilities"<<endl;
        cout<<"4. Room, Resturant and All Facilities"<<endl;
        cout<<"5. Read File"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>a;
        if(a==1)
        {
            object1.swimming();
        }
        else if(a==2)
        {
            object2.gym();
        }
        else if(a==3)
        {
            object3.spa();
        }
        else if(a==4)
        {
            object4.all_facilities();
        }
        else if(a==5)
        {
            std::ifstream infile("project.txt");
            std::string line;
            while (std::getline(infile, line))
            {
                std::cout << line << std::endl;
            }
        }
        else if(a==6)
        {
            break;
        }
        else cout<<"Wrong Input";
    }
    return 0;
}
