#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(true);
    ������::MyForm Form;
    Application::Run(% Form);
}