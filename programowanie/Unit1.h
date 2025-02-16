//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TShape *Shape1;
	TGroupBox *GroupBox1;
	TShape *Shape2;
	TShape *Shape3;
	TTimer *Timer1;
	TImage *Image1;
	TGroupBox *GroupBox2;
	TShape *Shape4;
	TShape *Shape5;
	TShape *Shape6;
	TTimer *Timer2;
	TGroupBox *GroupBox3;
	TShape *Shape7;
	TShape *Shape9;
	TTimer *Timer3;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
