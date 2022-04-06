#include "machine_vision_final.h"

using namespace System::Windows::Forms;
using namespace System;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew  machine_vision_final::machine_vision_final);

};