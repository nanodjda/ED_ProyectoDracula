#pragma once

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
	private: System::Windows::Forms::Button^  bVerCartas1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Vprincipal::typeid));
			this->bVerCartas1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bVerCartas1
			// 
			this->bVerCartas1->BackColor = System::Drawing::Color::Transparent;
			this->bVerCartas1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bVerCartas1.BackgroundImage")));
			this->bVerCartas1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bVerCartas1->FlatAppearance->BorderSize = 0;
			this->bVerCartas1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bVerCartas1->Location = System::Drawing::Point(361, 15);
			this->bVerCartas1->Margin = System::Windows::Forms::Padding(0);
			this->bVerCartas1->Name = L"bVerCartas1";
			this->bVerCartas1->Size = System::Drawing::Size(168, 66);
			this->bVerCartas1->TabIndex = 0;
			this->bVerCartas1->UseVisualStyleBackColor = false;
			this->bVerCartas1->Click += gcnew System::EventHandler(this, &Vprincipal::button1_Click);
			// 
			// Vprincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 605);
			this->Controls->Add(this->bVerCartas1);
			this->Name = L"Vprincipal";
			this->Text = L"Vprincipal";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
