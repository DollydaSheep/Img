#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Reset;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ ofd;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->MinimumSize = System::Drawing::Size(440, 225);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(440, 225);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 219);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->Reset);
			this->panel2->Location = System::Drawing::Point(12, 243);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(440, 53);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(174, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Zoom";
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(379, 14);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 25);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Open";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(328, 14);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 25);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Close";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(284, 14);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 25);
			this->button6->TabIndex = 6;
			this->button6->Text = L"=";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(249, 14);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(29, 25);
			this->button5->TabIndex = 5;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(214, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(29, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(124, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(84, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Reset->Cursor = System::Windows::Forms::Cursors::Default;
			this->Reset->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Reset->Location = System::Drawing::Point(13, 14);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(65, 25);
			this->Reset->TabIndex = 1;
			this->Reset->Text = L"Reset All";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(464, 308);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->MinimumSize = System::Drawing::Size(480, 347);
			this->Name = L"Form1";
			this->Text = L"Image Viewer";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//EDITABLE CODE STARTS HERE

		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;
		int zooms = 0;

	//CLOSE BUTTON
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->ImageLocation = "";
	}

	//OPEN BUTTON
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pictureBox1->ImageLocation = ofd->FileName;
			path = System::IO::Path::GetDirectoryName(ofd->FileName);
			files = System::IO::Directory::GetFiles(path);

			for (int i = 0; i < files->Length; i++) 
			{
				if(files[i]==ofd->FileName)
				{
					currentIndex = i;
					break;
				}
			}
		}

		//(NEW CHANGE 05/26/2023)
		button2->Enabled = true;
		button3->Enabled = true;
		
		button5->Enabled = true;
		button6->Enabled = true;

	}

	//RESET BUTTON
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}

	//NEXT BUTTON
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if(currentIndex != files->Length - 1)
		{
			currentIndex++;

		}
		pictureBox1->ImageLocation = files[currentIndex];
	}

	//BACK BUTTON
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentIndex != 0)
		{
			currentIndex--;

		}
		pictureBox1->ImageLocation = files[currentIndex];
	}

	//ZOOM IN BUTTON
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Top -= zoomLevel / 2;
		pictureBox1->Left -= zoomLevel / 2;
		pictureBox1->Height += zoomLevel;
		pictureBox1->Width += zoomLevel;
		zooms++;

		//(NEW CHANGE 05/26/2023)
		button4->Enabled = true;
	}

	//ZOOM OUT BUTTON
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->Top += zoomLevel / 2;
		pictureBox1->Left += zoomLevel / 2;
		pictureBox1->Height -= zoomLevel;
		pictureBox1->Width -= zoomLevel;
		zooms--;

		//(NEW CHANGE 05/26/2023)
		if (zooms == 0) {
			button4->Enabled = false;
		}
	}

	//RESET DEFAULT ZOOM BUTTON
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int newZoom = zooms;
		if (zooms > 0)
		{
			for (int i = 0; i < newZoom; i++)
			{
				button4->PerformClick();

			}
		}

		if (zooms < 0)
		{
			for (int i = 0; i > newZoom; i--)
			{
				button5->PerformClick();

			}
		}

		zooms = 0; 
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
