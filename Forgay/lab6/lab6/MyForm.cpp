#include "MyForm.h"
#include <stdio.h>
#include <vector>

using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace::Windows::Forms;
[STAThreadAttribute]
//[stathread]
void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	task1::MyForm form;
	Application::Run(%form);
}

