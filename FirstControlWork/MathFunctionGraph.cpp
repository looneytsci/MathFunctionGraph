#include "MathFunctionGraph.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FirstControlWork::MathFunctionGraph form;
	Application::Run(% form);
}