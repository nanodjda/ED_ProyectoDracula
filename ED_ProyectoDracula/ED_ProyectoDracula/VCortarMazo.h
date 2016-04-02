#pragma once
#include "Vprincipal.h"

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
			this->SuspendLayout();
			// 
			// bSeguir
			// 
			this->bSeguir->BackColor = System::Drawing::Color::Transparent;
			this->bSeguir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bSeguir.BackgroundImage")));
			this->bSeguir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
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
			// VCortarMazo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(459, 338);
			this->Controls->Add(this->bSeguir);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
	};
}
