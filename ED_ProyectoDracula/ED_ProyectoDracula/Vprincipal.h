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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bVerCartas1
			// 
			this->bVerCartas1->BackColor = System::Drawing::Color::Transparent;
			this->bVerCartas1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bVerCartas1.BackgroundImage")));
			this->bVerCartas1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bVerCartas1->FlatAppearance->BorderSize = 0;
			this->bVerCartas1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bVerCartas1->Location = System::Drawing::Point(301, 15);
			this->bVerCartas1->Margin = System::Windows::Forms::Padding(0);
			this->bVerCartas1->Name = L"bVerCartas1";
			this->bVerCartas1->Size = System::Drawing::Size(126, 54);
			this->bVerCartas1->TabIndex = 0;
			this->bVerCartas1->UseVisualStyleBackColor = false;
			this->bVerCartas1->Click += gcnew System::EventHandler(this, &Vprincipal::button1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(301, 466);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 54);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(551, 474);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 54);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Vprincipal::button2_Click);
			// 
			// Vprincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(664, 526);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bVerCartas1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Vprincipal";
			this->Text = L"Vprincipal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Vprincipal::Vprincipal_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void Vprincipal_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	Application::Exit();

}
};
}
