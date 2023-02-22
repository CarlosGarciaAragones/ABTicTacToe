#pragma once

namespace ABconNET {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Name = L"panel1";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Name = L"label3";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		Boolean checker;
#pragma endregion
		void EnableFalse() {
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}

		void Win() {
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button2->BackColor = System::Drawing::Color::Green;
				button3->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
			{
				button4->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button6->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
			{
				button7->BackColor = System::Drawing::Color::Green;
				button8->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button4->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
			{
				button2->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button8->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X")
			{
				button3->BackColor = System::Drawing::Color::Green;
				button6->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
			{
				button3->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}

			//====================================================================================

			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button2->BackColor = System::Drawing::Color::Green;
				button3->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
			{
				button4->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button6->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
			{
				button7->BackColor = System::Drawing::Color::Green;
				button8->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button4->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
			{
				button2->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button8->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O")
			{
				button3->BackColor = System::Drawing::Color::Green;
				button6->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
			{
				button3->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("Ha ganado el jugador O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnableFalse();
			}
		}

		//==================================================================================

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button1->Text = "X";
		label2->Text = "O";
		checker = true;
	} else {
		button1->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button2->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button2->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button3->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button3->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button4->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button4->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button5->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button5->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button6->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button6->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button7->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button7->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button7->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button8->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button8->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button9->Text = "X";
		label2->Text = "O";
		checker = true;
	}
	else {
		button9->Text = "O";
		label2->Text = "X";
		checker = false;
	}
	Win();
	button9->Enabled = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	button1->BackColor = System::Drawing::Color::WhiteSmoke;
	button2->BackColor = System::Drawing::Color::WhiteSmoke;
	button3->BackColor = System::Drawing::Color::WhiteSmoke;
	button4->BackColor = System::Drawing::Color::WhiteSmoke;
	button5->BackColor = System::Drawing::Color::WhiteSmoke;
	button6->BackColor = System::Drawing::Color::WhiteSmoke;
	button7->BackColor = System::Drawing::Color::WhiteSmoke;
	button8->BackColor = System::Drawing::Color::WhiteSmoke;
	button9->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button10->Enabled = true;
}
};
}

