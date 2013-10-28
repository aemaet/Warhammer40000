#pragma once
#include "w40kFunc.h"
#include "DistantClasses.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Warhammer40000 {


	/// <summary>
	/// Сводка для DistantCombat
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class DistantCombat : public System::Windows::Forms::Form
	{
	public:
		DistantCombat(void)
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
		~DistantCombat()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  PlayBattle;
	private: System::Windows::Forms::Button^  CloseWindow;
	private: System::Windows::Forms::TextBox^  SAttack;
	private: System::Windows::Forms::TextBox^  BSAttack;

















	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  LabelTProtection;

	private: System::Windows::Forms::TextBox^  TProtection;
	private: System::Windows::Forms::TextBox^  SaveThrowArmor;
	private: System::Windows::Forms::CheckBox^  SaveThrowArmorFlag;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  WeaponAP;
	private: System::Windows::Forms::CheckBox^  SaveThrowCoverFlag;


	private: System::Windows::Forms::TextBox^  SaveThrowCover;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  CountOfAttacks;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::CheckBox^  SaveThrowInvulnerableFlag;
	private: System::Windows::Forms::TextBox^  SaveThrowInvulnerable;



	private: System::Windows::Forms::Button^  VehicleUnderFireButton;
	private: System::Windows::Forms::CheckBox^  OpenVehicleFlag;
	private: System::Windows::Forms::Label^  LabelArmorSave;
	private: System::Windows::Forms::Label^  LabelInvulSave;
	private: System::Windows::Forms::Label^  LabelCoverSave;







	private: bool vehicleUnderFireFlag, f;
			 Int32 errCode;
			 Int32 hit_arr_size;
			 Random^ rnd;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DistantCombat::typeid));
			this->PlayBattle = (gcnew System::Windows::Forms::Button());
			this->CloseWindow = (gcnew System::Windows::Forms::Button());
			this->SAttack = (gcnew System::Windows::Forms::TextBox());
			this->BSAttack = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LabelTProtection = (gcnew System::Windows::Forms::Label());
			this->TProtection = (gcnew System::Windows::Forms::TextBox());
			this->SaveThrowArmor = (gcnew System::Windows::Forms::TextBox());
			this->SaveThrowArmorFlag = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->WeaponAP = (gcnew System::Windows::Forms::TextBox());
			this->SaveThrowCoverFlag = (gcnew System::Windows::Forms::CheckBox());
			this->SaveThrowCover = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CountOfAttacks = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SaveThrowInvulnerableFlag = (gcnew System::Windows::Forms::CheckBox());
			this->SaveThrowInvulnerable = (gcnew System::Windows::Forms::TextBox());
			this->VehicleUnderFireButton = (gcnew System::Windows::Forms::Button());
			this->OpenVehicleFlag = (gcnew System::Windows::Forms::CheckBox());
			this->LabelArmorSave = (gcnew System::Windows::Forms::Label());
			this->LabelInvulSave = (gcnew System::Windows::Forms::Label());
			this->LabelCoverSave = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// PlayBattle
			// 
			this->PlayBattle->BackColor = System::Drawing::Color::White;
			this->PlayBattle->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->PlayBattle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PlayBattle->Location = System::Drawing::Point(208, 156);
			this->PlayBattle->Name = L"PlayBattle";
			this->PlayBattle->Size = System::Drawing::Size(161, 60);
			this->PlayBattle->TabIndex = 2;
			this->PlayBattle->Text = L"Сыграть бой";
			this->PlayBattle->UseVisualStyleBackColor = false;
			this->PlayBattle->MouseLeave += gcnew System::EventHandler(this, &DistantCombat::PlayBattle_MouseLeave);
			this->PlayBattle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::PlayBattle_MouseMove);
			this->PlayBattle->Click += gcnew System::EventHandler(this, &DistantCombat::PlayBattle_Click);
			this->PlayBattle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::PlayBattle_MouseDown);
			this->PlayBattle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::PlayBattle_MouseUp);
			// 
			// CloseWindow
			// 
			this->CloseWindow->BackColor = System::Drawing::Color::White;
			this->CloseWindow->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->CloseWindow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CloseWindow->Location = System::Drawing::Point(208, 242);
			this->CloseWindow->Name = L"CloseWindow";
			this->CloseWindow->Size = System::Drawing::Size(161, 60);
			this->CloseWindow->TabIndex = 3;
			this->CloseWindow->Text = L"Закрыть";
			this->CloseWindow->UseVisualStyleBackColor = false;
			this->CloseWindow->MouseLeave += gcnew System::EventHandler(this, &DistantCombat::CloseWindow_MouseLeave);
			this->CloseWindow->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::CloseWindow_MouseMove);
			this->CloseWindow->Click += gcnew System::EventHandler(this, &DistantCombat::CloseWindow_Click);
			this->CloseWindow->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::CloseWindow_MouseDown);
			this->CloseWindow->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::CloseWindow_MouseUp);
			// 
			// SAttack
			// 
			this->SAttack->Location = System::Drawing::Point(36, 148);
			this->SAttack->Name = L"SAttack";
			this->SAttack->Size = System::Drawing::Size(58, 20);
			this->SAttack->TabIndex = 4;
			this->SAttack->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::SAttack_MouseClick);
			// 
			// BSAttack
			// 
			this->BSAttack->Location = System::Drawing::Point(36, 174);
			this->BSAttack->Name = L"BSAttack";
			this->BSAttack->Size = System::Drawing::Size(58, 20);
			this->BSAttack->TabIndex = 5;
			this->BSAttack->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::BSAttack_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"S";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DimGray;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(13, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"BS";
			// 
			// LabelTProtection
			// 
			this->LabelTProtection->AutoSize = true;
			this->LabelTProtection->BackColor = System::Drawing::Color::DimGray;
			this->LabelTProtection->ForeColor = System::Drawing::Color::White;
			this->LabelTProtection->Location = System::Drawing::Point(421, 265);
			this->LabelTProtection->Name = L"LabelTProtection";
			this->LabelTProtection->Size = System::Drawing::Size(14, 13);
			this->LabelTProtection->TabIndex = 13;
			this->LabelTProtection->Text = L"T";
			// 
			// TProtection
			// 
			this->TProtection->Location = System::Drawing::Point(441, 262);
			this->TProtection->Name = L"TProtection";
			this->TProtection->Size = System::Drawing::Size(63, 20);
			this->TProtection->TabIndex = 14;
			this->TProtection->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::TProtection_MouseClick);
			// 
			// SaveThrowArmor
			// 
			this->SaveThrowArmor->Location = System::Drawing::Point(479, 138);
			this->SaveThrowArmor->Name = L"SaveThrowArmor";
			this->SaveThrowArmor->Size = System::Drawing::Size(66, 20);
			this->SaveThrowArmor->TabIndex = 16;
			this->SaveThrowArmor->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::SaveThrowArmor_MouseClick);
			// 
			// SaveThrowArmorFlag
			// 
			this->SaveThrowArmorFlag->AutoSize = true;
			this->SaveThrowArmorFlag->BackColor = System::Drawing::Color::DimGray;
			this->SaveThrowArmorFlag->Checked = true;
			this->SaveThrowArmorFlag->CheckState = System::Windows::Forms::CheckState::Checked;
			this->SaveThrowArmorFlag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveThrowArmorFlag->ForeColor = System::Drawing::Color::White;
			this->SaveThrowArmorFlag->Location = System::Drawing::Point(421, 118);
			this->SaveThrowArmorFlag->Name = L"SaveThrowArmorFlag";
			this->SaveThrowArmorFlag->Size = System::Drawing::Size(134, 17);
			this->SaveThrowArmorFlag->TabIndex = 17;
			this->SaveThrowArmorFlag->Text = L"Спасбросок за броню";
			this->SaveThrowArmorFlag->UseVisualStyleBackColor = false;
			this->SaveThrowArmorFlag->CheckedChanged += gcnew System::EventHandler(this, &DistantCombat::SaveThrowArmorFlag_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DimGray;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"AP";
			// 
			// WeaponAP
			// 
			this->WeaponAP->Location = System::Drawing::Point(36, 200);
			this->WeaponAP->Name = L"WeaponAP";
			this->WeaponAP->Size = System::Drawing::Size(58, 20);
			this->WeaponAP->TabIndex = 18;
			this->WeaponAP->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::WeaponAP_MouseClick);
			// 
			// SaveThrowCoverFlag
			// 
			this->SaveThrowCoverFlag->AutoSize = true;
			this->SaveThrowCoverFlag->BackColor = System::Drawing::Color::DimGray;
			this->SaveThrowCoverFlag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveThrowCoverFlag->ForeColor = System::Drawing::Color::White;
			this->SaveThrowCoverFlag->Location = System::Drawing::Point(421, 214);
			this->SaveThrowCoverFlag->Name = L"SaveThrowCoverFlag";
			this->SaveThrowCoverFlag->Size = System::Drawing::Size(144, 17);
			this->SaveThrowCoverFlag->TabIndex = 21;
			this->SaveThrowCoverFlag->Text = L"Спасбросок за укрытие";
			this->SaveThrowCoverFlag->UseVisualStyleBackColor = false;
			this->SaveThrowCoverFlag->CheckedChanged += gcnew System::EventHandler(this, &DistantCombat::SaveThrowCoverFlag_CheckedChanged);
			// 
			// SaveThrowCover
			// 
			this->SaveThrowCover->Location = System::Drawing::Point(479, 236);
			this->SaveThrowCover->Name = L"SaveThrowCover";
			this->SaveThrowCover->Size = System::Drawing::Size(66, 20);
			this->SaveThrowCover->TabIndex = 20;
			this->SaveThrowCover->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::SaveThrowCover_MouseClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::DimGray;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(16, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"A";
			// 
			// CountOfAttacks
			// 
			this->CountOfAttacks->Location = System::Drawing::Point(36, 123);
			this->CountOfAttacks->Name = L"CountOfAttacks";
			this->CountOfAttacks->Size = System::Drawing::Size(58, 20);
			this->CountOfAttacks->TabIndex = 23;
			this->CountOfAttacks->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::CountOfAttacks_MouseClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(142, 113);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(421, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(102, 110);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// SaveThrowInvulnerableFlag
			// 
			this->SaveThrowInvulnerableFlag->AutoSize = true;
			this->SaveThrowInvulnerableFlag->BackColor = System::Drawing::Color::DimGray;
			this->SaveThrowInvulnerableFlag->Checked = true;
			this->SaveThrowInvulnerableFlag->CheckState = System::Windows::Forms::CheckState::Checked;
			this->SaveThrowInvulnerableFlag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveThrowInvulnerableFlag->ForeColor = System::Drawing::Color::White;
			this->SaveThrowInvulnerableFlag->Location = System::Drawing::Point(421, 168);
			this->SaveThrowInvulnerableFlag->Name = L"SaveThrowInvulnerableFlag";
			this->SaveThrowInvulnerableFlag->Size = System::Drawing::Size(170, 17);
			this->SaveThrowInvulnerableFlag->TabIndex = 26;
			this->SaveThrowInvulnerableFlag->Text = L"Непробиваемый спасбросок";
			this->SaveThrowInvulnerableFlag->UseVisualStyleBackColor = false;
			this->SaveThrowInvulnerableFlag->CheckedChanged += gcnew System::EventHandler(this, &DistantCombat::SaveThrowInvulnerableFlag_CheckedChanged);
			// 
			// SaveThrowInvulnerable
			// 
			this->SaveThrowInvulnerable->Location = System::Drawing::Point(479, 188);
			this->SaveThrowInvulnerable->Name = L"SaveThrowInvulnerable";
			this->SaveThrowInvulnerable->Size = System::Drawing::Size(66, 20);
			this->SaveThrowInvulnerable->TabIndex = 27;
			this->SaveThrowInvulnerable->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::SaveThrowInvulnerable_MouseClick);
			// 
			// VehicleUnderFireButton
			// 
			this->VehicleUnderFireButton->BackColor = System::Drawing::Color::White;
			this->VehicleUnderFireButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->VehicleUnderFireButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->VehicleUnderFireButton->Location = System::Drawing::Point(421, 312);
			this->VehicleUnderFireButton->Name = L"VehicleUnderFireButton";
			this->VehicleUnderFireButton->Size = System::Drawing::Size(157, 37);
			this->VehicleUnderFireButton->TabIndex = 28;
			this->VehicleUnderFireButton->Text = L"Нажмите, если защищается техника";
			this->VehicleUnderFireButton->UseVisualStyleBackColor = false;
			this->VehicleUnderFireButton->MouseLeave += gcnew System::EventHandler(this, &DistantCombat::VehicleUnderFireButton_MouseLeave);
			this->VehicleUnderFireButton->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::VehicleUnderFireButton_MouseMove);
			this->VehicleUnderFireButton->Click += gcnew System::EventHandler(this, &DistantCombat::VehicleUnderFireButton_Click);
			this->VehicleUnderFireButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::VehicleUnderFireButton_MouseDown);
			this->VehicleUnderFireButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &DistantCombat::VehicleUnderFireButton_MouseUp);
			// 
			// OpenVehicleFlag
			// 
			this->OpenVehicleFlag->AutoSize = true;
			this->OpenVehicleFlag->BackColor = System::Drawing::Color::DimGray;
			this->OpenVehicleFlag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenVehicleFlag->ForeColor = System::Drawing::Color::White;
			this->OpenVehicleFlag->Location = System::Drawing::Point(424, 289);
			this->OpenVehicleFlag->Name = L"OpenVehicleFlag";
			this->OpenVehicleFlag->Size = System::Drawing::Size(116, 17);
			this->OpenVehicleFlag->TabIndex = 29;
			this->OpenVehicleFlag->Text = L"Техника открытая";
			this->OpenVehicleFlag->UseVisualStyleBackColor = false;
			// 
			// LabelArmorSave
			// 
			this->LabelArmorSave->AutoSize = true;
			this->LabelArmorSave->BackColor = System::Drawing::Color::DimGray;
			this->LabelArmorSave->ForeColor = System::Drawing::Color::White;
			this->LabelArmorSave->Location = System::Drawing::Point(418, 141);
			this->LabelArmorSave->Name = L"LabelArmorSave";
			this->LabelArmorSave->Size = System::Drawing::Size(55, 13);
			this->LabelArmorSave->TabIndex = 30;
			this->LabelArmorSave->Text = L"Значение";
			// 
			// LabelInvulSave
			// 
			this->LabelInvulSave->AutoSize = true;
			this->LabelInvulSave->BackColor = System::Drawing::Color::DimGray;
			this->LabelInvulSave->ForeColor = System::Drawing::Color::White;
			this->LabelInvulSave->Location = System::Drawing::Point(418, 191);
			this->LabelInvulSave->Name = L"LabelInvulSave";
			this->LabelInvulSave->Size = System::Drawing::Size(55, 13);
			this->LabelInvulSave->TabIndex = 31;
			this->LabelInvulSave->Text = L"Значение";
			// 
			// LabelCoverSave
			// 
			this->LabelCoverSave->AutoSize = true;
			this->LabelCoverSave->BackColor = System::Drawing::Color::DimGray;
			this->LabelCoverSave->ForeColor = System::Drawing::Color::White;
			this->LabelCoverSave->Location = System::Drawing::Point(418, 239);
			this->LabelCoverSave->Name = L"LabelCoverSave";
			this->LabelCoverSave->Size = System::Drawing::Size(55, 13);
			this->LabelCoverSave->TabIndex = 32;
			this->LabelCoverSave->Text = L"Значение";
			// 
			// DistantCombat
			// 
			this->AcceptButton = this->PlayBattle;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(599, 406);
			this->ControlBox = false;
			this->Controls->Add(this->LabelCoverSave);
			this->Controls->Add(this->LabelInvulSave);
			this->Controls->Add(this->LabelArmorSave);
			this->Controls->Add(this->OpenVehicleFlag);
			this->Controls->Add(this->VehicleUnderFireButton);
			this->Controls->Add(this->SaveThrowInvulnerable);
			this->Controls->Add(this->SaveThrowInvulnerableFlag);
			this->Controls->Add(this->SaveThrowArmorFlag);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CountOfAttacks);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->SaveThrowCoverFlag);
			this->Controls->Add(this->SaveThrowCover);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->WeaponAP);
			this->Controls->Add(this->SaveThrowArmor);
			this->Controls->Add(this->TProtection);
			this->Controls->Add(this->LabelTProtection);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BSAttack);
			this->Controls->Add(this->SAttack);
			this->Controls->Add(this->CloseWindow);
			this->Controls->Add(this->PlayBattle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"DistantCombat";
			this->Text = L"DistantCombat";
			this->Load += gcnew System::EventHandler(this, &DistantCombat::DistantCombat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//З А Г Р У З К А   Ф О Р М Ы

private: System::Void DistantCombat_Load(System::Object^  sender, System::EventArgs^  e) {
			 vehicleUnderFireFlag = false; //предполагается, что по пехоте стреляют чаще, чем по технике
			 OpenVehicleFlag->Hide(); //из-за этого скрывается элемент, используемый только техникой
			 
			 LabelCoverSave->Hide(); //предполагается, что цель редко в укрытии
			 SaveThrowCover->Hide();

			 rnd = gcnew Random;//рандом
		 }

//К Н О П К А   "З А К Р Ы Т И Е   Ф О Р М Ы" (Д Е Й С Т В И Е)

private: System::Void CloseWindow_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

//К Н О П К А   "С Ы Г Р А Т Ь   Б О Й" (Д Е Й С Т В И Е)

private: System::Void PlayBattle_Click(System::Object^  sender, System::EventArgs^  e) {
			 DistantAttacking player1;
			 Conditions condition;
			 DistantAim player2;
			 Results result;
#pragma region Чтение характеристик атакующего
			 //атаки
			 f = Int32::TryParse(CountOfAttacks->Text, player1.A);
			 errCode = find_error(player1.A, 1, Int32::MaxValue, CountOfAttacks, f);
			 f = interpret_error(errCode, "A");
			 /*if (f) {
				 return;
			 }*/
			 RET_IF_F(f);
			 //сила
			 f = Int32::TryParse(SAttack->Text, player1.S);
			 errCode = find_error(player1.S, 1, 10, SAttack, f);
			 f = interpret_error(errCode, "S");
			 RET_IF_F(f);
			 //BS
			 f = Int32::TryParse(BSAttack->Text, player1.BS);
			 errCode = find_error(player1.BS, 1, 10, BSAttack, f);
			 f = interpret_error(errCode, "BS");
			 RET_IF_F(f);
			 //AP
			 f = Int32::TryParse(WeaponAP->Text, player1.AP);
			 errCode = find_error(player1.AP, 1, 6, WeaponAP, f);
			 f = interpret_error(errCode, "AP");
			 RET_IF_F(f);
#pragma endregion
			 if (!vehicleUnderFireFlag) {
#pragma region Чтение характеристик цели (если это пехота)
				 //спас за броню
				 if (SaveThrowArmorFlag->Checked) {
					 f = Int32::TryParse(SaveThrowArmor->Text, player2.ArmorSave);
					 errCode = find_error(player2.ArmorSave, 1, 6, SaveThrowArmor, f);
					 f = interpret_error(errCode, "Armor Save");
					 RET_IF_F(f);
				 }
				 //непробиваемый спас
				 if (SaveThrowInvulnerableFlag->Checked) {
					 f = Int32::TryParse(SaveThrowInvulnerable->Text, player2.InvulnerableSave);
					 errCode = find_error(player2.InvulnerableSave, 1, 6, SaveThrowInvulnerable, f);
					 f = interpret_error(errCode, "Invulnerable Save");
					 RET_IF_F(f);
				 }
				 //спас за укрытие
				 if (SaveThrowCoverFlag->Checked) {
					 f = Int32::TryParse(SaveThrowCover->Text, player2.CoverSave);
					 errCode = find_error(player2.CoverSave, 1, 6, SaveThrowCover, f);
					 f = interpret_error(errCode, "Cover Save");
					 RET_IF_F(f);
				 }
				 //T
				 f = Int32::TryParse(TProtection->Text, player2.T);
				 errCode = find_error(player2.T, 1, 10, TProtection, f);
				 f = interpret_error(errCode, "T");
				 RET_IF_F(f);
#pragma endregion
#pragma region Обработка первичных данных пехоты
				 //влияние AP на спас брони
				 if (player1.AP <= player2.ArmorSave) {
					 player2.ArmorSave = 7;
				 }
				 //вычисление наилучшего спасброска
				 if (player2.ArmorSave < player2.CoverSave) {
					 if (player2.ArmorSave < player2.InvulnerableSave) {
						 condition.SaveCondition = player2.ArmorSave;
					 } else {
						 condition.SaveCondition = player2.InvulnerableSave;
					 }
				 } else {
					 if (player2.CoverSave < player2.InvulnerableSave) {
						 condition.SaveCondition = player2.CoverSave;
					 } else {
						 condition.SaveCondition = player2.InvulnerableSave;
					 }
				 }
#pragma endregion
			 }
#pragma region Вычисление условий, первые проверки
			 //условие попадания(общее)
			 condition.HitCondition = table_bs(player1.BS,
				 condition.SecondHitCondition);
			 if (!vehicleUnderFireFlag) {
				 //условие раны если цель - пехота
				 condition.WoundCondition = table_ts(player2.T, player1.S);
			 }
			 //выход, если нельзя ранить ни при каких условиях
			 if (condition.WoundCondition < 0) {
				 MessageBox::Show("Цель этим оружием не ранить", "Оружие слишком слабое",
					 MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 return;
			 }
			 hit_arr_size = CalculateHits(result.HitCubesArr, vehicleUnderFireFlag, rnd, player1, condition, result.Hits);
			 result.Hits = 0;
			 if (result.Hits == 0) {
				 PrintingResult(player1, player2, condition, %result);
				 return;
			 }
#pragma endregion
		 }

//И З М Е Н Е Н И Я   Ф Л А Г О В - Г А Л О Ч Е К

private: System::Void SaveThrowArmorFlag_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (SaveThrowArmorFlag->Checked) {
				 SaveThrowArmor->Show();
				 LabelArmorSave->Show();
			 } else {
				 SaveThrowArmor->Hide();
				 LabelArmorSave->Hide();
			 }
		 }
private: System::Void SaveThrowCoverFlag_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (SaveThrowCoverFlag->Checked) {
				 SaveThrowCover->Show();
				 LabelCoverSave->Show();
			 } else {
				 SaveThrowCover->Hide();
				 LabelCoverSave->Hide();
			 }
		 }
private: System::Void SaveThrowInvulnerableFlag_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (SaveThrowInvulnerableFlag->Checked) {
				 SaveThrowInvulnerable->Show();
				 LabelInvulSave->Show();
			 } else {
				 SaveThrowInvulnerable->Hide();
				 LabelInvulSave->Hide();
			 }
		 }

