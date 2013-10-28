#pragma once
#include "DistantCombat.h"
#include "CloseCombat.h"


namespace Warhammer40000 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  CloseCombatButton;
	private: System::Windows::Forms::Button^  DistantCombatButton;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  CloseMain;
	protected: 

	protected: 


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->CloseCombatButton = (gcnew System::Windows::Forms::Button());
			this->DistantCombatButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseMain = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// CloseCombatButton
			// 
			this->CloseCombatButton->Location = System::Drawing::Point(371, 218);
			this->CloseCombatButton->Name = L"CloseCombatButton";
			this->CloseCombatButton->Size = System::Drawing::Size(203, 63);
			this->CloseCombatButton->TabIndex = 0;
			this->CloseCombatButton->Text = L"Ближний бой";
			this->CloseCombatButton->UseVisualStyleBackColor = true;
			this->CloseCombatButton->Click += gcnew System::EventHandler(this, &Form1::CloseCombatButton_Click);
			// 
			// DistantCombatButton
			// 
			this->DistantCombatButton->Location = System::Drawing::Point(371, 313);
			this->DistantCombatButton->Name = L"DistantCombatButton";
			this->DistantCombatButton->Size = System::Drawing::Size(203, 63);
			this->DistantCombatButton->TabIndex = 1;
			this->DistantCombatButton->Text = L"Дальний бой";
			this->DistantCombatButton->UseVisualStyleBackColor = true;
			this->DistantCombatButton->Click += gcnew System::EventHandler(this, &Form1::DistantCombatButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(153, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(273, 71);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// CloseMain
			// 
			this->CloseMain->Location = System::Drawing::Point(63, 337);
			this->CloseMain->Name = L"CloseMain";
			this->CloseMain->Size = System::Drawing::Size(114, 39);
			this->CloseMain->TabIndex = 3;
			this->CloseMain->Text = L"Выйти";
			this->CloseMain->UseVisualStyleBackColor = true;
			this->CloseMain->Click += gcnew System::EventHandler(this, &Form1::CloseMain_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(602, 421);
			this->Controls->Add(this->CloseMain);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->DistantCombatButton);
			this->Controls->Add(this->CloseCombatButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"MainMenu";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void DistantCombatButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 DistantCombat^ distant = gcnew DistantCombat;
				 distant->Show();
			 }
	private: System::Void CloseMain_Click(System::Object^  sender, System::EventArgs^  e) {
				Application::Exit();
			 }
	private: System::Void CloseCombatButton_Click(System::Object^  sender, System::EventArgs^  e) {
				CloseCombat^ close_combat = gcnew CloseCombat;
				close_combat->Show();
			 }
};
}

