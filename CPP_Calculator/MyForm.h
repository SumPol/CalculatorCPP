#pragma once

namespace CPPCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  StandartToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  SientToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  HistoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  помощьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtDisplay;

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripMenuItem^  tempToolStripMenuItem;
	private: System::Windows::Forms::Label^  lablShowOp;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  HistoryToolStripMenuItem1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtConvert;
	private: System::Windows::Forms::TextBox^  lblConvert;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StandartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HistoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HistoryToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tempToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblConvert = (gcnew System::Windows::Forms::TextBox());
			this->txtConvert = (gcnew System::Windows::Forms::TextBox());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->lablShowOp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1166, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->StandartToolStripMenuItem,
					this->SientToolStripMenuItem, this->HistoryToolStripMenuItem, this->HistoryToolStripMenuItem1, this->tempToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// StandartToolStripMenuItem
			// 
			this->StandartToolStripMenuItem->Name = L"StandartToolStripMenuItem";
			this->StandartToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->StandartToolStripMenuItem->Text = L"Сдандартный";
			this->StandartToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::StandartToolStripMenuItem_Click);
			// 
			// SientToolStripMenuItem
			// 
			this->SientToolStripMenuItem->Name = L"SientToolStripMenuItem";
			this->SientToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->SientToolStripMenuItem->Text = L"Инженерный";
			this->SientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SientToolStripMenuItem_Click);
			// 
			// HistoryToolStripMenuItem
			// 
			this->HistoryToolStripMenuItem->Name = L"HistoryToolStripMenuItem";
			this->HistoryToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->HistoryToolStripMenuItem->Text = L"История";
			this->HistoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::HistoryToolStripMenuItem_Click);
			// 
			// HistoryToolStripMenuItem1
			// 
			this->HistoryToolStripMenuItem1->Checked = true;
			this->HistoryToolStripMenuItem1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->HistoryToolStripMenuItem1->Name = L"HistoryToolStripMenuItem1";
			this->HistoryToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->HistoryToolStripMenuItem1->Text = L"История";
			this->HistoryToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::HistoryToolStripMenuItem1_Click);
			// 
			// tempToolStripMenuItem
			// 
			this->tempToolStripMenuItem->Name = L"tempToolStripMenuItem";
			this->tempToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tempToolStripMenuItem->Text = L"Температура";
			this->tempToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tempToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ExitToolStripMenuItem->Text = L"Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->правкаToolStripMenuItem->Text = L"Правка";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 29);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(286, 41);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(2)));
			this->btn7->Location = System::Drawing::Point(12, 75);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(67, 63);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(85, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 63);
			this->button1->TabIndex = 3;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(158, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 63);
			this->button2->TabIndex = 4;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(231, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 63);
			this->button3->TabIndex = 5;
			this->button3->Text = L"±";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(231, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 63);
			this->button4->TabIndex = 9;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(158, 144);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 63);
			this->button5->TabIndex = 8;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(85, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 63);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 63);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(231, 213);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 63);
			this->button8->TabIndex = 13;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(158, 213);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 63);
			this->button9->TabIndex = 12;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(85, 213);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 63);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(12, 213);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 63);
			this->button11->TabIndex = 10;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(231, 351);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 63);
			this->button12->TabIndex = 21;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(158, 351);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 63);
			this->button13->TabIndex = 20;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(85, 351);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 63);
			this->button14->TabIndex = 19;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(12, 351);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 63);
			this->button15->TabIndex = 18;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(231, 282);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 63);
			this->button16->TabIndex = 17;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(158, 282);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 63);
			this->button17->TabIndex = 16;
			this->button17->Text = L"3";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(85, 282);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 63);
			this->button18->TabIndex = 15;
			this->button18->Text = L"2";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(12, 282);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 63);
			this->button19->TabIndex = 14;
			this->button19->Text = L"1";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(551, 351);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 63);
			this->button20->TabIndex = 41;
			this->button20->Text = L"%";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(478, 351);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(67, 63);
			this->button21->TabIndex = 40;
			this->button21->Text = L"Oct";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(405, 351);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 63);
			this->button22->TabIndex = 39;
			this->button22->Text = L"Mod";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(332, 351);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 63);
			this->button23->TabIndex = 38;
			this->button23->Text = L"Exp";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(551, 282);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(67, 63);
			this->button24->TabIndex = 37;
			this->button24->Text = L"ln x";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(478, 282);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(67, 63);
			this->button25->TabIndex = 36;
			this->button25->Text = L"Hex";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(405, 282);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(67, 63);
			this->button26->TabIndex = 35;
			this->button26->Text = L"Tan";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(332, 282);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(67, 63);
			this->button27->TabIndex = 34;
			this->button27->Text = L"Tanh";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(405, 75);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(67, 63);
			this->button28->TabIndex = 33;
			this->button28->Text = L"Log";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(478, 213);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(67, 63);
			this->button29->TabIndex = 32;
			this->button29->Text = L"Bin";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(405, 213);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(67, 63);
			this->button30->TabIndex = 31;
			this->button30->Text = L"Cos";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(332, 213);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(67, 63);
			this->button31->TabIndex = 30;
			this->button31->Text = L"Cosh";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(478, 75);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(67, 63);
			this->button32->TabIndex = 29;
			this->button32->Text = L"Sqrt";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button33->Location = System::Drawing::Point(478, 144);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(67, 63);
			this->button33->TabIndex = 28;
			this->button33->Text = L"Dec";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button34->Location = System::Drawing::Point(405, 144);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(67, 63);
			this->button34->TabIndex = 27;
			this->button34->Text = L"Sin";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button35->Location = System::Drawing::Point(332, 144);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(67, 63);
			this->button35->TabIndex = 26;
			this->button35->Text = L"Sinh";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button36->Location = System::Drawing::Point(551, 75);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(67, 63);
			this->button36->TabIndex = 25;
			this->button36->Text = L"x^2";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button37->Location = System::Drawing::Point(551, 144);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(67, 63);
			this->button37->TabIndex = 24;
			this->button37->Text = L"x^3";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button38->Location = System::Drawing::Point(551, 213);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(67, 63);
			this->button38->TabIndex = 23;
			this->button38->Text = L"1/x";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button39->Location = System::Drawing::Point(332, 75);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(67, 63);
			this->button39->TabIndex = 22;
			this->button39->Text = L"π";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblConvert);
			this->panel1->Controls->Add(this->txtConvert);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(664, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(479, 379);
			this->panel1->TabIndex = 42;
			// 
			// lblConvert
			// 
			this->lblConvert->BackColor = System::Drawing::Color::LightGray;
			this->lblConvert->Cursor = System::Windows::Forms::Cursors::No;
			this->lblConvert->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblConvert->Location = System::Drawing::Point(333, 250);
			this->lblConvert->Multiline = true;
			this->lblConvert->Name = L"lblConvert";
			this->lblConvert->Size = System::Drawing::Size(133, 28);
			this->lblConvert->TabIndex = 9;
			this->lblConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtConvert
			// 
			this->txtConvert->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtConvert->Location = System::Drawing::Point(333, 46);
			this->txtConvert->Multiline = true;
			this->txtConvert->Name = L"txtConvert";
			this->txtConvert->Size = System::Drawing::Size(133, 28);
			this->txtConvert->TabIndex = 8;
			this->txtConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button41->Location = System::Drawing::Point(212, 304);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(115, 57);
			this->button41->TabIndex = 6;
			this->button41->Text = L"Сброс";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(33, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 28);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Результат перевода";
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button40->Location = System::Drawing::Point(38, 304);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(117, 57);
			this->button40->TabIndex = 4;
			this->button40->Text = L"Перевод";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(19, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите значение для превода";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(36, 105);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(238, 32);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Цельсий в фаренгейт";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(36, 187);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(112, 32);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Кельвин";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(36, 147);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(238, 32);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Фаренгейт в цельсий";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// lablShowOp
			// 
			this->lablShowOp->AutoSize = true;
			this->lablShowOp->BackColor = System::Drawing::Color::White;
			this->lablShowOp->Location = System::Drawing::Point(13, 30);
			this->lablShowOp->Name = L"lablShowOp";
			this->lablShowOp->Size = System::Drawing::Size(0, 13);
			this->lablShowOp->TabIndex = 43;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 436);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(286, 121);
			this->listBox1->TabIndex = 44;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 572);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lablShowOp);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		double a;
		String^iOperator;
		float iCelsius, iFahrenheit, iKevin;
		char iOperation;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Width = 326;
		MyForm::Height = 460;
		txtDisplay->Width = 286;
		HistoryToolStripMenuItem1->Visible = false;
	}
	private: System::Void файлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void SientToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	MyForm::Width = 648;
	txtDisplay->Width = 605;
}
private: System::Void ExitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void tempToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Width = 1161;
	txtDisplay->Width = 605;
}
private: System::Void StandartToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Width = 326;
	MyForm::Height = 460;
	txtDisplay->Width = 286;
	//HistoryToolStripMenuItem->Visible = false;
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {

	Button ^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Clear();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Clear();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {

	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void Arithmetic_Op(System::Object^  sender, System::EventArgs^  e) {

	Button ^ op = safe_cast<Button^>(sender);

	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = op->Text;
	lablShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		lablShowOp->Text = "";
		iSecondnum = Double::Parse(txtDisplay->Text);
		if (iOperator == "+")
		{
			iResult = iFirstnum + iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
		}
		else if (iOperator == "-")
		{
			iResult = iFirstnum - iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
		}
		else if (iOperator == "*")
		{
			iResult = iFirstnum * iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
		}
		else if (iOperator == "/")
		{
			iResult = iFirstnum / iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
		}
		else if (iOperator == "Mod")
		{
			int iFirst, iSecond, iResults;
			iFirst = Convert::ToInt64(iFirstnum);
			iSecond = Convert::ToInt64(iSecondnum);
			iResults = iFirst % iSecond;
			txtDisplay->Text = System::Convert::ToString(iResults);
			listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
		}
		else if (iOperator == "Exp")
		{
			iResult = (iFirstnum, (1 / iSecondnum));
			txtDisplay->Text = System::Convert::ToString(Math::Exp((iResult)));
			listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
		}
	}
private: System::Void HistoryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Visible = true;
		HistoryToolStripMenuItem->Visible = false;
		HistoryToolStripMenuItem1->Visible = true;
		MyForm::Height = 610;
}
private: System::Void HistoryToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (HistoryToolStripMenuItem1->Checked == true)
	{
		HistoryToolStripMenuItem->Visible = true;
		listBox1->Width = 326;
		listBox1->Visible = false;
		MyForm::Height = 460;
		HistoryToolStripMenuItem1->Visible = false;
	}
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = ("3.1415926535897932384626433832795");
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("log" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
	a = Math::Log(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sqrt(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("sinh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Sinh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(lablShowOp->Text);
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("sind" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(lablShowOp->Text);
	a = Math::Sin(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("cosh" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
	a = Math::Cosh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	lablShowOp->Text = "";
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("cosd" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
	a = Math::Cos(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 2);
	lablShowOp->Text = "";
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("tanh" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
	a = Math::Tanh(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Double::Parse(txtDisplay->Text);
	lablShowOp->Text = System::Convert::ToString("tand" + "(" + (txtDisplay->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lablShowOp->Text));
	a = Math::Tan(a);
	txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 16);
	lablShowOp->Text = "";
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 8);
	lablShowOp->Text = "";
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	a = System::Math::Log(Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	iOperation = 'C';
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	iOperation = 'F';
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	iOperation = 'K';
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	switch (iOperation)
	{
	case 'C':
		(float::TryParse(txtConvert->Text, iCelsius));
		lblConvert->Text = ((((9 * iCelsius) / 5) + 32).ToString());

		break;

	case 'F':
		(float::TryParse(txtConvert->Text, iFahrenheit));
		lblConvert->Text = ((((iFahrenheit - 32) * 5) / 9).ToString());

		break;

	case 'K':
		(float::TryParse(txtConvert->Text, iKevin));
		lblConvert->Text = (((((9 * iKevin) / 5) + 32) + 273.15).ToString());

		break;
	}
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	lblConvert->Text = "";
	txtConvert->Text = "";
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
}
};
}