//В Ы Д Е Л Е Н И Я   П Р И   Щ Е Л Ч К Е

private: System::Void BSAttack_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 BSAttack->SelectAll();
		 }
private: System::Void WeaponAP_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 WeaponAP->SelectAll();
		 }
private: System::Void SaveThrowArmor_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SaveThrowArmor->SelectAll();
		 }
private: System::Void SaveThrowCover_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SaveThrowCover->SelectAll();
		 }
private: System::Void TProtection_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 TProtection->SelectAll();
		 }
private: System::Void SAttack_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SAttack->SelectAll();
		 }
private: System::Void CountOfAttacks_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 CountOfAttacks->SelectAll();
		 }
private: System::Void SaveThrowInvulnerable_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 SaveThrowInvulnerable->SelectAll();
		 }

//К Н О П К А   С М Е Н Ы   Н А   Т Е Х Н И К У (Д Е Й С Т В И Е)

private: System::Void VehicleUnderFireButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (vehicleUnderFireFlag) {
				 //если переключаем на пехоту
				VehicleUnderFireButton->Text = "Нажмите, если\nцель - техника";
				vehicleUnderFireFlag = false;
				OpenVehicleFlag->Hide();
				LabelTProtection->Text = "T";
				LabelTProtection->Left += 20;
			 } else {
				 //если переключаем на технику
				vehicleUnderFireFlag = true;
				VehicleUnderFireButton->Text = "Нажмите, если\nцель - пехота";
				OpenVehicleFlag->Show();
				LabelTProtection->Text = "Броня";
				LabelTProtection->Left -= 20;
			 }
		 }

