#pragma once

#include "VCartasJugador.h"
#include "VDireccion.h"
#include "Tablero.h"

namespace ED_ProyectoDracula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Vprincipal
	/// </summary>
	public ref class Vprincipal : public System::Windows::Forms::Form
	{
	public:
		Vprincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Vprincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bVer1;
	protected:
	private: System::Windows::Forms::Button^  bVer2;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Vprincipal::typeid));
			this->bVer1 = (gcnew System::Windows::Forms::Button());
			this->bVer2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bVer1
			// 
			this->bVer1->BackColor = System::Drawing::Color::Transparent;
			this->bVer1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bVer1.BackgroundImage")));
			this->bVer1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bVer1->FlatAppearance->BorderSize = 0;
			this->bVer1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bVer1->Location = System::Drawing::Point(354, 18);
			this->bVer1->Name = L"bVer1";
			this->bVer1->Size = System::Drawing::Size(142, 57);
			this->bVer1->TabIndex = 0;
			this->bVer1->UseVisualStyleBackColor = false;
			this->bVer1->Click += gcnew System::EventHandler(this, &Vprincipal::bVer1_Click);
			// 
			// bVer2
			// 
			this->bVer2->BackColor = System::Drawing::Color::Transparent;
			this->bVer2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bVer2.BackgroundImage")));
			this->bVer2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bVer2->FlatAppearance->BorderSize = 0;
			this->bVer2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bVer2->Location = System::Drawing::Point(354, 493);
			this->bVer2->Name = L"bVer2";
			this->bVer2->Size = System::Drawing::Size(142, 57);
			this->bVer2->TabIndex = 1;
			this->bVer2->UseVisualStyleBackColor = false;
			this->bVer2->Click += gcnew System::EventHandler(this, &Vprincipal::bVer2_Click);
			// 
			// Vprincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->bVer2);
			this->Controls->Add(this->bVer1);
			this->Name = L"Vprincipal";
			this->Text = L"Vprincipal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Vprincipal::Vprincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Vprincipal::Vprincipal_Load);
			this->ResumeLayout(false);

		}
	#pragma endregion
		private: System::Void bVer1_Click(System::Object^  sender, System::EventArgs^  e) {
			VCartasJugador^ vCJ1 = gcnew VCartasJugador();
			vCJ1->Show();
		}

		private: System::Void bVer2_Click(System::Object^  sender, System::EventArgs^  e) {
			VCartasJugador^ vCJ2 = gcnew VCartasJugador();
			vCJ2->Show();
		}

		private: System::Void Vprincipal_Load(System::Object^  sender, System::EventArgs^  e) {

			VDireccion^ vDir = gcnew VDireccion();
			vDir->ShowDialog();

			Tablero^ tJuego = Tablero::Instance;
			int ronda = 1;
			Console::WriteLine(tJuego->getJActual());
			Console::WriteLine(tJuego->getpDir1());
			Console::WriteLine(tJuego->getpDir2());

		}

		private: System::Void Vprincipal_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			Application::Exit();
		}
	};
}
