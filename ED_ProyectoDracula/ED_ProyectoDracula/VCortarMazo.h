#pragma once
#include "Vprincipal.h"
#include "Deck.h"
#include "Tablero.h"


namespace ED_ProyectoDracula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VCortarMazo
	/// </summary>

	public ref class VCortarMazo : public System::Windows::Forms::Form
	{
	public:
		VCortarMazo(void)
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
		~VCortarMazo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bSeguir;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCortarMazo::typeid));
			this->bSeguir = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bSeguir
			// 
			this->bSeguir->BackColor = System::Drawing::Color::Transparent;
			this->bSeguir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bSeguir.BackgroundImage")));
			this->bSeguir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bSeguir->Enabled = false;
			this->bSeguir->FlatAppearance->BorderSize = 0;
			this->bSeguir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSeguir->Location = System::Drawing::Point(176, 288);
			this->bSeguir->Margin = System::Windows::Forms::Padding(0);
			this->bSeguir->Name = L"bSeguir";
			this->bSeguir->Size = System::Drawing::Size(116, 41);
			this->bSeguir->TabIndex = 1;
			this->bSeguir->UseVisualStyleBackColor = false;
			this->bSeguir->Click += gcnew System::EventHandler(this, &VCortarMazo::bSeguir_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(26, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 107);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(355, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 107);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(165, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 186);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &VCortarMazo::button3_Click);
			// 
			// VCortarMazo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(459, 338);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bSeguir);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"VCortarMazo";
			this->Text = L"VCortarMazo";
			this->Load += gcnew System::EventHandler(this, &VCortarMazo::VCortarMazo_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VCortarMazo_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bSeguir_Click(System::Object^  sender, System::EventArgs^  e) {
		Vprincipal^ vP = gcnew Vprincipal();
		vP->Show();
		this->Close();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Deck^ mazo = Deck::Instance;
		Boolean listo = true;
		mazo->mezclar();
		mazo->mostrar();

		Tablero^ tJuego = Tablero::Instance;
		if (mazo->seleccionar(0)->getColor() == "Rojo" && mazo->seleccionar(1)->getColor() == "Negro") {
			tJuego->setJActual(1);
		}
		else if (mazo->seleccionar(0)->getColor() == "Negro" && mazo->seleccionar(1)->getColor() == "Rojo") {
			tJuego->setJActual(2);
		}
		else if (mazo->seleccionar(0)->getColor() == mazo->seleccionar(1)->getColor()) {
			if (mazo->seleccionar(0)->getColor() == "Rojo") {
				if (mazo->seleccionar(0)->getPalo() == "Corazon" && mazo->seleccionar(1)->getPalo() == "Rombo") {
					tJuego->setJActual(1);
				}
				else if(mazo->seleccionar(0)->getPalo() == "Rombo" && mazo->seleccionar(1)->getPalo() == "Corazon") {
					tJuego->setJActual(2);
				}
				else if (mazo->seleccionar(0)->getPalo() == mazo->seleccionar(1)->getPalo()) {
					if (mazo->seleccionar(0)->getValor() > mazo->seleccionar(1)->getValor()) {
						tJuego->setJActual(1);
					}
					else {
						tJuego->setJActual(2);
					}
				}
			}
			else {
				listo = false;
			}
		}

		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCortarMazo::typeid));
		this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(0)->getDireccion())));
		this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(1)->getDireccion())));

		if (listo) {
			this->button3->Enabled = false;
			this->bSeguir->Enabled = true;
		}
		else {
			listo = true;
		}
	}
};
}
