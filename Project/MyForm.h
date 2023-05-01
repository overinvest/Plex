#pragma once

#include"TPoint.h"
#include"TLine.h"
#include<vector>
#include<set>
#include<queue>
#include<iostream>
#include <msclr\marshal_cppstd.h>
#include"Plex.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	std::vector<TPoint*> Dots;
	std::vector<TLine*> Lines;
	std::vector<int> Colors;
	Plex *flex = nullptr;
	
	std::set<TPoint> setik;
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
	private: System::Windows::Forms::PictureBox^  picture;
	private: System::Windows::Forms::DataGridView^  GridDots;




	private: System::Windows::Forms::Label^  LabelMovePoint;
	private: System::Windows::Forms::TextBox^  TextBoxNamePointToMove;
	private: System::Windows::Forms::TextBox^  TextBoxDxPointToMove;
	private: System::Windows::Forms::TextBox^  TextBoxDyPointToMove;



	private: System::Windows::Forms::Label^  LabelNamePointToMove;
	private: System::Windows::Forms::Label^  LabelDyPointToMove;
	private: System::Windows::Forms::Label^  LabelDxPointToMove;
	private: System::Windows::Forms::Button^  ButtonMovePoint;
	private: System::Windows::Forms::Label^  LabelCreateLine;
	private: System::Windows::Forms::Label^  LabelName1CreateLine;
	private: System::Windows::Forms::Label^  LabelName2CreateLine;
	private: System::Windows::Forms::TextBox^  TextBoxCreateLine1;
	private: System::Windows::Forms::TextBox^  TextBoxCreateLine2;
	private: System::Windows::Forms::Button^  ButtonCreateLine;
	private: System::Windows::Forms::DataGridView^  GridLines;
	private: System::Windows::Forms::TextBox^  TextBoxNameDot;
	private: System::Windows::Forms::Label^  LabelCurrentDotName;
	private: System::Windows::Forms::Button^  AddPlexButton;
	private: System::Windows::Forms::Button^  DrawPlexButton;
	private: System::Windows::Forms::Button^  DrawPictButton;

	private: System::Windows::Forms::Button^  ClearButton;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  ColorButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label4;








	protected:

	protected:

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
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->GridDots = (gcnew System::Windows::Forms::DataGridView());
			this->LabelMovePoint = (gcnew System::Windows::Forms::Label());
			this->TextBoxNamePointToMove = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxDxPointToMove = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxDyPointToMove = (gcnew System::Windows::Forms::TextBox());
			this->LabelNamePointToMove = (gcnew System::Windows::Forms::Label());
			this->LabelDyPointToMove = (gcnew System::Windows::Forms::Label());
			this->LabelDxPointToMove = (gcnew System::Windows::Forms::Label());
			this->ButtonMovePoint = (gcnew System::Windows::Forms::Button());
			this->LabelCreateLine = (gcnew System::Windows::Forms::Label());
			this->LabelName1CreateLine = (gcnew System::Windows::Forms::Label());
			this->LabelName2CreateLine = (gcnew System::Windows::Forms::Label());
			this->TextBoxCreateLine1 = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCreateLine2 = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCreateLine = (gcnew System::Windows::Forms::Button());
			this->GridLines = (gcnew System::Windows::Forms::DataGridView());
			this->TextBoxNameDot = (gcnew System::Windows::Forms::TextBox());
			this->LabelCurrentDotName = (gcnew System::Windows::Forms::Label());
			this->AddPlexButton = (gcnew System::Windows::Forms::Button());
			this->DrawPlexButton = (gcnew System::Windows::Forms::Button());
			this->DrawPictButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->ColorButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridDots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridLines))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// picture
			// 
			this->picture->BackColor = System::Drawing::Color::White;
			this->picture->Location = System::Drawing::Point(12, 27);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(1000, 593);
			this->picture->TabIndex = 0;
			this->picture->TabStop = false;
			this->picture->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pict_MouseDown);
			this->picture->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pict_MouseMove);
			// 
			// GridDots
			// 
			this->GridDots->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->GridDots->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->GridDots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->GridDots->Location = System::Drawing::Point(1018, 27);
			this->GridDots->Name = L"GridDots";
			this->GridDots->RowHeadersVisible = false;
			this->GridDots->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->GridDots->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->GridDots->Size = System::Drawing::Size(162, 251);
			this->GridDots->TabIndex = 1;
			// 
			// LabelMovePoint
			// 
			this->LabelMovePoint->AutoSize = true;
			this->LabelMovePoint->Location = System::Drawing::Point(1304, 33);
			this->LabelMovePoint->Name = L"LabelMovePoint";
			this->LabelMovePoint->Size = System::Drawing::Size(60, 13);
			this->LabelMovePoint->TabIndex = 2;
			this->LabelMovePoint->Text = L"Move point";
			// 
			// TextBoxNamePointToMove
			// 
			this->TextBoxNamePointToMove->Location = System::Drawing::Point(1258, 53);
			this->TextBoxNamePointToMove->Name = L"TextBoxNamePointToMove";
			this->TextBoxNamePointToMove->Size = System::Drawing::Size(52, 20);
			this->TextBoxNamePointToMove->TabIndex = 3;
			// 
			// TextBoxDxPointToMove
			// 
			this->TextBoxDxPointToMove->Location = System::Drawing::Point(1340, 53);
			this->TextBoxDxPointToMove->Name = L"TextBoxDxPointToMove";
			this->TextBoxDxPointToMove->Size = System::Drawing::Size(37, 20);
			this->TextBoxDxPointToMove->TabIndex = 4;
			// 
			// TextBoxDyPointToMove
			// 
			this->TextBoxDyPointToMove->Location = System::Drawing::Point(1407, 53);
			this->TextBoxDyPointToMove->Name = L"TextBoxDyPointToMove";
			this->TextBoxDyPointToMove->Size = System::Drawing::Size(37, 20);
			this->TextBoxDyPointToMove->TabIndex = 5;
			// 
			// LabelNamePointToMove
			// 
			this->LabelNamePointToMove->AutoSize = true;
			this->LabelNamePointToMove->Location = System::Drawing::Point(1217, 56);
			this->LabelNamePointToMove->Name = L"LabelNamePointToMove";
			this->LabelNamePointToMove->Size = System::Drawing::Size(35, 13);
			this->LabelNamePointToMove->TabIndex = 6;
			this->LabelNamePointToMove->Text = L"Name";
			// 
			// LabelDyPointToMove
			// 
			this->LabelDyPointToMove->AutoSize = true;
			this->LabelDyPointToMove->Location = System::Drawing::Point(1383, 56);
			this->LabelDyPointToMove->Name = L"LabelDyPointToMove";
			this->LabelDyPointToMove->Size = System::Drawing::Size(18, 13);
			this->LabelDyPointToMove->TabIndex = 7;
			this->LabelDyPointToMove->Text = L"dy";
			// 
			// LabelDxPointToMove
			// 
			this->LabelDxPointToMove->AutoSize = true;
			this->LabelDxPointToMove->Location = System::Drawing::Point(1316, 56);
			this->LabelDxPointToMove->Name = L"LabelDxPointToMove";
			this->LabelDxPointToMove->Size = System::Drawing::Size(18, 13);
			this->LabelDxPointToMove->TabIndex = 8;
			this->LabelDxPointToMove->Text = L"dx";
			// 
			// ButtonMovePoint
			// 
			this->ButtonMovePoint->Location = System::Drawing::Point(1220, 79);
			this->ButtonMovePoint->Name = L"ButtonMovePoint";
			this->ButtonMovePoint->Size = System::Drawing::Size(224, 30);
			this->ButtonMovePoint->TabIndex = 9;
			this->ButtonMovePoint->Text = L"Move";
			this->ButtonMovePoint->UseVisualStyleBackColor = true;
			this->ButtonMovePoint->Click += gcnew System::EventHandler(this, &MyForm::ButtonMovePoint_Click);
			// 
			// LabelCreateLine
			// 
			this->LabelCreateLine->AutoSize = true;
			this->LabelCreateLine->Location = System::Drawing::Point(1304, 116);
			this->LabelCreateLine->Name = L"LabelCreateLine";
			this->LabelCreateLine->Size = System::Drawing::Size(61, 13);
			this->LabelCreateLine->TabIndex = 10;
			this->LabelCreateLine->Text = L"Create Line";
			// 
			// LabelName1CreateLine
			// 
			this->LabelName1CreateLine->AutoSize = true;
			this->LabelName1CreateLine->Location = System::Drawing::Point(1217, 142);
			this->LabelName1CreateLine->Name = L"LabelName1CreateLine";
			this->LabelName1CreateLine->Size = System::Drawing::Size(44, 13);
			this->LabelName1CreateLine->TabIndex = 11;
			this->LabelName1CreateLine->Text = L"Name 1";
			// 
			// LabelName2CreateLine
			// 
			this->LabelName2CreateLine->AutoSize = true;
			this->LabelName2CreateLine->Location = System::Drawing::Point(1337, 142);
			this->LabelName2CreateLine->Name = L"LabelName2CreateLine";
			this->LabelName2CreateLine->Size = System::Drawing::Size(44, 13);
			this->LabelName2CreateLine->TabIndex = 12;
			this->LabelName2CreateLine->Text = L"Name 2";
			// 
			// TextBoxCreateLine1
			// 
			this->TextBoxCreateLine1->Location = System::Drawing::Point(1267, 139);
			this->TextBoxCreateLine1->Name = L"TextBoxCreateLine1";
			this->TextBoxCreateLine1->Size = System::Drawing::Size(52, 20);
			this->TextBoxCreateLine1->TabIndex = 13;
			// 
			// TextBoxCreateLine2
			// 
			this->TextBoxCreateLine2->Location = System::Drawing::Point(1392, 139);
			this->TextBoxCreateLine2->Name = L"TextBoxCreateLine2";
			this->TextBoxCreateLine2->Size = System::Drawing::Size(52, 20);
			this->TextBoxCreateLine2->TabIndex = 14;
			// 
			// ButtonCreateLine
			// 
			this->ButtonCreateLine->Location = System::Drawing::Point(1220, 165);
			this->ButtonCreateLine->Name = L"ButtonCreateLine";
			this->ButtonCreateLine->Size = System::Drawing::Size(224, 30);
			this->ButtonCreateLine->TabIndex = 15;
			this->ButtonCreateLine->Text = L"Create";
			this->ButtonCreateLine->UseVisualStyleBackColor = true;
			this->ButtonCreateLine->Click += gcnew System::EventHandler(this, &MyForm::ButtonCreateLine_Click);
			// 
			// GridLines
			// 
			this->GridLines->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->GridLines->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->GridLines->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->GridLines->Location = System::Drawing::Point(1018, 284);
			this->GridLines->Name = L"GridLines";
			this->GridLines->RowHeadersVisible = false;
			this->GridLines->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->GridLines->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->GridLines->Size = System::Drawing::Size(252, 266);
			this->GridLines->TabIndex = 16;
			// 
			// TextBoxNameDot
			// 
			this->TextBoxNameDot->Location = System::Drawing::Point(1018, 573);
			this->TextBoxNameDot->Name = L"TextBoxNameDot";
			this->TextBoxNameDot->Size = System::Drawing::Size(161, 20);
			this->TextBoxNameDot->TabIndex = 17;
			// 
			// LabelCurrentDotName
			// 
			this->LabelCurrentDotName->AutoSize = true;
			this->LabelCurrentDotName->Location = System::Drawing::Point(1054, 557);
			this->LabelCurrentDotName->Name = L"LabelCurrentDotName";
			this->LabelCurrentDotName->Size = System::Drawing::Size(92, 13);
			this->LabelCurrentDotName->TabIndex = 18;
			this->LabelCurrentDotName->Text = L"Current Dot Name";
			// 
			// AddPlexButton
			// 
			this->AddPlexButton->Location = System::Drawing::Point(1307, 330);
			this->AddPlexButton->Name = L"AddPlexButton";
			this->AddPlexButton->Size = System::Drawing::Size(137, 66);
			this->AddPlexButton->TabIndex = 19;
			this->AddPlexButton->Text = L"Добавить в плекс конфигурацию на рисунке";
			this->AddPlexButton->UseVisualStyleBackColor = true;
			this->AddPlexButton->Click += gcnew System::EventHandler(this, &MyForm::AddPlexButton_Click);
			// 
			// DrawPlexButton
			// 
			this->DrawPlexButton->Location = System::Drawing::Point(1307, 402);
			this->DrawPlexButton->Name = L"DrawPlexButton";
			this->DrawPlexButton->Size = System::Drawing::Size(137, 30);
			this->DrawPlexButton->TabIndex = 20;
			this->DrawPlexButton->Text = L"Показать плекс";
			this->DrawPlexButton->UseVisualStyleBackColor = true;
			this->DrawPlexButton->Click += gcnew System::EventHandler(this, &MyForm::DrawPlexButton_Click);
			// 
			// DrawPictButton
			// 
			this->DrawPictButton->Location = System::Drawing::Point(1307, 438);
			this->DrawPictButton->Name = L"DrawPictButton";
			this->DrawPictButton->Size = System::Drawing::Size(137, 30);
			this->DrawPictButton->TabIndex = 21;
			this->DrawPictButton->Text = L"Показать рисунок";
			this->DrawPictButton->UseVisualStyleBackColor = true;
			this->DrawPictButton->Click += gcnew System::EventHandler(this, &MyForm::DrawPictButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Location = System::Drawing::Point(1307, 472);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(137, 38);
			this->ClearButton->TabIndex = 23;
			this->ClearButton->Text = L"Очистить всё";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// colorDialog1
			// 
			this->colorDialog1->AnyColor = true;
			this->colorDialog1->ShowHelp = true;
			// 
			// ColorButton
			// 
			this->ColorButton->Location = System::Drawing::Point(1307, 516);
			this->ColorButton->Name = L"ColorButton";
			this->ColorButton->Size = System::Drawing::Size(137, 38);
			this->ColorButton->TabIndex = 24;
			this->ColorButton->Text = L"Поменять цвет";
			this->ColorButton->UseVisualStyleBackColor = true;
			this->ColorButton->Click += gcnew System::EventHandler(this, &MyForm::ColorButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1456, 24);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьToolStripMenuItem,
					this->открытьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1220, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 30);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Move";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1265, 228);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"dx";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1332, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"dy";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1356, 225);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 20);
			this->textBox1->TabIndex = 29;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1289, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(37, 20);
			this->textBox2->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1304, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Move plex";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1456, 632);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ColorButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->DrawPictButton);
			this->Controls->Add(this->DrawPlexButton);
			this->Controls->Add(this->AddPlexButton);
			this->Controls->Add(this->LabelCurrentDotName);
			this->Controls->Add(this->TextBoxNameDot);
			this->Controls->Add(this->GridLines);
			this->Controls->Add(this->ButtonCreateLine);
			this->Controls->Add(this->TextBoxCreateLine2);
			this->Controls->Add(this->TextBoxCreateLine1);
			this->Controls->Add(this->LabelName2CreateLine);
			this->Controls->Add(this->LabelName1CreateLine);
			this->Controls->Add(this->LabelCreateLine);
			this->Controls->Add(this->ButtonMovePoint);
			this->Controls->Add(this->LabelDxPointToMove);
			this->Controls->Add(this->LabelDyPointToMove);
			this->Controls->Add(this->LabelNamePointToMove);
			this->Controls->Add(this->TextBoxDyPointToMove);
			this->Controls->Add(this->TextBoxDxPointToMove);
			this->Controls->Add(this->TextBoxNamePointToMove);
			this->Controls->Add(this->LabelMovePoint);
			this->Controls->Add(this->GridDots);
			this->Controls->Add(this->picture);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridDots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridLines))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Graphics^ g;
		Bitmap^ Image;
		SolidBrush^ Brush;
		int DotName = -1;
		int COLOR = -16777216;
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			Image = gcnew Bitmap(picture->Width, picture->Height);
			g = Graphics::FromImage(Image);
			picture->Image = Image;
		}

		void PrintDotsDataGrid() {
			GridDots->RowCount = Dots.size();
			GridDots->ColumnCount = 3;
			GridDots->Columns[0]->HeaderCell->Value = "Name";
			GridDots->Columns[1]->HeaderCell->Value = "X";
			GridDots->Columns[2]->HeaderCell->Value = "Y";
			for (int i = 0; i < Dots.size(); i++) {
				GridDots->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(Dots[i]->GetName());
				GridDots->Rows[i]->Cells[1]->Value = System::Convert::ToString(Dots[i]->GetX());
				GridDots->Rows[i]->Cells[2]->Value = System::Convert::ToString(Dots[i]->GetY());
			}
		}

		int MixColors(int red, int alpha) {
			int black = 255 - red;
			int mixedRed = (alpha * red + (255 - alpha) * black) / 255;
			return System::Drawing::Color::FromArgb(255, mixedRed, 0, 0).ToArgb();
		}


		std::string TranslateTo26(int x) {
			std::string ans;
			while (x) {
				ans += char(x % 26 + 'A');
				x /= 26;
			}
			std::reverse(ans.begin(), ans.end());
			if (ans.size() == 0) {
				ans += 'A';
			}
			return ans;
		}

		std::string GenerateNewName() {
			return TranslateTo26(++DotName);
		}
		System::Void pict_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				Image = gcnew Bitmap(picture->Image);
				int X = e->X;
				int Y = e->Y;
				std::string name = GenerateNewName();

				Dots.push_back(new TPoint(X, Y, name));
				Dots.back()->SetColor(COLOR);
				//MessageBox::Show(System::Convert::ToString(mas.size()));
				PrintDotsDataGrid();
				DrawDots();
			}
			else if (e->Button == System::Windows::Forms::MouseButtons::Right) {
				
			}
		}

		System::Void pict_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^  e) {
			int X = e->X;
			int Y = e->Y;
			for (int i = 0; i < Dots.size(); i++) {
				if (Dots[i]->IsFigure(X, Y)) {
					TextBoxNameDot->Text = msclr::interop::marshal_as<String^>(Dots[i]->GetName());
					return;
				}
			}
		}
		int FindNameInDots(std::string s) {
			for (int i = 0; i < Dots.size(); i++) {
				if (Dots[i]->GetName() == s) return i;
			}
			return -1;
		}

		void ClearPictureBox() {
			Image = gcnew Bitmap(picture->Width, picture->Height);
			g->Clear(Color::White);
			picture->Image = Image;
			picture->Refresh();
			picture->Invalidate();
		}

		System::Void ButtonMovePoint_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string NamePointToMove = msclr::interop::marshal_as<std::string>(TextBoxNamePointToMove->Text);
			int dx = System::Convert::ToInt32(TextBoxDxPointToMove->Text);
			int dy = System::Convert::ToInt32(TextBoxDyPointToMove->Text);
			int index = FindNameInDots(NamePointToMove);
			if (index == -1) {
				MessageBox::Show("Такого имени точки не существует!");
				return;
			}
			
			if (flex) {
				TPoint* find = flex->SearchPoint(NamePointToMove);

				if (find) {
					find->MovePoint(dx, dy);
				}
				flex->saveFile();
				flex->saveGraph();
			}
			Dots[index]->MovePoint(dx, dy);
			if (Dots.size()) PrintDotsDataGrid();
			if (Lines.size()) PrintLinesDataGrid();
			
			ClearPictureBox();

			DrawLines();
			DrawDots();
			
		}
	
		void DrawDots() {
			for (int i = 0; i < Dots.size(); i++) {
				delete g;
				g = Graphics::FromImage(Image);
				picture->Image = Image;
				Dots[i]->SetColor(COLOR);
				Dots[i]->Draw(g);
				picture->Refresh();
				picture->Invalidate();
			}
		}

		void DrawLines() {
			for (int i = 0; i < Lines.size(); i++) {
				delete g;
				g = Graphics::FromImage(Image);
				picture->Image = Image;
				Lines[i]->SetColor(COLOR);
				Lines[i]->Draw(g);
				picture->Refresh();
				picture->Invalidate();
			}
		}

		void PrintLinesDataGrid() {
			GridLines->RowCount = Lines.size();
			GridLines->ColumnCount = 5;
			GridLines->Columns[0]->HeaderCell->Value = "Name";
			GridLines->Columns[1]->HeaderCell->Value = "X1";
			GridLines->Columns[2]->HeaderCell->Value = "Y1";
			GridLines->Columns[3]->HeaderCell->Value = "X2";
			GridLines->Columns[4]->HeaderCell->Value = "Y2";
			for (int i = 0; i < Lines.size(); i++) {
				GridLines->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(Lines[i]->GetName());
				GridLines->Rows[i]->Cells[1]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetX());
				GridLines->Rows[i]->Cells[2]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetY());
				GridLines->Rows[i]->Cells[3]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetX());
				GridLines->Rows[i]->Cells[4]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetY());
			}
		}

		System::Void ButtonCreateLine_Click(System::Object^  sender, System::EventArgs^  e) {
			std::string Name1 = msclr::interop::marshal_as<std::string>(TextBoxCreateLine1->Text);
			std::string Name2 = msclr::interop::marshal_as<std::string>(TextBoxCreateLine2->Text);
			int ind1 = FindNameInDots(Name1);
			int ind2 = FindNameInDots(Name2);
			if (ind1 == -1 || ind2 == -1) {
				MessageBox::Show("Такого имени точки не существует!");
				return;
			}
			std::string NameLine = Name1 + ' ' + Name2;
			Lines.push_back(new TLine(Dots[ind1], Dots[ind2]));
			DrawLines();
			PrintLinesDataGrid();
		}

		System::Void AddPlexButton_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!Lines.size()) return;
			setik.clear();
			
			/*String^ kek = msclr::interop::marshal_as<String^>(Lines[0]->GetName());
			MessageBox::Show(kek);*/

			flex = new Plex(Lines[0]);
			setik.insert(*((TPoint*)Lines[0]->GetLeft()));
			setik.insert(*((TPoint*)Lines[0]->GetRight()));
			std::queue<TLine*> q;
			for (int i = 1; i < Lines.size(); i++) {
				if (setik.find(*(TPoint*)(Lines[i]->GetLeft())) != setik.end() || 
					setik.find(*(TPoint*)(Lines[i]->GetRight())) != setik.end()) {
					flex->addLine(Lines[i]);
					setik.insert(*(TPoint*)(Lines[i]->GetLeft()));
					setik.insert(*(TPoint*)(Lines[i]->GetRight()));
				}
				else {
					q.push(Lines[i]);
				}
			}
			int cnt = 0;
			while (!q.empty()) {
				if (cnt == 1e5) break;
				cnt++;
				TLine* cur = q.front();
				q.pop();
				if (setik.find(*(TPoint*)(cur->GetLeft())) != setik.end() ||
					setik.find(*(TPoint*)(cur->GetRight())) != setik.end()) {
					flex->addLine(cur);
					setik.insert(*(TPoint*)(cur->GetLeft()));
					setik.insert(*(TPoint*)(cur->GetRight()));
				}
				else {
					q.push(cur);
				}
			}
			flex->saveFile();
			flex->saveGraph();
			flex->reColor(COLOR);
			PrintLinesDataGrid();
		}
		System::Void DrawPlexButton_Click(System::Object^  sender, System::EventArgs^  e) {
			ClearPictureBox();
			if (flex == nullptr || flex->Empty()) return;
			delete g;
			g = Graphics::FromImage(Image);
			picture->Image = Image;
			flex->reColor(COLOR);
			flex->Draw(g);
			picture->Refresh();
			picture->Invalidate();
		}
		System::Void DrawPictButton_Click(System::Object^  sender, System::EventArgs^  e) {
			ClearPictureBox();
			DrawDots();
			DrawLines();
		}

		System::Void ClearButton_Click(System::Object^  sender, System::EventArgs^  e) {
			ClearPictureBox();
			Dots.clear();
			Lines.clear();
			Colors.clear();
			delete flex;
			flex = new Plex();
			delete g;
			g = Graphics::FromImage(Image);
			picture->Image = Image;
			picture->Refresh();
			picture->Invalidate();
			DotName = -1;
			GridDots->Rows->Clear();
			GridLines->Rows->Clear();
		}
		System::Void ColorButton_Click(System::Object^  sender, System::EventArgs^  e) {
			if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				COLOR = colorDialog1->Color.ToArgb();
				MessageBox::Show(System::Convert::ToString(COLOR));
				for (auto i : Dots) {
					i->SetColor(COLOR);
				}
				for (auto i : Lines) {
					i->SetColor(COLOR);
				}
				DrawPlexButton_Click(sender, e);
				DrawPictButton_Click(sender, e);
			}
		}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ theDialog = gcnew OpenFileDialog();
		theDialog->Title = "Open Text File";
		theDialog->Filter = "TXT files|*.txt";

		if (theDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (!flex) flex = new Plex();
			std::string convertedStr = msclr::interop::marshal_as<std::string>(theDialog->FileName);
			flex->readFile(convertedStr);
			auto ans = flex->getPointsAndLines();
			Dots.clear();
			Lines.clear();
			Dots = ans.first;
			Lines = ans.second;
			if (Dots.size()) PrintDotsDataGrid();
			if (Lines.size()) PrintLinesDataGrid();
			DotName = Lines.size() - 1;
			flex->reColor(COLOR);
		}
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Text File|*.txt";
		saveFileDialog1->Title = "Save a Text File";
		saveFileDialog1->ShowDialog();

		if (saveFileDialog1->FileName != "")
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			// sw->WriteLine("This is some text that we want to save to a file.");
			sw->Close();

			if (flex)
				flex->saveFile_(msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName));
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flex == nullptr || flex->Empty()) return;

		std::string NamePointToMove = msclr::interop::marshal_as<std::string>(TextBoxNamePointToMove->Text);
		int dx = System::Convert::ToInt32(textBox2->Text);
		int dy = System::Convert::ToInt32(textBox1->Text);

		if (flex) {
			
			for (auto i : flex->getPointsAndLines().first) {
				i->MovePoint(dx, dy);
				int index = FindNameInDots(i->GetName());

				Dots[index]->MovePoint(dx, dy);
			}

			AddPlexButton_Click(sender, e);
		}
		if (Dots.size()) PrintDotsDataGrid();
		if (Lines.size()) PrintLinesDataGrid();

		ClearPictureBox();

		DrawLines();
		DrawDots();
	}
};
}
