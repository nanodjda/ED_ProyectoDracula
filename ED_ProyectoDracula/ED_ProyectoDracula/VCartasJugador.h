#pragma once

#include "VCortarMazo.h"
#include "Deck.h"

namespace ED_ProyectoDracula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VCartasJugador
	/// </summary>
	public ref class VCartasJugador : public System::Windows::Forms::Form
	{
	public:
		VCartasJugador(void)
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
		~VCartasJugador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCartasJugador::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(138, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 99);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(234, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 99);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(138, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 99);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(234, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 99);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// VCartasJugador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(334, 284);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"VCartasJugador";
			this->Text = L"VCartasJugador";
			this->Load += gcnew System::EventHandler(this, &VCartasJugador::VCartasJugador_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VCartasJugador_Load(System::Object^  sender, System::EventArgs^  e) {
		Deck^ mazo = gcnew Deck();
		mazo->mezclar();
		mazo->mostrar();
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCortarMazo::typeid));
		this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(0)->getDireccion())));
		this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(1)->getDireccion())));
		this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(2)->getDireccion())));
		this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(3)->getDireccion())));

	}
};
}
