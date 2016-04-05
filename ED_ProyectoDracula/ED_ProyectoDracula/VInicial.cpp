#include "VInicial.h"
#include "VCartasJugador.h"
#include "VCortarMazo.h"
#include "VGanador.h"
#include "Vprincipal.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]


int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ED_ProyectoDracula::VInicial vInicial_1;
	Application::Run(%vInicial_1);
}