#include "MyForm.h"
using namespace System;
using namespace::Windows::Forms;

//[stathread]
void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	task1::MyForm form;
	Application::Run(%form);
}

