#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
const char ZODZIAI[]="zodziai.txt";
const char ATS[]="surikiuota.txt";
const char ABC[]="abc.txt";
void tikrina(ifstream &abc, char simbolis, bool &raide);
int main()
{
    ifstream duom(ZODZIAI);
    ofstream ats(ATS);
    ifstream abc(ABC);

    char sb, zodis[32];
    int c, n(-1);
    bool jei;

    while(!duom.eof())
    {
       // duom>>sb;

     while(!duom.fail())
     { duom>>sb;         cout<<sb<<"";
         tikrina(abc,sb,jei);
         if(jei==true)
         {
             n++;
             zodis[n]=sb;
         }
         else
         {
             for(int i=0; i<n; i++)
             {
                 ats<<zodis[n];
                 //zodis[n]=NULL;

             }
             ats<<endl;
             n=-1;
         }



     }
    }











    cout << "Hell!" << endl;

    return 0;
}

void tikrina(ifstream &abc, char simbolis, bool &raide)
{ int n;
char kas;
raide=false;
    abc>>n; abc.ignore();
    for(int i=0; i<n; i++)
    { abc>>kas;
        if(simbolis==kas) {raide=true; break;}
    }
}
