//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TIniFile *Ini = new TIniFile(".\\Config.ini");
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Ini->WriteString("Edits","Edit1",Edit1->Text);
Ini->WriteString("Edits","Edit2",Edit2->Text);
/*
��� ��������� ��� ���� �������:
"Edits" - ��� ������;
"Edit1" - ��������� �� ������;
"Edit1->Text" - ������, ������� �� ��������� (����� �����).

���, ��� �� �������� � �������, �� ������������ ����� ������ WriteString,
���� ��� ����� ���� �� �������� � �������, �� �� �������� WriteInteger .
*/
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Text = Ini->ReadString("Edits","Edit1","Def");
Edit2->Text = Ini->ReadString("Edits","Edit2","Def");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Ini->WriteString("PATH","PATH_RAR","C:\\Program Files\\WinRAR\\WinRAR.exe");
Ini->WriteString("PATH","PATH_BASE","C:\\Users\\Alex\\Desktop\\Other\\");       //���������� ���������� �� INI
Ini->WriteString("PATH","PATH_COPY_BASE",":\\Programs\\Antivirus\\Kaspersky v6.0.4.1611\\");
}
//---------------------------------------------------------------------------

