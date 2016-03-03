//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit1.h"
#include "dos.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
struct date data;
struct time timp;
int zec=0, sec=0, min=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
        exit(1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Edit1->Clear();
        Edit2->Clear();
        Timer1->Interval=1000;
        Timer2->Interval=50;
        Button2->Enabled=false;

        char buffer[12];
        sprintf(buffer,"%02d : %02d   %02d",min,sec,zec);
        Edit2->Text=(AnsiString)buffer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        char buffer[20];
        getdate(&data);
        gettime(&timp);
        sprintf(buffer,"%02d/%02d/%4d %2d:%02d:%02d", data.da_day, data.da_mon,
        data.da_year, timp.ti_hour, timp.ti_min, timp. ti_sec);
        Edit1->Text=(AnsiString)buffer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        zec=0; sec=0; min=0;
        char buffer[12];
        sprintf(buffer,"%02d : %02d   %02d",min,sec,zec);
        Edit2->Text=(AnsiString)buffer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Button1->Enabled=false;
        Button2->Enabled=true;
        Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Button2->Enabled=false;
        Button1->Enabled=true;
        Timer2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
        zec+=5;
        if(zec>=100)
        {
                zec=0;
                if(++sec>=60)
                {
                        min++;
                }
        }
        char buffer[12];
        sprintf(buffer,"%02d : %02d   %02d",min,sec,zec);
        Edit2->Text=(AnsiString)buffer;

}
//---------------------------------------------------------------------------
