#include "DistantClasses.h"
#include "ResultBox.h"
using namespace System;
using namespace System::Windows::Forms;
class DistantAttacking;
class Conditions;

// � � � � �   � � � � � � � � � �

void PrintingResult (DistantAttacking &player1, DistantAim &player2, Conditions &condition, Results^ result);

//�������
#define RET_IF_F(f) if (f) { return; }

//������ ���� ������ � ���� � ������
void ButtonStyle (System::Windows::Forms::Button^ button, System::Drawing::Color border_color,
				  System::Drawing::Color background_color);

//�������� ������ �� ������� ��� ������� ������ ��� ������� � ������ ����� ������ � TextBox
//���������� ��� ������
Int32 find_error(Int32 value, Int32 min, Int32 max, TextBox^ box, bool parse);

//������������� ����� ������ (true - ���� ������, ����� ���)
bool interpret_error(Int32 code, String^ errLoc);

//������� �������� ������� ���������
Int32 table_bs(Int32 BS, Int32 %HitConditionAdd);

//������������  ���� ���������. Hit_cubes - ������ ��� �������� �����(0 - ��������� ���� ->),
//attacks - ��������� ����, vehicle_under_fire - ���� ����, ��� �������������� �������
//rnd - ������� ��������� ��������� �����, player1 - ����� ������������� ����������
//condition - ����� �������, hits - ���������� ��� �������� ���������� ���������
Int32 CalculateHits(array< Int32 >^ hit_cubes, bool vehicle_under_fire, Random^ rnd, DistantAttacking &player1, Conditions &condition, Int32 %hits);

//������ �������
bool print_error(String ^text, String ^caption, MessageBoxButtons button,
				 MessageBoxIcon icon, bool f, TextBox ^err_field, Int32 val, Int32 min,
				 Int32 max);

Int32 table_ts(Int32 t, Int32 s);
Int32 table_ws(Int32 ws1, Int32 ws2);
bool CheckOnVoid(TextBox ^box);

System::Void win_cubes_throw(System::Int32 blows, System::Int32 &max,
							 System::Int32 &one_counter, System::Int32 &six_counter,
							 array< System::Int32 >^ win_cubes, System::Random^ rnd);

System::Int32 find_max (array< System::Int32 >^ arr, System::Int32 size);

array< System::Int32 >^ battle (System::Int32 combat_score1, System::Int32 combat_score2,
					  System::Int32 _t2, System::Int32 _s1, System::Int32 &wound_condition,
					  System::String^ str, array< System::Int32 >^ hit1_cubes, 
					  System::Int32 &wounds, System::Random^ rnd, System::Int32 &hits);

char *reduce_arrs (array< Int32 >^ cubes, char *buf, Int32 size);

System::Void parry (System::String^ str1, System::String^ str_buf1, System::String^ str_buf2,
					array< System::Int32 >^ win2_cubes, System::Int32 max2, System::Random^ rnd);