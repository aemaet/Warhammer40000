#pragma once
#include "stdafx.h"
#include "w40kFunc.h"
#include "DistantClasses.h"
#include "ResultBox.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//Ф У Н К Ц И Я   В Ы В О Д А   Р Е З У Л Ь Т А Т А

void PrintingResult (DistantAttacking &player1, DistantAim &player2, Conditions &condition, Results^ result)
{
	//инициализации
	Displacements displacement;
	Warhammer40000::ResultBox^ ResultForm = gcnew Warhammer40000::ResultBox;
	ResultForm->Show();
	ResultForm->LabelHits->Text = result->Hits.ToString();
	//

	if (result->Hits == 0) {
		//скрытия
		ResultForm->GroupSaves->Hide();
		ResultForm->GroupWounds->Hide();
		//
		ResultForm->LabelHits->Text = "0";
		ResultForm->Picture->Image = System::Drawing::Image::FromFile("img\\Lose.png");
		//ResultForm->CloseButton->Location = System::Drawing::Point(ResultForm->CloseButton->Location.X,
			
		return;
	}
}

void ButtonStyle (System::Windows::Forms::Button^ button, System::Drawing::Color border_color,
				  System::Drawing::Color background_color)
{
	button->BackColor = background_color;
	button->FlatAppearance->BorderColor = border_color;
}
Int32 find_error(Int32 value, Int32 min, Int32 max, TextBox^ box, bool parse = true)
{
	if (box->Text->Trim() == "") {
		box->Text = "Ошибка";
		return 3; //поле пусто
	}
	if (!parse) {
		box->Text = "Ошибка";
		return 2; //не удалось прочитать число
	}
	if ((value < min) || (value > max)) {
		box->Text = "Ошибка";
		return 1; //ошибка выхода за границы
	}
	return 0;
}


bool interpret_error(Int32 code, String^ errLoc)
{
	String^ interpret;
	switch (code) {
		case 1: 
			interpret = "Ошибка выхода за границы";
			break;
		case 2:
			interpret = "Ошибка чтения числа:\nне удалось преобразовать";
			break;
		case 3:
			interpret = "Ошибка чтения числа:\nполе пусто";
			break;
		case 0:
			return false;
	}
	MessageBox::Show(interpret, errLoc, MessageBoxButtons::OK, MessageBoxIcon::Error);
	return true;
}
Int32 CalculateHits(array< Int32 >^ hit_cubes, bool vehicle_under_fire, Random^ rnd,
			  DistantAttacking &player1, Conditions &condition, Int32 %hits)
{
	Int32 i, attacks = player1.A;
	hits = 0;
	hit_cubes = gcnew array< Int32 >(attacks * 3);
	for (i = 0; i < attacks; i++) {
		hit_cubes[i] = rnd->Next(1, 6);
		if (hit_cubes[i] >= condition.HitCondition) {
			hits++;
		} else if (player1.BS >= 6) {
			hit_cubes[i + 1] = 0;
			hit_cubes[i + 2] = rnd->Next(1, 6);
			if (hit_cubes[i + 2] >= condition.SecondHitCondition) {
				hits++;
			}
			i += 2;
			attacks += 2;
		}
	}
	return attacks;
}
//Т У Т   Я О С Т А Н О В И Л С Я
char *reduce_arrs (array< Int32 >^ cubes, char *buf, Int32 size)
{
	buf = new char[size * 3 + 1];
	for (Int32 i = 0 ; i < size; i++) {
		if (cubes[i] == 0) {
			buf[i] = '-';
			buf[i + 1] = '>';
			i++;
			size++;
		} else {
			buf[i] = cubes[i] - '0';
		}
	}
	buf[size] = 0;
	return buf;
}

//старые функции
bool print_error(String ^text, String ^caption, MessageBoxButtons button,
				 MessageBoxIcon icon, bool f, TextBox ^err_field, Int32 val, Int32 min,
				 Int32 max)
{
	if (err_field->Text->Trim() == "") {
		err_field->Text = "Ошибка";
		MessageBox::Show("Введите значение", caption, button, icon);
		return false;
	}
	if (f == false) return f;
	if ((!f) || (val > max) || (val < min)) {
		System::Windows::Forms::MessageBox::Show(text, caption, button, icon);
		err_field->Text = "Ошибка";
		return false;
	}
	return true;
}

Int32 table_ts(Int32 t, Int32 s)
{
    if (t == s) return 4;
    if (t == s + 1) return 5;
    if (t + 1 == s) return 3;
    if ((t == s + 2) || (t == s + 3)) return 6;
    if (t >= s + 4) return -1;
    return 2;
}

Int32 table_bs(Int32 BS, Int32 %HitConditionAdd)
{
	if (BS < 6){
		return 7 - BS;
	}
	HitConditionAdd = 12 - BS;
	return 2;
}

Int32 table_ws(Int32 ws1, Int32 ws2)
{
	if (ws2 < ws1) return 3;
	if (ws2 > 2 * ws1) return 5;
	return 4;
}

bool CheckOnVoid(TextBox ^box)
{
	if (box->Text->Trim() == "") {
		return 0;
	} else {
		return 1;
	}
}

System::Void win_cubes_throw(System::Int32 blows, System::Int32 &max,
							 System::Int32 &one_counter, System::Int32 &six_counter,
							 array< Int32 >^ win_cubes, System::Random^ rnd)
{
	for (Int32 i = 0; i < blows; i++) {
				 win_cubes[i] = rnd->Next(1, 6);
				 if (win_cubes[i] > win_cubes[max]) {
					 max = i;
				 }
				 if (win_cubes[i] == 1) {
					 one_counter++;
				 }
				 if (win_cubes[i] == 6) {
					 six_counter++;
				 }
			 }
}

System::Int32 find_max (array< System::Int32 >^ arr, System::Int32 size)
{
	System::Int32 max = 0;
	for (System::Int32 i = 1; i < size; i++) {
		if (arr[i] > arr[max]) max = i;
	}
	return max;
}

array< System::Int32 >^ battle (System::Int32 combat_score1, System::Int32 combat_score2,
					  System::Int32 _t2, System::Int32 _s1, System::Int32 &wound_condition,
					  System::String^ str, array< System::Int32 >^ hit1_cubes, 
					  System::Int32 &wounds, System::Random^ rnd, System::Int32 &hits)
{
	hits = combat_score1 - combat_score2;
	wound_condition = table_ts(_t2, _s1);
	if (wound_condition == -1) {
		MessageBox::Show(str + " не может ранить противника этим оружием", "Итог",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return nullptr;
	}
	hit1_cubes = gcnew array< Int32 >(hits);
	for (System::Int32 i = 0; i < hits; i++) {
		hit1_cubes[i] = rnd->Next(1, 6);
		if (hit1_cubes[i] >= wound_condition) wounds++;
	}
	return hit1_cubes;
}

System::Void parry (System::String^ str1, System::String^ str_buf1, System::String^ str_buf2, array< System::Int32 >^ win2_cubes, System::Int32 max2, System::Random^ rnd)
{
	System::Windows::Forms::DialogResult diag_res;
	diag_res= MessageBox::Show(str1 + ", желаете парировать сильнейший удар противника в битве за победу?\n" + "Ваши кубы:" + str_buf1 + "\nКубы противника:" + str_buf2, "Парирование на победу", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (diag_res == System::Windows::Forms::DialogResult::Yes) {
			win2_cubes[max2] = rnd->Next(1, 6);
	}
}