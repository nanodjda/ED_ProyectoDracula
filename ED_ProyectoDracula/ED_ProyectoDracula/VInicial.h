#pragma once

#include "VCortarMazo.h"

namespace ED_ProyectoDracula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VInicial
	/// </summary>
	public ref class VInicial : public System::Windows::Forms::Form
	{
	public:
		VInicial(void)
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
		~VInicial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bInicial;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VInicial::typeid));
			this->bInicial = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bInicial
			// 
			this->bInicial->BackColor = System::Drawing::Color::Transparent;
			this->bInicial->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bInicial.BackgroundImage")));
			this->bInicial->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bInicial->FlatAppearance->BorderSize = 0;
			this->bInicial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInicial->Location = System::Drawing::Point(317, 489);
			this->bInicial->Margin = System::Windows::Forms::Padding(0);
			this->bInicial->Name = L"bInicial";
			this->bInicial->Size = System::Drawing::Size(150, 64);
			this->bInicial->TabIndex = 0;
			this->bInicial->UseVisualStyleBackColor = false;
			this->bInicial->Click += gcnew System::EventHandler(this, &VInicial::button1_Click);
			// 
			// VInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->bInicial);
			this->Name = L"VInicial";
			this->Text = L"VInicial";
			this->Load += gcnew System::EventHandler(this, &VInicial::VInicial_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		VCortarMazo^ cM = gcnew VCortarMazo();
		cM->Show();
		this->Hide();
	}

	private: System::Void VInicial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
