#include "machine_vision_midterm1.h"


using namespace System::Windows::Forms;
using namespace System;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew  machine_vision_midterm::machine_vision_midterm);

};