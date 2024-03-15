//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
int licz = 0;
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	licz++;
	if(licz==2){
	Shape1->Brush->Color=clWhite;
	Shape2->Brush->Color=clYellow;
	Shape3->Brush->Color=clWhite;
	}
	else if(licz==4)
	{
		Shape1->Brush->Color=clWhite;
	Shape2->Brush->Color=clWhite;
	Shape3->Brush->Color=clGreen;
	}
	else if (licz==6) {
	Shape1->Brush->Color=clRed;
	Shape2->Brush->Color=clWhite;
	Shape3->Brush->Color=clWhite;
	licz = 0;
	}

}
//---------------------------------------------------------------------------
int licz2 = 0;
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
		licz2++;
	if(licz2==3){
	Shape4->Brush->Color=clWhite;
	Shape5->Brush->Color=clYellow;
	Shape6->Brush->Color=clWhite;
	}
	else if(licz2==5)
	{
		Shape4->Brush->Color=clWhite;
	Shape5->Brush->Color=clWhite;
	Shape6->Brush->Color=clGreen;
	}
	else if (licz2==7) {
	Shape4->Brush->Color=clRed;
	Shape5->Brush->Color=clWhite;
	Shape6->Brush->Color=clWhite;
	licz2 = 0;
	}
}
//---------------------------------------------------------------------------
int licz3 = 0;
void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
		licz3++;
	if(licz3==6){
	Shape7->Brush->Color=clWhite;
	Shape9->Brush->Color=clGreen;
	}
	else if(licz3==8)
	{
	Shape7->Brush->Color=clRed;
		Shape9->Brush->Color=clWhite;
	}
}
//---------------------------------------------------------------------------
