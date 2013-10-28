#pragma once
#include "w40kFunc.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Warhammer40000 {

	/// <summary>
	/// Сводка для CloseCombat
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class CloseCombat : public System::Windows::Forms::Form
	{
	public:
		CloseCombat(void)
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
		~CloseCombat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private: System::Windows::Forms::Button^  PlayBattleButton;
	private: System::Windows::Forms::Button^  CloseButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  WSAttack;
	private: System::Windows::Forms::TextBox^  WSProtection;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  SAttack;
	private: System::Windows::Forms::TextBox^  TProtection;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  APAttack;

	private: System::Windows::Forms::CheckBox^  SaveThrowArmorFlag;
	private: System::Windows::Forms::TextBox^  SaveThrowArmor;


	private: System::Windows::Forms::CheckBox^  SaveThrowInvulnerableFlag;
	private: System::Windows::Forms::TextBox^  SaveThrowInvulnerable;

	private: Int32 ws1, s1, ap1, ws2, t2, sv_armor, sv_invul, save_throw2;
			 Int32 wound_condition, hit_condition, a1, i, hits, wounds, survived;
			 bool f;
			 char *buf;
			 MessageBoxButtons button;
			 MessageBoxIcon icon_inf, icon_err, icon_warn;
			 array< Int32 >^ hit_cubes;
			 array< Int32 >^ wound_cubes;
			 array< Int32 >^ save_cubes;
			 String^ str_buf_hits;
			 String^ str_buf_wounds;
			 String^ str_buf_saves;
			 Random^ rnd;
	private: System::Windows::Forms::TextBox^  Attacks;
	private: System::Windows::Forms::Label^  label6;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CloseCombat::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->PlayBattleButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->WSAttack = (gcnew System::Windows::Forms::TextBox());
			this->WSProtection = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SAttack = (gcnew System::Windows::Forms::TextBox());
			this->TProtection = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->APAttack = (gcnew System::Windows::Forms::TextBox());
			this->SaveThrowArmorFlag = (gcnew System::Windows::Forms::CheckBox());
			this->SaveThrowArmor = (gcnew System::Windows::Forms::TextBox());
			this->SaveThrowInvulnerableFlag = (gcnew System::Windows::Forms::CheckBox());
			this->SaveThrowInvulnerable = (gcnew System::Windows::Forms::TextBox());
			this->Attacks = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(142, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(435, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(107, 114);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// PlayBattleButton
			// 
			this->PlayBattleButton->Location = System::Drawing::Point(231, 225);
			this->PlayBattleButton->Name = L"PlayBattleButton";
			this->PlayBattleButton->Size = System::Drawing::Size(157, 43);
			this->PlayBattleButton->TabIndex = 4;
			this->PlayBattleButton->Text = L"Сыграть бой";
			this->PlayBattleButton->UseVisualStyleBackColor = true;
			this->PlayBattleButton->Click += gcnew System::EventHandler(this, &CloseCombat::PlayBattleButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(231, 288);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(157, 43);
			this->CloseButton->TabIndex = 5;
			this->CloseButton->Text = L"Закрыть окно";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &CloseCombat::CloseButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"WS";
			// 
			// WSAttack
			// 
			this->WSAttack->Location = System::Drawing::Point(36, 200);
			this->WSAttack->Name = L"WSAttack";
			this->WSAttack->Size = System::Drawing::Size(60, 20);
			this->WSAttack->TabIndex = 7;
			this->WSAttack->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::WSAttack_MouseClick);
			// 
			// WSProtection
			// 
			this->WSProtection->Location = System::Drawing::Point(435, 152);
			this->WSProtection->Name = L"WSProtection";
			this->WSProtection->Size = System::Drawing::Size(60, 20);
			this->WSProtection->TabIndex = 9;
			this->WSProtection->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::WSProtection_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(432, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"WS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"S";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(432, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"T";
			// 
			// SAttack
			// 
			this->SAttack->Location = System::Drawing::Point(36, 239);
			this->SAttack->Name = L"SAttack";
			this->SAttack->Size = System::Drawing::Size(60, 20);
			this->SAttack->TabIndex = 12;
			this->SAttack->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::SAttack_MouseClick);
			// 
			// TProtection
			// 
			this->TProtection->Location = System::Drawing::Point(435, 191);
			this->TProtection->Name = L"TProtection";
			this->TProtection->Size = System::Drawing::Size(60, 20);
			this->TProtection->TabIndex = 13;
			this->TProtection->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::TProtection_MouseClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"AP";
			// 
			// APAttack
			// 
			this->APAttack->Location = System::Drawing::Point(36, 280);
			this->APAttack->Name = L"APAttack";
			this->APAttack->Size = System::Drawing::Size(60, 20);
			this->APAttack->TabIndex = 15;
			this->APAttack->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::APAttack_MouseClick);
			// 
			// SaveThrowArmorFlag
			// 
			this->SaveThrowArmorFlag->AutoSize = true;
			this->SaveThrowArmorFlag->Location = System::Drawing::Point(435, 217);
			this->SaveThrowArmorFlag->Name = L"SaveThrowArmorFlag";
			this->SaveThrowArmorFlag->Size = System::Drawing::Size(137, 17);
			this->SaveThrowArmorFlag->TabIndex = 16;
			this->SaveThrowArmorFlag->Text = L"Спасбросок за броню";
			this->SaveThrowArmorFlag->UseVisualStyleBackColor = true;
			this->SaveThrowArmorFlag->CheckedChanged += gcnew System::EventHandler(this, &CloseCombat::SaveThrowArmorFlag_CheckedChanged);
			// 
			// SaveThrowArmor
			// 
			this->SaveThrowArmor->Location = System::Drawing::Point(435, 240);
			this->SaveThrowArmor->Name = L"SaveThrowArmor";
			this->SaveThrowArmor->Size = System::Drawing::Size(60, 20);
			this->SaveThrowArmor->TabIndex = 17;
			this->SaveThrowArmor->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::SaveThrowArmor_MouseClick);
			// 
			// SaveThrowInvulnerableFlag
			// 
			this->SaveThrowInvulnerableFlag->AutoSize = true;
			this->SaveThrowInvulnerableFlag->Location = System::Drawing::Point(435, 266);
			this->SaveThrowInvulnerableFlag->Name = L"SaveThrowInvulnerableFlag";
			this->SaveThrowInvulnerableFlag->Size = System::Drawing::Size(113, 30);
			this->SaveThrowInvulnerableFlag->TabIndex = 18;
			this->SaveThrowInvulnerableFlag->Text = L"Непробиваемый \r\nспасбросок";
			this->SaveThrowInvulnerableFlag->UseVisualStyleBackColor = true;
			this->SaveThrowInvulnerableFlag->CheckedChanged += gcnew System::EventHandler(this, &CloseCombat::SaveThrowInvulnerableFlag_CheckedChanged);
			// 
			// SaveThrowInvulnerable
			// 
			this->SaveThrowInvulnerable->Location = System::Drawing::Point(435, 300);
			this->SaveThrowInvulnerable->Name = L"SaveThrowInvulnerable";
			this->SaveThrowInvulnerable->Size = System::Drawing::Size(60, 20);
			this->SaveThrowInvulnerable->TabIndex = 19;
			this->SaveThrowInvulnerable->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::SaveThrowInvulnerable_MouseClick);
			// 
			// Attacks
			// 
			this->Attacks->Location = System::Drawing::Point(36, 152);
			this->Attacks->Name = L"Attacks";
			this->Attacks->Size = System::Drawing::Size(60, 20);
			this->Attacks->TabIndex = 21;
			this->Attacks->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CloseCombat::Attacks_MouseClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"A";
			// 
			// CloseCombat
			// 
			this->AcceptButton = this->PlayBattleButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 406);
			this->Controls->Add(this->Attacks);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->SaveThrowInvulnerable);
			this->Controls->Add(this->SaveThrowInvulnerableFlag);
			this->Controls->Add(this->SaveThrowArmor);
			this->Controls->Add(this->SaveThrowArmorFlag);
			this->Controls->Add(this->APAttack);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TProtection);
			this->Controls->Add(this->SAttack);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->WSProtection);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->WSAttack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->PlayBattleButton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"CloseCombat";
			this->Text = L"CloseCombat";
			this->Load += gcnew System::EventHandler(this, &CloseCombat::CloseCombat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CloseCombat_Load(System::Object^  sender, System::EventArgs^  e) {
			 SaveThrowArmorFlag->Checked = true;
			 SaveThrowInvulnerableFlag->Checked = false;
			 SaveThrowArmorFlag->Text = "Спасбросок за броню";
			 SaveThrowInvulnerable->Hide();
			 SaveThrowInvulnerableFlag->Text = "Непробиваемого\nспасброска нет";
			 sv_armor = 7;
			 sv_invul = 7;
			 save_throw2 = 7;
			 button = MessageBoxButtons::OK;
			 icon_inf = MessageBoxIcon::Information;
			 icon_err = MessageBoxIcon::Error;
			 icon_warn = MessageBoxIcon::Warning;
			 wound_condition = 7;
			 hit_condition = 7;
			 hits = 0;
			 wounds = 0;
			 survived = 0;
			 str_buf_saves = nullptr;
			 save_cubes = nullptr;
			 rnd = gcnew Random;
			 f = true;
}
private: System::Void PlayBattleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //инициализация всех переменных
			 f = Int32::TryParse(Attacks->Text, a1);
			 f &= print_error("Ошибка чтения A", "A", button, icon_err, f, Attacks, a1, 1, Int32::MaxValue);
			 f &= Int32::TryParse(WSAttack->Text, ws1);
			 f &= print_error("Ошибка чтения WS атаки", "WS", button, icon_err, f, WSAttack, ws1, 1, 10);
			 f &= Int32::TryParse(SAttack->Text, s1);
			 f &= print_error("Ошибка чтения S", "S", button, icon_err, f, SAttack, s1, 1, 10);
			 f &= Int32::TryParse(APAttack->Text, ap1);
			 f &= print_error("Ошибка чтения AP", "AP", button, icon_err, f, APAttack, ap1, 1, 6);
			 f &= Int32::TryParse(WSProtection->Text, ws2);
			 f &= print_error("Ощибка чтения WS защиты", "WS", button, icon_err, f, WSProtection, ws2, 1, 10);
			 f &= Int32::TryParse(TProtection->Text, t2);
			 f &= print_error("Ошибка чтения T", "T", button, icon_err, f, TProtection, t2, 1, 10);
			 if (SaveThrowArmorFlag->Checked) {
				 if (SaveThrowArmor->Text->Trim() == "") {
					 MessageBox::Show("Поле пустое - введите значение", "Спасбросок брони", button, icon_err);
					 return;
				 }
				 f &= Int32::TryParse(SaveThrowArmor->Text, sv_armor);
				 f &= print_error("Ошибка чтения спасброска брони", "Спасбросок брони", button,
					 icon_err, f, SaveThrowArmor, sv_armor, 1, 6);
			 }
			 if (SaveThrowInvulnerableFlag->Checked) {
				 if (SaveThrowInvulnerable->Text->Trim() == "") {
					 MessageBox::Show("Поле пустое - введите значение", "Спасбросок непробиваемый", button, icon_err);
					 return;
				 }
				 f &= Int32::TryParse(SaveThrowInvulnerable->Text, sv_invul);
				 f &= print_error("Ошибка чтения непробиваемого спасброска", "Непробиваемый спасбросок", button,
					 icon_err, f, SaveThrowInvulnerable, sv_invul, 1, 6);
			 }
			 if (!f) {
				 return;
			 }
			 //вычисление табличных переменных
			 if (ap1 <= sv_armor) sv_armor = 7;
			 save_throw2 = (sv_armor > sv_invul) ? sv_invul : sv_armor;
			 hit_condition = table_ws(ws1, ws2);
			 wound_condition = table_ts(t2, s1);
			 MessageBox::Show(String::Format("Атак = {0}\n" +
				 "WS attack = {1}\n" +
				 "S = {2}\n" +
				 "AP = {3}\n" +
				 "WS protect = {4}\n" +
				 "T = {5}\n" +
				 "Если спасбросок = 7, то его нет:\n" +
				 "Save Invulnerable = {6}+\n" +
				 "Save Armor = {7}+\n" +
				 "С учетом AP, наилучшим выбран спасбросок = {8}+\n" +
				 "Попадание на {9}+\n" +
				 "Рана на {10}+\n", a1, ws1, s1, ap1, ws2, t2, sv_invul, sv_armor, save_throw2,
				 hit_condition, wound_condition), "Проверка", button, icon_inf);
			 
//П О П А Д А Н И Е

			 //выделение памяти
			 hit_cubes = gcnew array< Int32>(a1);
			 //бросание кубов
			 for (i = 0; i < a1; i++) {
				 hit_cubes[i] = rnd->Next(1, 6);
				 if (hit_cubes[i] >= hit_condition) hits++;
			 }
			 //преобразование кубов на попадание в строку
			 buf = reduce_arrs(hit_cubes, buf, a1);
			 str_buf_hits = gcnew String(buf);
			 //отладочная информация кубов на попадание
			 MessageBox::Show(String::Format("Кубы на попадание: " + str_buf_hits +"\n" +
				 "Условие попадания: {0}\n" +
				 "Попало в цель: {1} кубов", hit_condition, hits), "Отладочный вывод: попадания", button, icon_inf);
			 //освобождение памяти
			 delete [] buf;
			 delete [] hit_cubes;
			 if (!hits) {
				 //вывод итога, если нет попаданий
				 MessageBox::Show(String::Format("Нет попаданий по цели.\n" +
					 "Кубы на попадание: " + str_buf_hits + "\n" +
					 "Условие попадания: {0}",
					 hit_condition), "Итог", button, icon_warn);
				 delete [] str_buf_hits;
				 return;
			 }

//Р А Н Е Н И Е

			 //выделение памяти под кубы ран
			 wound_cubes = gcnew array< Int32 >(hits);
			 //бросание кубов на раны
			 for (i = 0; i < hits; i++) {
				 wound_cubes[i] = rnd->Next(1, 6);
				 if (wound_cubes[i] >= wound_condition) wounds++;
			 }
			 //преобразование кубов на раны в строку
			 buf = reduce_arrs(wound_cubes, buf, hits);
			 str_buf_wounds = gcnew String(buf);
			 //отладочная информация о кубах на раны
			 MessageBox::Show(String::Format("Кубы на раны: " + str_buf_wounds + "\n" +
				 "Условие раны: {0}\n" +
				 "Ран: {1}", wound_condition, wounds), "Отладочный вывод: раны", button, icon_inf);
			 //освобждение памяти
			 delete [] buf;
			 delete [] wound_cubes;
			 if (!wounds) {
				 //вывод итога, если были попадания, но нет ран
				 MessageBox::Show(String::Format("Цель не ранена.\n" +
					 "Кубы на попадания: " + str_buf_hits + "\n" +
					 "Попаданий: {0}, при условии {1}+\n" +
					 "Кубы на раны :" + str_buf_wounds + "\n" +
					 "Ран: {2}, при условии {3}+\n", hits, hit_condition, wounds,
					 wound_condition), "Итог", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 delete [] str_buf_wounds;
				 delete [] str_buf_hits;
				 return;
			 }

//С П А С Б Р О С К И

			 if (save_throw2 <= 6) {
				//выделение памяти под кубы спасбросков
				save_cubes = gcnew array< Int32 >(wounds);
				//бросание кубов на спасение
				for (i = 0; i < wounds; i++) {
					save_cubes[i] = rnd->Next(1, 6);
					if (save_cubes[i] >= save_throw2) survived++;
				}
				//преобразование кубов на спасы в строку
				buf = reduce_arrs(save_cubes, buf, wounds);
				str_buf_saves = gcnew String(buf);
				//отладочная информация о кубах на спасы
				MessageBox::Show(String::Format("Кубы на спасы: " + str_buf_saves + "\n" +
					"Условие спасения: {0}\n" +
					"Спаслось: {1}", save_throw2, survived), "Отладочный вывод: спасброски", MessageBoxButtons::OK,
					MessageBoxIcon::Information);
				//освобождение памяти
				delete [] buf;
				delete [] save_cubes;
				if (!survived) {
					//вывод итога, если были попадания, раны и не сработал ни один спасбросок
					MessageBox::Show(String::Format("Ни один спасбросок не помог\n" +
						"Кубы на раны: " + str_buf_wounds + "\n" +
						"Ран: {0}, при условии {1}+\n" +
						"Кубы на спасброски: " + str_buf_saves + "\n" +
						"Условие срабатывания спасброска: {2}+\n" +
						"Кубы на попадания: " + str_buf_hits + "\n" +
						"Попаданий: {3}, при условии {4}+", wounds, wound_condition, save_throw2,
						hits, hit_condition), "Итог", MessageBoxButtons::OK, MessageBoxIcon::Information);
					delete [] str_buf_hits;
					delete [] str_buf_saves;
					delete [] str_buf_wounds;
					return;
				} else {
					//вывод итога, если были попадания, раны и сработавшие спасброски
					MessageBox::Show(String::Format("Кубы на спасброски: " + str_buf_saves + "\n" +
						"Спаслось: {0}, при условии {1}+\n" +
						"Кубы на раны: " + str_buf_wounds + "\n" +
						"Ран, пробивших спасбросок: {2}\n" +
						"Ран всего: {3}, при условии {4}+\n" +
						"Кубы на попадания: " + str_buf_hits + "\n" +
						"Попаданий: {5}, при условии {6}", survived, save_throw2, wounds - survived,
						wounds,	wound_condition, hits, hit_condition),
						"Итог", MessageBoxButtons::OK, MessageBoxIcon::Information);
					delete [] str_buf_hits;
					delete [] str_buf_saves;
					delete [] str_buf_wounds;
					return;
				}
			 } else {
				 MessageBox::Show("Спасбросков нет или\nоружие  бронебойное", "Отладочный вывод: спасброски", MessageBoxButtons::OK,
					 MessageBoxIcon::Information);
			 }
			 //вывод итога, если спасбросков нет, но были попадания и раны
			 MessageBox::Show(String::Format("Кубы на раны: " + str_buf_wounds + "\n" +
				 "Ран: {0}, при условии {1}+\n" +
				 "Кубы на попадания: " + str_buf_hits + "\n" +
				 "Попаданий: {2}, при условии {3}+\n", wounds, wound_condition, hits, hit_condition),
				 "Итог", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 delete [] str_buf_hits;
			 delete [] str_buf_wounds;
		 }
private: System::Void WSAttack_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 WSAttack->SelectAll();
		 }
private: System::Void SAttack_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SAttack->SelectAll();
		 }
