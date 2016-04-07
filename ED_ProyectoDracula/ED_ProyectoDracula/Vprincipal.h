#pragma once

#include "VCartasJugador.h"
#include "VDireccion.h"
#include "Tablero.h"
#include "Deck.h"

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
	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::Button^  b6;
	private: System::Windows::Forms::Button^  b7;
	private: System::Windows::Forms::Button^  b8;
	private: System::Windows::Forms::Button^  b9;
	public: System::Windows::Forms::Button^  bCartaActual;

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
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->bCartaActual = (gcnew System::Windows::Forms::Button());
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
			// b5
			// 
			this->b5->BackColor = System::Drawing::Color::Transparent;
			this->b5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b5->FlatAppearance->BorderSize = 0;
			this->b5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b5->Location = System::Drawing::Point(329, 219);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(102, 117);
			this->b5->TabIndex = 2;
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &Vprincipal::b5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(648, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Vprincipal::button1_Click);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::Transparent;
			this->b1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b1->FlatAppearance->BorderSize = 0;
			this->b1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b1->Location = System::Drawing::Point(212, 93);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(85, 104);
			this->b1->TabIndex = 4;
			this->b1->UseVisualStyleBackColor = false;
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::Transparent;
			this->b2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b2->FlatAppearance->BorderSize = 0;
			this->b2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b2->Location = System::Drawing::Point(339, 93);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(85, 104);
			this->b2->TabIndex = 5;
			this->b2->UseVisualStyleBackColor = false;
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::Transparent;
			this->b3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b3->FlatAppearance->BorderSize = 0;
			this->b3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b3->Location = System::Drawing::Point(469, 93);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(85, 104);
			this->b3->TabIndex = 6;
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &Vprincipal::b3_Click);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::Color::Transparent;
			this->b4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b4->FlatAppearance->BorderSize = 0;
			this->b4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b4->Location = System::Drawing::Point(212, 225);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(83, 104);
			this->b4->TabIndex = 7;
			this->b4->UseVisualStyleBackColor = false;
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::Color::Transparent;
			this->b6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b6->FlatAppearance->BorderSize = 0;
			this->b6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b6->Location = System::Drawing::Point(471, 227);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(83, 104);
			this->b6->TabIndex = 8;
			this->b6->UseVisualStyleBackColor = false;
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::Color::Transparent;
			this->b7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b7->FlatAppearance->BorderSize = 0;
			this->b7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b7->Location = System::Drawing::Point(212, 360);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(83, 104);
			this->b7->TabIndex = 9;
			this->b7->UseVisualStyleBackColor = false;
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::Color::Transparent;
			this->b8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b8->FlatAppearance->BorderSize = 0;
			this->b8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b8->Location = System::Drawing::Point(339, 360);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(83, 104);
			this->b8->TabIndex = 10;
			this->b8->UseVisualStyleBackColor = false;
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::Color::Transparent;
			this->b9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b9->FlatAppearance->BorderSize = 0;
			this->b9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b9->Location = System::Drawing::Point(469, 360);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(83, 104);
			this->b9->TabIndex = 11;
			this->b9->UseVisualStyleBackColor = false;
			// 
			// bCartaActual
			// 
			this->bCartaActual->BackColor = System::Drawing::Color::Transparent;
			this->bCartaActual->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bCartaActual->Enabled = false;
			this->bCartaActual->FlatAppearance->BorderSize = 0;
			this->bCartaActual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bCartaActual->Location = System::Drawing::Point(673, 373);
			this->bCartaActual->Name = L"bCartaActual";
			this->bCartaActual->Size = System::Drawing::Size(85, 104);
			this->bCartaActual->TabIndex = 12;
			this->bCartaActual->UseVisualStyleBackColor = false;
			// 
			// Vprincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->bCartaActual);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->bVer2);
			this->Controls->Add(this->bVer1);
			this->Name = L"Vprincipal";
			this->Text = L"Drácula";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Vprincipal::Vprincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Vprincipal::Vprincipal_Load);
			this->ResumeLayout(false);

		}
	#pragma endregion
		private: System::Void bVer1_Click(System::Object^  sender, System::EventArgs^  e) {
			VCartasJugador^ vCJ1 = gcnew VCartasJugador(1);
			vCJ1->Show();
		}

		private: System::Void bVer2_Click(System::Object^  sender, System::EventArgs^  e) {
			VCartasJugador^ vCJ2 = gcnew VCartasJugador(2);
			vCJ2->Show();
		}

		private: System::Void Vprincipal_Load(System::Object^  sender, System::EventArgs^  e) {

			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCartasJugador::typeid));
			Deck^ mazo = Deck::Instance;
			mazo->mezclar();
			VDireccion^ vDir = gcnew VDireccion();
			vDir->ShowDialog();

			Tablero^ tJuego = Tablero::Instance;
			int ronda = 6;
			while (ronda <= 6) {
				this->b5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->topCarta()->getDireccion())));
				tJuego->repartir();
				for (int x = 0; x < 8; x++) {
					Console::WriteLine("Turno de -> " + tJuego->getJActual());

				}
				ronda++;
			}

			Console::WriteLine(tJuego->getJActual());
			Console::WriteLine(tJuego->getpDir1());
			Console::WriteLine(tJuego->getpDir2());

		}
	private: System::Void Vprincipal_Load2(System::Object^  sender, System::EventArgs^  e) {
		
	}

		private: System::Void Vprincipal_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			Application::Exit();
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Tablero^ tJuego = Tablero::Instance;
		tJuego->repartir();
	}
	private: System::Void b5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void b3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
