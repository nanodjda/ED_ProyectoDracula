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
			this->bHorizontal = (gcnew System::Windows::Forms::Button());
			this->bVertical = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bHorizontal
			// 
			this->bHorizontal->Location = System::Drawing::Point(73, 71);
			this->bHorizontal->Name = L"bHorizontal";
			this->bHorizontal->Size = System::Drawing::Size(75, 23);
			this->bHorizontal->TabIndex = 0;
			this->bHorizontal->Text = L"Horizontal";
			this->bHorizontal->UseVisualStyleBackColor = true;
			this->bHorizontal->Click += gcnew System::EventHandler(this, &VDireccion::bHorizontal_Click);
			// 
			// bVertical
			// 
			this->bVertical->Location = System::Drawing::Point(237, 71);
			this->bVertical->Name = L"bVertical";
			this->bVertical->Size = System::Drawing::Size(75, 23);
			this->bVertical->TabIndex = 1;
			this->bVertical->Text = L"Vertical";
			this->bVertical->UseVisualStyleBackColor = true;
			this->bVertical->Click += gcnew System::EventHandler(this, &VDireccion::bVertical_Click);
			// 
			// VDireccioon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 176);
			this->Controls->Add(this->bVertical);
			this->Controls->Add(this->bHorizontal);
			this->Name = L"VDireccioon";
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
		this->Close();
	}
	};
}