private: System::Void APAttack_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 APAttack->SelectAll();
		 }
private: System::Void WSProtection_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 WSProtection->SelectAll();
		 }
private: System::Void TProtection_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 TProtection->SelectAll();
		 }
private: System::Void SaveThrowArmor_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SaveThrowArmor->SelectAll();
		 }
private: System::Void SaveThrowInvulnerable_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SaveThrowInvulnerable->SelectAll();
		 }
private: System::Void Attacks_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 Attacks->SelectAll();
		 }
private: System::Void SaveThrowArmorFlag_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (SaveThrowArmorFlag->Checked) {
				 SaveThrowArmor->Show();
				 SaveThrowArmorFlag->Text = "Спасбросок за броню";
			 } else {
				 SaveThrowArmor->Hide();
				 SaveThrowArmorFlag->Text = "Спасброска за броню нет";
			 }
		 }
private: System::Void SaveThrowInvulnerableFlag_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (SaveThrowInvulnerableFlag->Checked) {
				 SaveThrowInvulnerable->Show();
				 SaveThrowInvulnerableFlag->Text = "Непробиваемый\nспасбросок";
			 } else {
				 SaveThrowInvulnerable->Hide();
				 SaveThrowInvulnerableFlag->Text = "Непробиваемого\nспасброска нет";
			 }
		 }
private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
