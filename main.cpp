#include <iostream>
using namespace std;

int main() {
    int quant;
    int choice;
    // quantity
    int Qroom=0, Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
    //total price of items
    int total_room=0, total_pasta=0, total_burger=0, total_noodles=0, total_shake=0, total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available";
    cin>>Qroom;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;


    cout<<"\n\t\t\t Please select from the given menu options";
    cout<<"\n\n1) Rooms ";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) shake";
    cout<<"\n6) chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";
    m:
    cout<<"\n\n Please enter your choice! ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;
            if(Qroom-Srooms>=quant){
                Srooms=Srooms+quant;
                total_room=total_room+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
            }
            else{
                cout<<"\n\t only"<<Qroom-Srooms<<"Rooms remaining in hotel";

            }
            break;

        case 2:
            cout<<"\n\n Enter Pasta quantity: ";
            cin>>quant;
            if(Qpasta-Spasta>=quant){
                Spasta=Spasta+quant;
                total_pasta=total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<" pasta is ordered";
            }
            else{
                cout<<"\n\t only"<<Qpasta-Spasta<<"Pasta remaining in hotel";

            }
            break;
        case 3:
            cout<<"\n\n Enter burger quantity: ";
            cin>>quant;
            if(Qburger-Sburger>=quant){
                Sburger=Sburger+quant;
                total_burger=total_burger+quant*120;
                cout<<"\n\n\t\t"<<quant<<" burger is ordered";
            }
            else{
                cout<<"\n\t only"<<Qburger-Sburger<<"Pasta remaining in hotel";

            }
            break;

        case 4:
            cout<<"\n\n Enter noodles quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodle>=quant){
                Snoodle=Snoodle+quant;
                total_noodles=total_noodles+quant*250;
                cout<<"\n\n\t\t"<<quant<<" noodles is ordered";
            }
            else{
                cout<<"\n\t only"<<Qnoodles-Snoodle<<"noodels remaining in hotel";

            }
            break;

        case 5:
            cout<<"\n\n Enter Shake quantity: ";
            cin>>quant;
            if(Qshake-Sshake>=quant){
                Sshake=Sshake+quant;
                total_shake=total_shake+quant*250;
                cout<<"\n\n\t\t"<<quant<<" shake is ordered";
            }
            else{
                cout<<"\n\t only"<<Qshake-Sshake<<"Pasta remaining in hotel";

            }
            break;

        case 6:
            cout<<"\n\n Enter chicken quantity: ";
            cin>>quant;
            if(Qchicken-Schicken>=quant){
                Schicken=Schicken+quant;
                total_chicken=total_chicken+quant*250;
                cout<<"\n\n\t\t"<<quant<<" chicken is ordered";
            }
            else{
                cout<<"\n\t only"<<Qchicken-Schicken<<"Pasta remaining in hotel";

            }
            break;

        case 7:
            cout<<"\n\t\t Details and sales and collections";
            cout<<"\n\n NUmber of rooms we had: "<<Qroom;
            cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
            cout<<"\n\n Remaining rooms: "<<Qroom-Srooms;
            cout<<"\n\n Total rooms collections for the day: "<<total_room;

            cout<<"\n\n NUmber of pasta we had: "<<Qpasta;
            cout<<"\n\n Number of pasta we sold "<<Spasta;
            cout<<"\n\n Remaining pasta: "<<Qpasta-Spasta;
            cout<<"\n\n Total pasta collections for the day: "<<total_pasta;

            cout<<"\n\n NUmber of burger we had: "<<Qburger;
            cout<<"\n\n Number of burger we sold "<<Sburger;
            cout<<"\n\n Remaining burger: "<<Qburger-Sburger;
            cout<<"\n\n Total burger collections for the day: "<<total_burger;

            cout<<"\n\n NUmber of noodles we had: "<<Qnoodles;
            cout<<"\n\n Number of noodles we sold "<<Snoodle;
            cout<<"\n\n Remaining noodles: "<<Qnoodles-Snoodle;
            cout<<"\n\n Total noodles collections for the day: "<<total_noodles;

            cout<<"\n\n NUmber of shake we had: "<<Qshake;
            cout<<"\n\n Number of shake we sold "<<Sshake;
            cout<<"\n\n Remaining shake: "<<Qshake-Sshake;
            cout<<"\n\n Total shake collections for the day: "<<total_shake;

            cout<<"\n\n NUmber of chicken we had: "<<Qchicken;
            cout<<"\n\n Number of chicken we sold "<<Schicken;
            cout<<"\n\n Remaining chicken: "<<Qchicken-Schicken;
            cout<<"\n\n Total chicken collections for the day: "<<total_chicken;

            break;

        case 8:
            exit(0);
        default:
            cout<<"\nPlease select the number from the menu";
            break;

    }
    goto m;


}
