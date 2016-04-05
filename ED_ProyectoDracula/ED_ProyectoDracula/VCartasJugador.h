#pragma once

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
	private: System::Windows::Forms::Button^  Campo1;
	protected:
	private: System::Windows::Forms::Button^  Campo2;
	private: System::Windows::Forms::Button^  Campo3;
	private: System::Windows::Forms::Button^  Campo4;

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
			this->Campo1 = (gcnew System::Windows::Forms::Button());
			this->Campo2 = (gcnew System::Windows::Forms::Button());
			this->Campo3 = (gcnew System::Windows::Forms::Button());
			this->Campo4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Campo1
			// 
			this->Campo1->BackColor = System::Drawing::Color::Transparent;
			this->Campo1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Campo1->FlatAppearance->BorderSize = 0;
			this->Campo1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Campo1->Location = System::Drawing::Point(195, 36);
			this->Campo1->Name = L"Campo1";
			this->Campo1->Size = System::Drawing::Size(89, 115);
			this->Campo1->TabIndex = 0;
			this->Campo1->UseVisualStyleBackColor = false;
			// 
			// Campo2
			// 
			this->Campo2->BackColor = System::Drawing::Color::Transparent;
			this->Campo2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Campo2->FlatAppearance->BorderSize = 0;
			this->Campo2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Campo2->Location = System::Drawing::Point(329, 36);
			this->Campo2->Name = L"Campo2";
			this->Campo2->Size = System::Drawing::Size(89, 115);
			this->Campo2->TabIndex = 1;
			this->Campo2->UseVisualStyleBackColor = false;
			this->Campo2->Click += gcnew System::EventHandler(this, &VCartasJugador::Campo2_Click);
			// 
			// Campo3
			// 
			this->Campo3->BackColor = System::Drawing::Color::Transparent;
			this->Campo3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Campo3->FlatAppearance->BorderSize = 0;
			this->Campo3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Campo3->Location = System::Drawing::Point(195, 197);
			this->Campo3->Name = L"Campo3";
			this->Campo3->Size = System::Drawing::Size(89, 115);
			this->Campo3->TabIndex = 2;
			this->Campo3->UseVisualStyleBackColor = false;
			this->Campo3->Click += gcnew System::EventHandler(this, &VCartasJugador::Campo3_Click);
			// 
			// Campo4
			// 
			this->Campo4->BackColor = System::Drawing::Color::Transparent;
			this->Campo4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Campo4->FlatAppearance->BorderSize = 0;
			this->Campo4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Campo4->Location = System::Drawing::Point(329, 197);
			this->Campo4->Name = L"Campo4";
			this->Campo4->Size = System::Drawing::Size(89, 115);
			this->Campo4->TabIndex = 3;
			this->Campo4->UseVisualStyleBackColor = false;
			// 
			// VCartasJugador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(464, 345);
			this->Controls->Add(this->Campo4);
			this->Controls->Add(this->Campo3);
			this->Controls->Add(this->Campo2);
			this->Controls->Add(this->Campo1);
			this->Name = L"VCartasJugador";
			this->Text = L"VCartasJugador";
			this->Load += gcnew System::EventHandler(this, &VCartasJugador::VCartasJugador_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VCartasJugador_Load(System::Object^  sender, System::EventArgs^  e) {
		Deck^ mazo = Deck::Instance;
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCartasJugador::typeid));
		this->Campo1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(0)->getDireccion())));
		this->Campo2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(1)->getDireccion())));
		this->Campo3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(2)->getDireccion())));
		this->Campo4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(mazo->seleccionar(3)->getDireccion())));
	}
	private: System::Void Campo2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Campo3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
