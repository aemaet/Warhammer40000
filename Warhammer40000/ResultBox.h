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
	/// Сводка для ResultBox
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class ResultBox : public System::Windows::Forms::Form
	{
	public:
		ResultBox(void)
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
		~ResultBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  CloseButton;
	public: System::Windows::Forms::PictureBox^  Picture;
	private: 

	public: System::Windows::Forms::Label^  LabelWoundsInfo;

	public: System::Windows::Forms::Label^  LabelWounds;

	public: System::Windows::Forms::Label^  LabelHitsInfo;
	public: System::Windows::Forms::Label^  LabelHits;
	public: System::Windows::Forms::Label^  LabelHitConditionInfo;
	public: System::Windows::Forms::Label^  LabelHitCondition;


	public: System::Windows::Forms::Label^  LabelHitCubesInfo;
	public: System::Windows::Forms::Label^  LabelHitCubes;
	public: System::Windows::Forms::Label^  LabelWoundConditionInfo;
	public: System::Windows::Forms::Label^  LabelWoundCondition;
	public: System::Windows::Forms::Label^  LabelWoundCubesInfo;
	public: System::Windows::Forms::Label^  LabelWoundCubes;
	public: System::Windows::Forms::Label^  LabelSaveConditionInfo;
	public: System::Windows::Forms::Label^  LabelSaveCondition;
	public: System::Windows::Forms::Label^  LabelSaveCubesInfo;
	public: System::Windows::Forms::Label^  LabelSaveCubes;
	public: System::Windows::Forms::Label^  LabelPotentialWoundsInfo;
	public: System::Windows::Forms::Label^  LabelPotentialWounds;


	public: System::Windows::Forms::Label^  LabelSurvivedInfo;
	public: System::Windows::Forms::Label^  LabelSurvived;
	public: System::Windows::Forms::GroupBox^  GroupHits;
	public: System::Windows::Forms::GroupBox^  GroupWounds;
	public: System::Windows::Forms::GroupBox^  GroupSaves;

	public: 

	public: 











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultBox::typeid));
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->Picture = (gcnew System::Windows::Forms::PictureBox());
			this->LabelWoundsInfo = (gcnew System::Windows::Forms::Label());
			this->LabelWounds = (gcnew System::Windows::Forms::Label());
			this->LabelHitsInfo = (gcnew System::Windows::Forms::Label());
			this->LabelHits = (gcnew System::Windows::Forms::Label());
			this->LabelHitConditionInfo = (gcnew System::Windows::Forms::Label());
			this->LabelHitCondition = (gcnew System::Windows::Forms::Label());
			this->LabelHitCubesInfo = (gcnew System::Windows::Forms::Label());
			this->LabelHitCubes = (gcnew System::Windows::Forms::Label());
			this->LabelWoundConditionInfo = (gcnew System::Windows::Forms::Label());
			this->LabelWoundCondition = (gcnew System::Windows::Forms::Label());
			this->LabelWoundCubesInfo = (gcnew System::Windows::Forms::Label());
			this->LabelWoundCubes = (gcnew System::Windows::Forms::Label());
			this->LabelSaveConditionInfo = (gcnew System::Windows::Forms::Label());
			this->LabelSaveCondition = (gcnew System::Windows::Forms::Label());
			this->LabelSaveCubesInfo = (gcnew System::Windows::Forms::Label());
			this->LabelSaveCubes = (gcnew System::Windows::Forms::Label());
			this->LabelPotentialWoundsInfo = (gcnew System::Windows::Forms::Label());
			this->LabelPotentialWounds = (gcnew System::Windows::Forms::Label());
			this->LabelSurvivedInfo = (gcnew System::Windows::Forms::Label());
			this->LabelSurvived = (gcnew System::Windows::Forms::Label());
			this->GroupHits = (gcnew System::Windows::Forms::GroupBox());
			this->GroupWounds = (gcnew System::Windows::Forms::GroupBox());
			this->GroupSaves = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Picture))->BeginInit();
			this->GroupHits->SuspendLayout();
			this->GroupWounds->SuspendLayout();
			this->GroupSaves->SuspendLayout();
			this->SuspendLayout();
			// 
			// CloseButton
			// 
			this->CloseButton->BackColor = System::Drawing::Color::White;
			this->CloseButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->CloseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CloseButton->Location = System::Drawing::Point(133, 606);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(155, 45);
			this->CloseButton->TabIndex = 0;
			this->CloseButton->Text = L"Закрыть";
			this->CloseButton->UseVisualStyleBackColor = false;
			this->CloseButton->MouseLeave += gcnew System::EventHandler(this, &ResultBox::CloseButton_MouseLeave);
			this->CloseButton->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ResultBox::CloseButton_MouseMove);
			this->CloseButton->Click += gcnew System::EventHandler(this, &ResultBox::CloseButton_Click);
			this->CloseButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ResultBox::CloseButton_MouseDown);
			this->CloseButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ResultBox::CloseButton_MouseUp);
			// 
			// Picture
			// 
			this->Picture->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Picture.Image")));
			this->Picture->Location = System::Drawing::Point(1, 0);
			this->Picture->Name = L"Picture";
			this->Picture->Size = System::Drawing::Size(455, 199);
			this->Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Picture->TabIndex = 1;
			this->Picture->TabStop = false;
			// 
			// LabelWoundsInfo
			// 
			this->LabelWoundsInfo->AutoSize = true;
			this->LabelWoundsInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelWoundsInfo->Location = System::Drawing::Point(12, 215);
			this->LabelWoundsInfo->Name = L"LabelWoundsInfo";
			this->LabelWoundsInfo->Size = System::Drawing::Size(65, 25);
			this->LabelWoundsInfo->TabIndex = 2;
			this->LabelWoundsInfo->Text = L"Раны:";
			// 
			// LabelWounds
			// 
			this->LabelWounds->AutoSize = true;
			this->LabelWounds->BackColor = System::Drawing::Color::DimGray;
			this->LabelWounds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelWounds->ForeColor = System::Drawing::Color::Red;
			this->LabelWounds->Location = System::Drawing::Point(83, 215);
			this->LabelWounds->Name = L"LabelWounds";
			this->LabelWounds->Size = System::Drawing::Size(24, 25);
			this->LabelWounds->TabIndex = 3;
			this->LabelWounds->Text = L"1";
			// 
			// LabelHitsInfo
			// 
			this->LabelHitsInfo->AutoSize = true;
			this->LabelHitsInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelHitsInfo->Location = System::Drawing::Point(128, 215);
			this->LabelHitsInfo->Name = L"LabelHitsInfo";
			this->LabelHitsInfo->Size = System::Drawing::Size(119, 25);
			this->LabelHitsInfo->TabIndex = 4;
			this->LabelHitsInfo->Text = L"Попадания:";
			// 
			// LabelHits
			// 
			this->LabelHits->AutoSize = true;
			this->LabelHits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelHits->ForeColor = System::Drawing::Color::White;
			this->LabelHits->Location = System::Drawing::Point(253, 215);
			this->LabelHits->Name = L"LabelHits";
			this->LabelHits->Size = System::Drawing::Size(23, 25);
			this->LabelHits->TabIndex = 5;
			this->LabelHits->Text = L"6";
			// 
			// LabelHitConditionInfo
			// 
			this->LabelHitConditionInfo->AutoSize = true;
			this->LabelHitConditionInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelHitConditionInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelHitConditionInfo->Location = System::Drawing::Point(6, 18);
			this->LabelHitConditionInfo->Name = L"LabelHitConditionInfo";
			this->LabelHitConditionInfo->Size = System::Drawing::Size(164, 20);
			this->LabelHitConditionInfo->TabIndex = 6;
			this->LabelHitConditionInfo->Text = L"Условие попадания:";
			// 
			// LabelHitCondition
			// 
			this->LabelHitCondition->AutoSize = true;
			this->LabelHitCondition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelHitCondition->ForeColor = System::Drawing::Color::White;
			this->LabelHitCondition->Location = System::Drawing::Point(172, 18);
			this->LabelHitCondition->Name = L"LabelHitCondition";
			this->LabelHitCondition->Size = System::Drawing::Size(27, 20);
			this->LabelHitCondition->TabIndex = 7;
			this->LabelHitCondition->Text = L"4+";
			// 
			// LabelHitCubesInfo
			// 
			this->LabelHitCubesInfo->AutoSize = true;
			this->LabelHitCubesInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelHitCubesInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelHitCubesInfo->Location = System::Drawing::Point(7, 38);
			this->LabelHitCubesInfo->Name = L"LabelHitCubesInfo";
			this->LabelHitCubesInfo->Size = System::Drawing::Size(159, 20);
			this->LabelHitCubesInfo->TabIndex = 8;
			this->LabelHitCubesInfo->Text = L"Кубы на попадание:";
			// 
			// LabelHitCubes
			// 
			this->LabelHitCubes->AutoSize = true;
			this->LabelHitCubes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelHitCubes->ForeColor = System::Drawing::Color::White;
			this->LabelHitCubes->Location = System::Drawing::Point(6, 58);
			this->LabelHitCubes->Name = L"LabelHitCubes";
			this->LabelHitCubes->Size = System::Drawing::Size(122, 20);
			this->LabelHitCubes->TabIndex = 9;
			this->LabelHitCubes->Text = L"4 3 2 4 5 6 1 2 4";
			// 
			// LabelWoundConditionInfo
			// 
			this->LabelWoundConditionInfo->AutoSize = true;
			this->LabelWoundConditionInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelWoundConditionInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelWoundConditionInfo->Location = System::Drawing::Point(6, 77);
			this->LabelWoundConditionInfo->Name = L"LabelWoundConditionInfo";
			this->LabelWoundConditionInfo->Size = System::Drawing::Size(119, 20);
			this->LabelWoundConditionInfo->TabIndex = 10;
			this->LabelWoundConditionInfo->Text = L"Условие раны:";
			// 
			// LabelWoundCondition
			// 
			this->LabelWoundCondition->AutoSize = true;
			this->LabelWoundCondition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelWoundCondition->ForeColor = System::Drawing::Color::White;
			this->LabelWoundCondition->Location = System::Drawing::Point(131, 76);
			this->LabelWoundCondition->Name = L"LabelWoundCondition";
			this->LabelWoundCondition->Size = System::Drawing::Size(27, 20);
			this->LabelWoundCondition->TabIndex = 11;
			this->LabelWoundCondition->Text = L"4+";
			// 
			// LabelWoundCubesInfo
			// 
			this->LabelWoundCubesInfo->AutoSize = true;
			this->LabelWoundCubesInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelWoundCubesInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelWoundCubesInfo->Location = System::Drawing::Point(6, 17);
			this->LabelWoundCubesInfo->Name = L"LabelWoundCubesInfo";
			this->LabelWoundCubesInfo->Size = System::Drawing::Size(114, 20);
			this->LabelWoundCubesInfo->TabIndex = 12;
			this->LabelWoundCubesInfo->Text = L"Кубы на раны:";
			// 
			// LabelWoundCubes
			// 
			this->LabelWoundCubes->AutoSize = true;
			this->LabelWoundCubes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelWoundCubes->ForeColor = System::Drawing::Color::White;
			this->LabelWoundCubes->Location = System::Drawing::Point(6, 37);
			this->LabelWoundCubes->Name = L"LabelWoundCubes";
			this->LabelWoundCubes->Size = System::Drawing::Size(70, 20);
			this->LabelWoundCubes->TabIndex = 13;
			this->LabelWoundCubes->Text = L"3 4 2 1 5";
			// 
			// LabelSaveConditionInfo
			// 
			this->LabelSaveConditionInfo->AutoSize = true;
			this->LabelSaveConditionInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelSaveConditionInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelSaveConditionInfo->Location = System::Drawing::Point(6, 22);
			this->LabelSaveConditionInfo->Name = L"LabelSaveConditionInfo";
			this->LabelSaveConditionInfo->Size = System::Drawing::Size(246, 20);
			this->LabelSaveConditionInfo->TabIndex = 14;
			this->LabelSaveConditionInfo->Text = L"Выбранное словие спасброска:";
			// 
			// LabelSaveCondition
			// 
			this->LabelSaveCondition->AutoSize = true;
			this->LabelSaveCondition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelSaveCondition->ForeColor = System::Drawing::Color::White;
			this->LabelSaveCondition->Location = System::Drawing::Point(258, 22);
			this->LabelSaveCondition->Name = L"LabelSaveCondition";
			this->LabelSaveCondition->Size = System::Drawing::Size(27, 20);
			this->LabelSaveCondition->TabIndex = 15;
			this->LabelSaveCondition->Text = L"5+";
			// 
			// LabelSaveCubesInfo
			// 
			this->LabelSaveCubesInfo->AutoSize = true;
			this->LabelSaveCubesInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelSaveCubesInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelSaveCubesInfo->Location = System::Drawing::Point(6, 42);
			this->LabelSaveCubesInfo->Name = L"LabelSaveCubesInfo";
			this->LabelSaveCubesInfo->Size = System::Drawing::Size(149, 20);
			this->LabelSaveCubesInfo->TabIndex = 16;
			this->LabelSaveCubesInfo->Text = L"Кубы спасбросков:";
			// 
			// LabelSaveCubes
			// 
			this->LabelSaveCubes->AutoSize = true;
			this->LabelSaveCubes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelSaveCubes->ForeColor = System::Drawing::Color::White;
			this->LabelSaveCubes->Location = System::Drawing::Point(6, 62);
			this->LabelSaveCubes->Name = L"LabelSaveCubes";
			this->LabelSaveCubes->Size = System::Drawing::Size(31, 20);
			this->LabelSaveCubes->TabIndex = 17;
			this->LabelSaveCubes->Text = L"5 3";
			// 
			// LabelPotentialWoundsInfo
			// 
			this->LabelPotentialWoundsInfo->AutoSize = true;
			this->LabelPotentialWoundsInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelPotentialWoundsInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelPotentialWoundsInfo->Location = System::Drawing::Point(6, 57);
			this->LabelPotentialWoundsInfo->Name = L"LabelPotentialWoundsInfo";
			this->LabelPotentialWoundsInfo->Size = System::Drawing::Size(165, 20);
			this->LabelPotentialWoundsInfo->TabIndex = 18;
			this->LabelPotentialWoundsInfo->Text = L"Потенциальных ран:";
			// 
			// LabelPotentialWounds
			// 
			this->LabelPotentialWounds->AutoSize = true;
			this->LabelPotentialWounds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LabelPotentialWounds->ForeColor = System::Drawing::Color::White;
			this->LabelPotentialWounds->Location = System::Drawing::Point(175, 53);
			this->LabelPotentialWounds->Name = L"LabelPotentialWounds";
			this->LabelPotentialWounds->Size = System::Drawing::Size(18, 20);
			this->LabelPotentialWounds->TabIndex = 19;
			this->LabelPotentialWounds->Text = L"2";
			// 
			// LabelSurvivedInfo
			// 
			this->LabelSurvivedInfo->AutoSize = true;
			this->LabelSurvivedInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelSurvivedInfo->ForeColor = System::Drawing::Color::Black;
			this->LabelSurvivedInfo->Location = System::Drawing::Point(5, 82);
			this->LabelSurvivedInfo->Name = L"LabelSurvivedInfo";
			this->LabelSurvivedInfo->Size = System::Drawing::Size(86, 20);
			this->LabelSurvivedInfo->TabIndex = 20;
			this->LabelSurvivedInfo->Text = L"Спаслось:";
			// 
			// LabelSurvived
			// 
			this->LabelSurvived->AutoSize = true;
			this->LabelSurvived->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LabelSurvived->ForeColor = System::Drawing::Color::White;
			this->LabelSurvived->Location = System::Drawing::Point(97, 82);
			this->LabelSurvived->Name = L"LabelSurvived";
			this->LabelSurvived->Size = System::Drawing::Size(18, 20);
			this->LabelSurvived->TabIndex = 21;
			this->LabelSurvived->Text = L"1";
			// 
			// GroupHits
			// 
			this->GroupHits->AutoSize = true;
			this->GroupHits->BackColor = System::Drawing::Color::Gray;
			this->GroupHits->Controls->Add(this->LabelHitCubesInfo);
			this->GroupHits->Controls->Add(this->LabelHitConditionInfo);
			this->GroupHits->Controls->Add(this->LabelHitCondition);
			this->GroupHits->Controls->Add(this->LabelHitCubes);
			this->GroupHits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->GroupHits->ForeColor = System::Drawing::Color::White;
			this->GroupHits->Location = System::Drawing::Point(17, 243);
			this->GroupHits->Name = L"GroupHits";
			this->GroupHits->Size = System::Drawing::Size(395, 100);
			this->GroupHits->TabIndex = 22;
			this->GroupHits->TabStop = false;
			this->GroupHits->Text = L"Попадания";
			// 
			// GroupWounds
			// 
			this->GroupWounds->AutoSize = true;
			this->GroupWounds->BackColor = System::Drawing::Color::Gray;
			this->GroupWounds->Controls->Add(this->LabelWoundCubes);
			this->GroupWounds->Controls->Add(this->LabelWoundCubesInfo);
			this->GroupWounds->Controls->Add(this->LabelPotentialWoundsInfo);
			this->GroupWounds->Controls->Add(this->LabelPotentialWounds);
			this->GroupWounds->Controls->Add(this->LabelWoundConditionInfo);
			this->GroupWounds->Controls->Add(this->LabelWoundCondition);
			this->GroupWounds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->GroupWounds->ForeColor = System::Drawing::Color::White;
			this->GroupWounds->Location = System::Drawing::Point(17, 349);
			this->GroupWounds->Name = L"GroupWounds";
			this->GroupWounds->Size = System::Drawing::Size(395, 119);
			this->GroupWounds->TabIndex = 23;
			this->GroupWounds->TabStop = false;
			this->GroupWounds->Text = L"Раны";
			// 
			// GroupSaves
			// 
			this->GroupSaves->AutoSize = true;
			this->GroupSaves->BackColor = System::Drawing::Color::Gray;
			this->GroupSaves->Controls->Add(this->LabelSaveConditionInfo);
			this->GroupSaves->Controls->Add(this->LabelSaveCondition);
			this->GroupSaves->Controls->Add(this->LabelSaveCubesInfo);
			this->GroupSaves->Controls->Add(this->LabelSurvived);
			this->GroupSaves->Controls->Add(this->LabelSaveCubes);
			this->GroupSaves->Controls->Add(this->LabelSurvivedInfo);
			this->GroupSaves->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->GroupSaves->ForeColor = System::Drawing::Color::White;
			this->GroupSaves->Location = System::Drawing::Point(17, 474);
			this->GroupSaves->Name = L"GroupSaves";
			this->GroupSaves->Size = System::Drawing::Size(395, 124);
			this->GroupSaves->TabIndex = 23;
			this->GroupSaves->TabStop = false;
			this->GroupSaves->Text = L"Спасброски";
			// 
			// ResultBox
			// 
			this->AcceptButton = this->CloseButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(449, 490);
			this->ControlBox = false;
			this->Controls->Add(this->GroupSaves);
			this->Controls->Add(this->GroupWounds);
			this->Controls->Add(this->GroupHits);
			this->Controls->Add(this->LabelHits);
			this->Controls->Add(this->LabelHitsInfo);
			this->Controls->Add(this->LabelWounds);
			this->Controls->Add(this->LabelWoundsInfo);
			this->Controls->Add(this->Picture);
			this->Controls->Add(this->CloseButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"ResultBox";
			this->Text = L"Итог";
			this->Load += gcnew System::EventHandler(this, &ResultBox::ResultBox_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Picture))->EndInit();
			this->GroupHits->ResumeLayout(false);
			this->GroupHits->PerformLayout();
			this->GroupWounds->ResumeLayout(false);
			this->GroupWounds->PerformLayout();
			this->GroupSaves->ResumeLayout(false);
			this->GroupSaves->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//С Т И Л И   К Н О П К И   "З А К Р Ы Т Ь"

private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void CloseButton_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(CloseButton, Color::LightSeaGreen, Color::LightSeaGreen);
		 }
private: System::Void CloseButton_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(CloseButton, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
private: System::Void CloseButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ButtonStyle(CloseButton, Color::White, Color::White);
		 }
private: System::Void CloseButton_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ButtonStyle(CloseButton, Color::PaleTurquoise, Color::PaleTurquoise);
		 }
private: System::Void ResultBox_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->AutoSize = false;
		 }
};
}
