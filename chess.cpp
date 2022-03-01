//DESIGNING CHESS BOARD
#include <bits/stdc++.h>
using namespace std;
enum color{
    Black,
    White
};
void CL(int a_802)//color
    {
        for (int i_802= 0; i_802 < 8; i_802++)
        {
        a_802 == 1?(i_802 % 2 != 0?cout<<"   "<<"Black": cout<<"   "<<"White"):(i_802 % 2==0?cout<<"   "<<"Black":cout<<"   "<< "White");
        }
        cout << endl;
    }
    void PL()
    {
        for (int i_802 = 0; i_802 < 8; i_802++)
        {
            cout<<"    "<< "Pawn";
        }
        cout << endl<<endl;
    }
    void EL()
    {
        for (int i_802 = 0; i_802 < 8; i_802++)
        {
            cout<<"   "<< " ";
        }
        cout << endl<<endl;
    }
    void SL()
    {
        cout<<"   "<< "Rook" <<"   "<<"Bishop" <<"   "<< "Bishop" <<"   "<< "Queen" <<"   "<< "King" <<"   "<< "Bishop" <<"   "<< "Bishop" <<"   "<< "Rook";
        cout << endl<<endl;
    }
int main()
{
        CL(White);
        SL();
        CL(Black);
        PL();
        CL(White);
        EL();
        CL(Black);
        EL();
        CL(White);
        EL();
        CL(Black);
        EL();
        CL(White);
        PL();
        CL(Black);
        SL();
    return 0;
}