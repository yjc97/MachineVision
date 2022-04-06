#include "picturebox_bitmap.h"


using namespace System::Windows::Forms;
using namespace System;


int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew  picturebox_bitmap::picturebox_bitmap());

};