//К Н О П К А   "С Ы Г Р А Т Ь   Б О Й" (С Т И Л И)

private: System::Void PlayBattle_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(PlayBattle, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
private: System::Void PlayBattle_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(PlayBattle, Color::LightSeaGreen, Color::LightSeaGreen);
		 }
private: System::Void PlayBattle_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(PlayBattle, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
private: System::Void PlayBattle_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ButtonStyle(PlayBattle, Color::White, Color::White);
		 }

//К Н О П К А   "З А К Р Ы Т Ь   О К Н О" (С Т И Л И)

private: System::Void CloseWindow_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(CloseWindow, Color::LightSeaGreen, Color::LightSeaGreen);
		 }
private: System::Void CloseWindow_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(CloseWindow, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
private: System::Void CloseWindow_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ButtonStyle(CloseWindow, Color::White, Color::White);
		 }
private: System::Void CloseWindow_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(CloseWindow, Color::PaleTurquoise, Color::PaleTurquoise);
		 }

//К Н О П К А   "С М Е Н И Т Ь   Н А   Т Е Х Н И К У" (С Т И Л И)


private: System::Void VehicleUnderFireButton_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(VehicleUnderFireButton, Color::LightSeaGreen, Color::LightSeaGreen);
		 }
private: System::Void VehicleUnderFireButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ButtonStyle(VehicleUnderFireButton, Color::White, Color::White);
		 }
private: System::Void VehicleUnderFireButton_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(VehicleUnderFireButton, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
private: System::Void VehicleUnderFireButton_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(VehicleUnderFireButton, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
};
}
