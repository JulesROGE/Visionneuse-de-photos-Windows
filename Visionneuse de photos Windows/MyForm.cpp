//MyForm.cpp
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args) //Soit Main soit WinMain
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Prosit5::MyForm form; //changé
	Application::Run(% form);
}


