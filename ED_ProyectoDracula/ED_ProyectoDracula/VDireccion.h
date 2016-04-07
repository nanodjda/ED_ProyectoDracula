#pragma once

#include "Tablero.h"

namespace ED_ProyectoDracula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VDireccioon
	/// </summary>
	public ref class VDireccion : public System::Windows::Forms::Form
	{
	public:
		VDireccion(void)
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
		~VDireccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bHorizontal;
	private: System::Windows::Forms::Button^  bVertical;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VDireccion::typeid));
			this->bHorizontal = (gcnew System::Windows::Forms::Button());
			this->bVertical = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bHorizontal
			// 
			this->bHorizontal->BackColor = System::Drawing::Color::Transparent;
			this->bHorizontal->FlatAppearance->BorderSize = 0;
			this->bHorizontal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bHorizontal->Location = System::Drawing::Point(43, 77);
			this->bHorizontal->Name = L"bHorizontal";
			this->bHorizontal->Size = System::Drawing::Size(176, 60);
			this->bHorizontal->TabIndex = 0;
			this->bHorizontal->UseVisualStyleBackColor = false;
			this->bHorizontal->Click += gcnew System::EventHandler(this, &VDireccion::bHorizontal_Click);
			// 
			// bVertical
			// 
			this->bVertical->BackColor = System::Drawing::Color::Transparent;
			this->bVertical->FlatAppearance->BorderSize = 0;
			this->bVertical->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bVertical->Location = System::Drawing::Point(43, 182);
			this->bVertical->Name = L"bVertical";
			this->bVertical->Size = System::Drawing::Size(176, 48);
			this->bVertical->TabIndex = 1;
			this->bVertical->UseVisualStyleBackColor = false;
			this->bVertical->Click += gcnew System::EventHandler(this, &VDireccion::bVertical_Click);
			// 
			// VDireccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(412, 318);
			this->Controls->Add(this->bVertical);
			this->Controls->Add(this->bHorizontal);
			this->Name = L"VDireccion";
			this->Text = L"VDireccioon";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bHorizontal_Click(System::Object^  sender, System::EventArgs^  e) {
		Tablero^ tJuego = Tablero::Instance;

		if (tJuego->getJActual() == 1) {
			tJuego->setpDir1(0); //0 Horizontal
			tJuego->setpDir2(1); //1 Vertical
		}
		else {
			tJuego->setpDir1(1);
			tJuego->setpDir2(0);
		}

		tJuego->getJActual() == 1 ? tJuego->setJActual(2) : tJuego->setJActual(1);

		this->Close();

	}
	private: System::Void bVertical_Click(System::Object^  sender, System::EventArgs^  e) {
		Tablero^ tJuego = Tablero::Instance;

		if (tJuego->getJActual() == 1) {
			tJuego->setpDir1(1);
			tJuego->setpDir2(0);
		}
		else {
			tJuego->setpDir1(0);
			tJuego->setpDir2(1);
		}

		tJuego->getJActual() == 1 ? tJuego->setJActual(2) : tJuego->setJActual(1);

		this->Close();
	}
	};
}
